/* Generated code for Python module 'pyasn1.type.base'
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

/* The "module_pyasn1$type$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$type$base;
PyDictObject *moduledict_pyasn1$type$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[259];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[259];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyasn1.type.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 259; i++) {
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
void checkModuleConstants_pyasn1$type$base(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 259; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_663bc0f1e92c9f15402428235747f854;
static PyCodeObject *codeobj_f3ec3dfadab4e21d7c46377e437a190d;
static PyCodeObject *codeobj_4ade62603eb1e11a68b75b2bab96371e;
static PyCodeObject *codeobj_bfba611c14a642d8a5248585a94d8ff8;
static PyCodeObject *codeobj_572fe93f6b2b45708a684e849438e3dd;
static PyCodeObject *codeobj_d6bcf2d80dc63670a673825188bc7518;
static PyCodeObject *codeobj_93b5e98d6a82c0b0f3c255c5773bb53b;
static PyCodeObject *codeobj_ea9477bc95aaeded890681fe3fd98254;
static PyCodeObject *codeobj_0708176cefee4c708acef22e00337415;
static PyCodeObject *codeobj_04656f413f17d0430b0336910959f607;
static PyCodeObject *codeobj_25c7f1afabf2defad745d34536028eb8;
static PyCodeObject *codeobj_90f78445083983fff4c132dc4a9385d6;
static PyCodeObject *codeobj_58216ee1e60366aac2ad22da4aab50be;
static PyCodeObject *codeobj_8b6e9c2b472eeaeb31460765a1d5266e;
static PyCodeObject *codeobj_1d403b2a02665675d9d48407c964b12f;
static PyCodeObject *codeobj_d5ccb4955269c19c53babfe802a160d9;
static PyCodeObject *codeobj_ce49ca9ff2c898dce018b1bc2649ff00;
static PyCodeObject *codeobj_49cbd82698ea2eef6b02f48d48afa577;
static PyCodeObject *codeobj_50b9df4737dbdf9c2d4fd23bcd3fc4d9;
static PyCodeObject *codeobj_08deee05a7f60a079726a68223f67f9f;
static PyCodeObject *codeobj_0a74faf4eb7f00ea449450cf63d7ac5a;
static PyCodeObject *codeobj_47ee89047bf6c14e907d1b72805a45d2;
static PyCodeObject *codeobj_f8c6eaecddae266d0da82d2234e3bb95;
static PyCodeObject *codeobj_c5e9bfc0a586a2e69fc678579e19c8be;
static PyCodeObject *codeobj_97a5a495b6dac31188deb11fa53aa16d;
static PyCodeObject *codeobj_31d83a184df96333cfd440a4071ec6a9;
static PyCodeObject *codeobj_7d1c4e15d2af4cb8bf9268763b336d50;
static PyCodeObject *codeobj_8f8886bdc3b70e87b8f3a2e98b19cc22;
static PyCodeObject *codeobj_cce32da79bdd427b4da57278ef4eedfa;
static PyCodeObject *codeobj_4c72b9d0746a64ca910a80e80ac9e899;
static PyCodeObject *codeobj_2173053583cb20ed3d4082e879bbc608;
static PyCodeObject *codeobj_127007b57ada561be1d7375c2dbb0ba4;
static PyCodeObject *codeobj_b20e315f966d1e72f31e9ea9772e64ab;
static PyCodeObject *codeobj_f6ab264e0cb769828c7f36c08e261f9b;
static PyCodeObject *codeobj_9eaee38cb8ea44255967db84fb28e939;
static PyCodeObject *codeobj_6219a4fd9d28b7965c03f91813364283;
static PyCodeObject *codeobj_5c2556ccca12bbfaa364964de6f96ea8;
static PyCodeObject *codeobj_964a5bbe5b5b8c65d3a89fb672b57982;
static PyCodeObject *codeobj_f4db3966691303e434f856c6a3cce191;
static PyCodeObject *codeobj_c458ca4581f143e53d9bee761f6ac852;
static PyCodeObject *codeobj_adf1c6436ddd0b10dd0a288cc0f93f72;
static PyCodeObject *codeobj_c7026b6fb12e81c78750a68b00b065d7;
static PyCodeObject *codeobj_0dd62dcd2cbf882cab1fd070db5c26cd;
static PyCodeObject *codeobj_3b88eb944a3bd3a3b8d0deb76d762954;
static PyCodeObject *codeobj_556e1c2f209b532106a92217ca598b65;
static PyCodeObject *codeobj_95f53de5fb8309a2e6af9cacc1d6e193;
static PyCodeObject *codeobj_3ac3c3f191af4e33b5eaf162882a9f78;
static PyCodeObject *codeobj_b7e0adde0d836fd9dfbc84589708ee5a;
static PyCodeObject *codeobj_283d93382fe8c98054f0757d92596e7a;
static PyCodeObject *codeobj_52147f5aac2bcc036f08007bd2646ec4;
static PyCodeObject *codeobj_fcf792fd47a15eeb63e8281f0a9cd20b;
static PyCodeObject *codeobj_422dedcccbd581cca099f64d3e198b0a;
static PyCodeObject *codeobj_9afa04a483f2ec34c9f785f2217bc439;
static PyCodeObject *codeobj_5dcb04e7da70fb637552f7d009c5de0e;
static PyCodeObject *codeobj_71ca5a77c5c5e5f30aaed697803a08d3;
static PyCodeObject *codeobj_4211dcbdd5721fefa8377fdafdcc818a;
static PyCodeObject *codeobj_abb622d613a9ebc34bd5238aa38d297e;
static PyCodeObject *codeobj_a74bc630c8804b909dfa9feb41a9e355;
static PyCodeObject *codeobj_79e8565044b56e79ec3c0c5899bbc61e;
static PyCodeObject *codeobj_d0800b00bdea910b7b444d99223e793d;
static PyCodeObject *codeobj_251cc8f15fce8b5f53c5b6b08f3c630a;
static PyCodeObject *codeobj_3b2a41b6a31e33e13b07f0cd5fce9f22;
static PyCodeObject *codeobj_28b619effec2dfabc2d4838746cb9912;
static PyCodeObject *codeobj_c36f2b368ba4c7a52a4d44685d338c9b;
static PyCodeObject *codeobj_4b145d36d002bdebd2772956f00b7307;
static PyCodeObject *codeobj_ffcae663ad048b05695586e9b52174e5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[227]); CHECK_OBJECT(module_filename_obj);
    codeobj_663bc0f1e92c9f15402428235747f854 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[228], mod_consts[228], mod_consts[229], NULL, 1, 0, 0);
    codeobj_f3ec3dfadab4e21d7c46377e437a190d = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[228], mod_consts[228], mod_consts[230], NULL, 1, 0, 0);
    codeobj_4ade62603eb1e11a68b75b2bab96371e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[231], mod_consts[231], NULL, NULL, 0, 0, 0);
    codeobj_bfba611c14a642d8a5248585a94d8ff8 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[232], NULL, 0, 0, 0);
    codeobj_572fe93f6b2b45708a684e849438e3dd = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[232], NULL, 0, 0, 0);
    codeobj_d6bcf2d80dc63670a673825188bc7518 = MAKE_CODE_OBJECT(module_filename_obj, 481, CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[232], NULL, 0, 0, 0);
    codeobj_93b5e98d6a82c0b0f3c255c5773bb53b = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[232], NULL, 0, 0, 0);
    codeobj_ea9477bc95aaeded890681fe3fd98254 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[232], NULL, 0, 0, 0);
    codeobj_0708176cefee4c708acef22e00337415 = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[233], NULL, 1, 0, 0);
    codeobj_04656f413f17d0430b0336910959f607 = MAKE_CODE_OBJECT(module_filename_obj, 571, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[233], NULL, 1, 0, 0);
    codeobj_25c7f1afabf2defad745d34536028eb8 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[234], NULL, 2, 0, 0);
    codeobj_90f78445083983fff4c132dc4a9385d6 = MAKE_CODE_OBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[234], NULL, 2, 0, 0);
    codeobj_58216ee1e60366aac2ad22da4aab50be = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[234], NULL, 2, 0, 0);
    codeobj_8b6e9c2b472eeaeb31460765a1d5266e = MAKE_CODE_OBJECT(module_filename_obj, 564, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[234], NULL, 2, 0, 0);
    codeobj_1d403b2a02665675d9d48407c964b12f = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[235], NULL, 2, 0, 0);
    codeobj_d5ccb4955269c19c53babfe802a160d9 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[234], NULL, 2, 0, 0);
    codeobj_ce49ca9ff2c898dce018b1bc2649ff00 = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[234], NULL, 2, 0, 0);
    codeobj_49cbd82698ea2eef6b02f48d48afa577 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[233], NULL, 1, 0, 0);
    codeobj_50b9df4737dbdf9c2d4fd23bcd3fc4d9 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[236], NULL, 1, 0, 0);
    codeobj_08deee05a7f60a079726a68223f67f9f = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[236], NULL, 1, 0, 0);
    codeobj_0a74faf4eb7f00ea449450cf63d7ac5a = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[237], NULL, 2, 0, 0);
    codeobj_47ee89047bf6c14e907d1b72805a45d2 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[234], NULL, 2, 0, 0);
    codeobj_f8c6eaecddae266d0da82d2234e3bb95 = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[234], NULL, 2, 0, 0);
    codeobj_c5e9bfc0a586a2e69fc678579e19c8be = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[234], NULL, 2, 0, 0);
    codeobj_97a5a495b6dac31188deb11fa53aa16d = MAKE_CODE_OBJECT(module_filename_obj, 555, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[234], NULL, 2, 0, 0);
    codeobj_31d83a184df96333cfd440a4071ec6a9 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[234], NULL, 2, 0, 0);
    codeobj_7d1c4e15d2af4cb8bf9268763b336d50 = MAKE_CODE_OBJECT(module_filename_obj, 552, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[234], NULL, 2, 0, 0);
    codeobj_8f8886bdc3b70e87b8f3a2e98b19cc22 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[238], NULL, 1, 0, 0);
    codeobj_cce32da79bdd427b4da57278ef4eedfa = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[233], NULL, 1, 0, 0);
    codeobj_4c72b9d0746a64ca910a80e80ac9e899 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[239], NULL, 1, 0, 0);
    codeobj_2173053583cb20ed3d4082e879bbc608 = MAKE_CODE_OBJECT(module_filename_obj, 534, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[239], NULL, 1, 0, 0);
    codeobj_127007b57ada561be1d7375c2dbb0ba4 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[240], NULL, 3, 0, 0);
    codeobj_b20e315f966d1e72f31e9ea9772e64ab = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[233], NULL, 1, 0, 0);
    codeobj_f6ab264e0cb769828c7f36c08e261f9b = MAKE_CODE_OBJECT(module_filename_obj, 578, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[241], NULL, 3, 0, 0);
    codeobj_9eaee38cb8ea44255967db84fb28e939 = MAKE_CODE_OBJECT(module_filename_obj, 519, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[242], NULL, 1, 0, 0);
    codeobj_6219a4fd9d28b7965c03f91813364283 = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[243], NULL, 1, 0, 0);
    codeobj_5c2556ccca12bbfaa364964de6f96ea8 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[244], NULL, 2, 0, 0);
    codeobj_964a5bbe5b5b8c65d3a89fb672b57982 = MAKE_CODE_OBJECT(module_filename_obj, 574, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[233], NULL, 1, 0, 0);
    codeobj_f4db3966691303e434f856c6a3cce191 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[233], NULL, 1, 0, 0);
    codeobj_c458ca4581f143e53d9bee761f6ac852 = MAKE_CODE_OBJECT(module_filename_obj, 680, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[245], NULL, 2, 0, 0);
    codeobj_adf1c6436ddd0b10dd0a288cc0f93f72 = MAKE_CODE_OBJECT(module_filename_obj, 698, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[222], mod_consts[222], mod_consts[233], NULL, 1, 0, 0);
    codeobj_c7026b6fb12e81c78750a68b00b065d7 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[233], NULL, 1, 0, 0);
    codeobj_0dd62dcd2cbf882cab1fd070db5c26cd = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[246], NULL, 1, 0, 0);
    codeobj_3b88eb944a3bd3a3b8d0deb76d762954 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[233], NULL, 1, 0, 0);
    codeobj_556e1c2f209b532106a92217ca598b65 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[233], NULL, 1, 0, 0);
    codeobj_95f53de5fb8309a2e6af9cacc1d6e193 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[233], NULL, 1, 0, 0);
    codeobj_3ac3c3f191af4e33b5eaf162882a9f78 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[247], NULL, 2, 0, 0);
    codeobj_b7e0adde0d836fd9dfbc84589708ee5a = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[233], NULL, 1, 0, 0);
    codeobj_283d93382fe8c98054f0757d92596e7a = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[248], NULL, 0, 0, 0);
    codeobj_52147f5aac2bcc036f08007bd2646ec4 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[249], NULL, 4, 0, 0);
    codeobj_fcf792fd47a15eeb63e8281f0a9cd20b = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[249], NULL, 4, 0, 0);
    codeobj_422dedcccbd581cca099f64d3e198b0a = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[233], NULL, 1, 0, 0);
    codeobj_9afa04a483f2ec34c9f785f2217bc439 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[39], mod_consts[39], mod_consts[250], mod_consts[251], 1, 0, 0);
    codeobj_5dcb04e7da70fb637552f7d009c5de0e = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[252], NULL, 2, 0, 0);
    codeobj_71ca5a77c5c5e5f30aaed697803a08d3 = MAKE_CODE_OBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[252], NULL, 2, 0, 0);
    codeobj_4211dcbdd5721fefa8377fdafdcc818a = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[253], NULL, 2, 0, 0);
    codeobj_abb622d613a9ebc34bd5238aa38d297e = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[253], NULL, 2, 0, 0);
    codeobj_a74bc630c8804b909dfa9feb41a9e355 = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[253], NULL, 2, 0, 0);
    codeobj_79e8565044b56e79ec3c0c5899bbc61e = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[233], NULL, 1, 0, 0);
    codeobj_d0800b00bdea910b7b444d99223e793d = MAKE_CODE_OBJECT(module_filename_obj, 683, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[216], mod_consts[254], NULL, 4, 0, 0);
    codeobj_251cc8f15fce8b5f53c5b6b08f3c630a = MAKE_CODE_OBJECT(module_filename_obj, 686, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[218], mod_consts[218], mod_consts[255], NULL, 1, 0, 0);
    codeobj_3b2a41b6a31e33e13b07f0cd5fce9f22 = MAKE_CODE_OBJECT(module_filename_obj, 695, CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[233], NULL, 1, 0, 0);
    codeobj_28b619effec2dfabc2d4838746cb9912 = MAKE_CODE_OBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[256], NULL, 1, 0, 0);
    codeobj_c36f2b368ba4c7a52a4d44685d338c9b = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[257], NULL, 2, 0, 0);
    codeobj_4b145d36d002bdebd2772956f00b7307 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[233], NULL, 1, 0, 0);
    codeobj_ffcae663ad048b05695586e9b52174e5 = MAKE_CODE_OBJECT(module_filename_obj, 702, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[224], mod_consts[233], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__11_prettyPrint(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__12_getTagSet();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__13_getEffectiveTagSet();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__14_getTagMap();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__15_getSubtypeSpec();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__16_hasValue();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__18___getattr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__19___repr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__20___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__21___repr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__22___eq__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__23___ne__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__24___lt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__25___le__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__26___gt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__27___ge__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__29___bool__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__2___init__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__30___hash__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__31_isValue();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__32_clone(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__33_subtype(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__34_prettyIn();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__35_prettyOut();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__36_prettyPrint(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__37_prettyPrintType(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__38___init__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__39__moveSizeSpec();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__3___setattr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__40___repr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__41___eq__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__42___ne__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__43___lt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__44___le__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__45___gt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__46___ge__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__48___bool__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__49_components();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__4___str__();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__50__cloneComponentValues();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__51_clone();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__52_subtype();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__53_getComponentByPosition();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__54_setComponentByPosition(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__55_setComponents();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__56_setDefaultComponents();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__57_getComponentType();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__58_verifySizeSpec();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap();


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__8_isSameTypeWith(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__9_isSuperTypeOf(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pyasn1$type$base$$$function__1_getTypeId(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_increment = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_3ac3c3f191af4e33b5eaf162882a9f78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3ac3c3f191af4e33b5eaf162882a9f78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ac3c3f191af4e33b5eaf162882a9f78)) {
        Py_XDECREF(cache_frame_3ac3c3f191af4e33b5eaf162882a9f78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ac3c3f191af4e33b5eaf162882a9f78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ac3c3f191af4e33b5eaf162882a9f78 = MAKE_FUNCTION_FRAME(codeobj_3ac3c3f191af4e33b5eaf162882a9f78, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ac3c3f191af4e33b5eaf162882a9f78->m_type_description == NULL);
    frame_3ac3c3f191af4e33b5eaf162882a9f78 = cache_frame_3ac3c3f191af4e33b5eaf162882a9f78;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ac3c3f191af4e33b5eaf162882a9f78);
    assert(Py_REFCNT(frame_3ac3c3f191af4e33b5eaf162882a9f78) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_increment);
        tmp_iadd_expr_right_1 = par_increment;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto try_except_handler_2;
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    goto try_end_2;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_3ac3c3f191af4e33b5eaf162882a9f78, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_3ac3c3f191af4e33b5eaf162882a9f78, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_increment);
        tmp_assattr_value_2 = par_increment;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 22;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3ac3c3f191af4e33b5eaf162882a9f78->m_frame) frame_3ac3c3f191af4e33b5eaf162882a9f78->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
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
        exception_tb = MAKE_TRACEBACK(frame_3ac3c3f191af4e33b5eaf162882a9f78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ac3c3f191af4e33b5eaf162882a9f78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ac3c3f191af4e33b5eaf162882a9f78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ac3c3f191af4e33b5eaf162882a9f78,
        type_description_1,
        par_cls,
        par_increment
    );


    // Release cached frame if used for exception.
    if (frame_3ac3c3f191af4e33b5eaf162882a9f78 == cache_frame_3ac3c3f191af4e33b5eaf162882a9f78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ac3c3f191af4e33b5eaf162882a9f78);
        cache_frame_3ac3c3f191af4e33b5eaf162882a9f78 = NULL;
    }

    assertFrameObject(frame_3ac3c3f191af4e33b5eaf162882a9f78);

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
    CHECK_OBJECT(par_increment);
    Py_DECREF(par_increment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_increment);
    Py_DECREF(par_increment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_readOnly = NULL;
    struct Nuitka_FrameObject *frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9)) {
        Py_XDECREF(cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9 = MAKE_FUNCTION_FRAME(codeobj_50b9df4737dbdf9c2d4fd23bcd3fc4d9, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9->m_type_description == NULL);
    frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9 = cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9);
    assert(Py_REFCNT(frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_readOnly == NULL);
        var_readOnly = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(var_readOnly);
        tmp_dict_arg_value_1 = var_readOnly;
        CHECK_OBJECT(par_kwargs);
        tmp_iterable_value_1 = par_kwargs;
        assert(PyDict_Check(tmp_dict_arg_value_1));
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_readOnly);
        tmp_args_element_value_1 = var_readOnly;
        frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_readOnly);
        tmp_assattr_value_1 = var_readOnly;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9,
        type_description_1,
        par_self,
        par_kwargs,
        var_readOnly
    );


    // Release cached frame if used for exception.
    if (frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9 == cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9);
        cache_frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9 = NULL;
    }

    assertFrameObject(frame_50b9df4737dbdf9c2d4fd23bcd3fc4d9);

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
    CHECK_OBJECT(var_readOnly);
    Py_DECREF(var_readOnly);
    var_readOnly = NULL;
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

    Py_XDECREF(var_readOnly);
    var_readOnly = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__3___setattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_127007b57ada561be1d7375c2dbb0ba4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_127007b57ada561be1d7375c2dbb0ba4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_127007b57ada561be1d7375c2dbb0ba4)) {
        Py_XDECREF(cache_frame_127007b57ada561be1d7375c2dbb0ba4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_127007b57ada561be1d7375c2dbb0ba4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_127007b57ada561be1d7375c2dbb0ba4 = MAKE_FUNCTION_FRAME(codeobj_127007b57ada561be1d7375c2dbb0ba4, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_127007b57ada561be1d7375c2dbb0ba4->m_type_description == NULL);
    frame_127007b57ada561be1d7375c2dbb0ba4 = cache_frame_127007b57ada561be1d7375c2dbb0ba4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_127007b57ada561be1d7375c2dbb0ba4);
    assert(Py_REFCNT(frame_127007b57ada561be1d7375c2dbb0ba4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_name);
        tmp_expression_value_1 = par_name;
        tmp_subscript_value_1 = mod_consts[6];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[7];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_2 = par_name;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_name);
        tmp_mod_expr_right_1 = par_name;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_127007b57ada561be1d7375c2dbb0ba4->m_frame.f_lineno = 65;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 65;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_4);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_127007b57ada561be1d7375c2dbb0ba4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_127007b57ada561be1d7375c2dbb0ba4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_127007b57ada561be1d7375c2dbb0ba4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_127007b57ada561be1d7375c2dbb0ba4,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_127007b57ada561be1d7375c2dbb0ba4 == cache_frame_127007b57ada561be1d7375c2dbb0ba4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_127007b57ada561be1d7375c2dbb0ba4);
        cache_frame_127007b57ada561be1d7375c2dbb0ba4 = NULL;
    }

    assertFrameObject(frame_127007b57ada561be1d7375c2dbb0ba4);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__4___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b20e315f966d1e72f31e9ea9772e64ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b20e315f966d1e72f31e9ea9772e64ab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b20e315f966d1e72f31e9ea9772e64ab)) {
        Py_XDECREF(cache_frame_b20e315f966d1e72f31e9ea9772e64ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b20e315f966d1e72f31e9ea9772e64ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b20e315f966d1e72f31e9ea9772e64ab = MAKE_FUNCTION_FRAME(codeobj_b20e315f966d1e72f31e9ea9772e64ab, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b20e315f966d1e72f31e9ea9772e64ab->m_type_description == NULL);
    frame_b20e315f966d1e72f31e9ea9772e64ab = cache_frame_b20e315f966d1e72f31e9ea9772e64ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b20e315f966d1e72f31e9ea9772e64ab);
    assert(Py_REFCNT(frame_b20e315f966d1e72f31e9ea9772e64ab) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b20e315f966d1e72f31e9ea9772e64ab->m_frame.f_lineno = 70;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[12]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_b20e315f966d1e72f31e9ea9772e64ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b20e315f966d1e72f31e9ea9772e64ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b20e315f966d1e72f31e9ea9772e64ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b20e315f966d1e72f31e9ea9772e64ab,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b20e315f966d1e72f31e9ea9772e64ab == cache_frame_b20e315f966d1e72f31e9ea9772e64ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b20e315f966d1e72f31e9ea9772e64ab);
        cache_frame_b20e315f966d1e72f31e9ea9772e64ab = NULL;
    }

    assertFrameObject(frame_b20e315f966d1e72f31e9ea9772e64ab);

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


static PyObject *impl_pyasn1$type$base$$$function__5_readOnly(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_79e8565044b56e79ec3c0c5899bbc61e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79e8565044b56e79ec3c0c5899bbc61e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79e8565044b56e79ec3c0c5899bbc61e)) {
        Py_XDECREF(cache_frame_79e8565044b56e79ec3c0c5899bbc61e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79e8565044b56e79ec3c0c5899bbc61e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79e8565044b56e79ec3c0c5899bbc61e = MAKE_FUNCTION_FRAME(codeobj_79e8565044b56e79ec3c0c5899bbc61e, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79e8565044b56e79ec3c0c5899bbc61e->m_type_description == NULL);
    frame_79e8565044b56e79ec3c0c5899bbc61e = cache_frame_79e8565044b56e79ec3c0c5899bbc61e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_79e8565044b56e79ec3c0c5899bbc61e);
    assert(Py_REFCNT(frame_79e8565044b56e79ec3c0c5899bbc61e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_79e8565044b56e79ec3c0c5899bbc61e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79e8565044b56e79ec3c0c5899bbc61e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79e8565044b56e79ec3c0c5899bbc61e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79e8565044b56e79ec3c0c5899bbc61e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_79e8565044b56e79ec3c0c5899bbc61e == cache_frame_79e8565044b56e79ec3c0c5899bbc61e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79e8565044b56e79ec3c0c5899bbc61e);
        cache_frame_79e8565044b56e79ec3c0c5899bbc61e = NULL;
    }

    assertFrameObject(frame_79e8565044b56e79ec3c0c5899bbc61e);

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


static PyObject *impl_pyasn1$type$base$$$function__6_effectiveTagSet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f4db3966691303e434f856c6a3cce191;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4db3966691303e434f856c6a3cce191 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4db3966691303e434f856c6a3cce191)) {
        Py_XDECREF(cache_frame_f4db3966691303e434f856c6a3cce191);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4db3966691303e434f856c6a3cce191 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4db3966691303e434f856c6a3cce191 = MAKE_FUNCTION_FRAME(codeobj_f4db3966691303e434f856c6a3cce191, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4db3966691303e434f856c6a3cce191->m_type_description == NULL);
    frame_f4db3966691303e434f856c6a3cce191 = cache_frame_f4db3966691303e434f856c6a3cce191;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4db3966691303e434f856c6a3cce191);
    assert(Py_REFCNT(frame_f4db3966691303e434f856c6a3cce191) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_f4db3966691303e434f856c6a3cce191, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4db3966691303e434f856c6a3cce191->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4db3966691303e434f856c6a3cce191, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4db3966691303e434f856c6a3cce191,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f4db3966691303e434f856c6a3cce191 == cache_frame_f4db3966691303e434f856c6a3cce191) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4db3966691303e434f856c6a3cce191);
        cache_frame_f4db3966691303e434f856c6a3cce191 = NULL;
    }

    assertFrameObject(frame_f4db3966691303e434f856c6a3cce191);

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


static PyObject *impl_pyasn1$type$base$$$function__7_tagMap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4b145d36d002bdebd2772956f00b7307;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4b145d36d002bdebd2772956f00b7307 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b145d36d002bdebd2772956f00b7307)) {
        Py_XDECREF(cache_frame_4b145d36d002bdebd2772956f00b7307);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b145d36d002bdebd2772956f00b7307 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b145d36d002bdebd2772956f00b7307 = MAKE_FUNCTION_FRAME(codeobj_4b145d36d002bdebd2772956f00b7307, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b145d36d002bdebd2772956f00b7307->m_type_description == NULL);
    frame_4b145d36d002bdebd2772956f00b7307 = cache_frame_4b145d36d002bdebd2772956f00b7307;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4b145d36d002bdebd2772956f00b7307);
    assert(Py_REFCNT(frame_4b145d36d002bdebd2772956f00b7307) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_dict_value_1 = par_self;
        tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_key_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_4b145d36d002bdebd2772956f00b7307->m_frame.f_lineno = 86;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
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
        exception_tb = MAKE_TRACEBACK(frame_4b145d36d002bdebd2772956f00b7307, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b145d36d002bdebd2772956f00b7307->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b145d36d002bdebd2772956f00b7307, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b145d36d002bdebd2772956f00b7307,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4b145d36d002bdebd2772956f00b7307 == cache_frame_4b145d36d002bdebd2772956f00b7307) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b145d36d002bdebd2772956f00b7307);
        cache_frame_4b145d36d002bdebd2772956f00b7307 = NULL;
    }

    assertFrameObject(frame_4b145d36d002bdebd2772956f00b7307);

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


static PyObject *impl_pyasn1$type$base$$$function__8_isSameTypeWith(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_matchTags = python_pars[2];
    PyObject *par_matchConstraints = python_pars[3];
    struct Nuitka_FrameObject *frame_52147f5aac2bcc036f08007bd2646ec4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52147f5aac2bcc036f08007bd2646ec4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_52147f5aac2bcc036f08007bd2646ec4)) {
        Py_XDECREF(cache_frame_52147f5aac2bcc036f08007bd2646ec4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52147f5aac2bcc036f08007bd2646ec4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52147f5aac2bcc036f08007bd2646ec4 = MAKE_FUNCTION_FRAME(codeobj_52147f5aac2bcc036f08007bd2646ec4, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52147f5aac2bcc036f08007bd2646ec4->m_type_description == NULL);
    frame_52147f5aac2bcc036f08007bd2646ec4 = cache_frame_52147f5aac2bcc036f08007bd2646ec4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52147f5aac2bcc036f08007bd2646ec4);
    assert(Py_REFCNT(frame_52147f5aac2bcc036f08007bd2646ec4) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_matchTags);
        tmp_operand_value_1 = par_matchTags;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_and_left_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 109;
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
        CHECK_OBJECT(par_matchConstraints);
        tmp_operand_value_2 = par_matchConstraints;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_other;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        Py_INCREF(tmp_or_left_value_3);
        tmp_and_right_value_1 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_52147f5aac2bcc036f08007bd2646ec4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52147f5aac2bcc036f08007bd2646ec4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52147f5aac2bcc036f08007bd2646ec4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52147f5aac2bcc036f08007bd2646ec4,
        type_description_1,
        par_self,
        par_other,
        par_matchTags,
        par_matchConstraints
    );


    // Release cached frame if used for exception.
    if (frame_52147f5aac2bcc036f08007bd2646ec4 == cache_frame_52147f5aac2bcc036f08007bd2646ec4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52147f5aac2bcc036f08007bd2646ec4);
        cache_frame_52147f5aac2bcc036f08007bd2646ec4 = NULL;
    }

    assertFrameObject(frame_52147f5aac2bcc036f08007bd2646ec4);

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
    CHECK_OBJECT(par_matchTags);
    Py_DECREF(par_matchTags);
    CHECK_OBJECT(par_matchConstraints);
    Py_DECREF(par_matchConstraints);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_matchTags);
    Py_DECREF(par_matchTags);
    CHECK_OBJECT(par_matchConstraints);
    Py_DECREF(par_matchConstraints);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__9_isSuperTypeOf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_matchTags = python_pars[2];
    PyObject *par_matchConstraints = python_pars[3];
    struct Nuitka_FrameObject *frame_fcf792fd47a15eeb63e8281f0a9cd20b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b)) {
        Py_XDECREF(cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b = MAKE_FUNCTION_FRAME(codeobj_fcf792fd47a15eeb63e8281f0a9cd20b, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b->m_type_description == NULL);
    frame_fcf792fd47a15eeb63e8281f0a9cd20b = cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fcf792fd47a15eeb63e8281f0a9cd20b);
    assert(Py_REFCNT(frame_fcf792fd47a15eeb63e8281f0a9cd20b) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_matchTags);
        tmp_operand_value_1 = par_matchTags;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_3 = par_other;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fcf792fd47a15eeb63e8281f0a9cd20b->m_frame.f_lineno = 133;
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 133;
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
        CHECK_OBJECT(par_matchConstraints);
        tmp_operand_value_2 = par_matchConstraints;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_6 = par_other;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fcf792fd47a15eeb63e8281f0a9cd20b->m_frame.f_lineno = 134;
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_and_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_fcf792fd47a15eeb63e8281f0a9cd20b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcf792fd47a15eeb63e8281f0a9cd20b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcf792fd47a15eeb63e8281f0a9cd20b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcf792fd47a15eeb63e8281f0a9cd20b,
        type_description_1,
        par_self,
        par_other,
        par_matchTags,
        par_matchConstraints
    );


    // Release cached frame if used for exception.
    if (frame_fcf792fd47a15eeb63e8281f0a9cd20b == cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b);
        cache_frame_fcf792fd47a15eeb63e8281f0a9cd20b = NULL;
    }

    assertFrameObject(frame_fcf792fd47a15eeb63e8281f0a9cd20b);

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
    CHECK_OBJECT(par_matchTags);
    Py_DECREF(par_matchTags);
    CHECK_OBJECT(par_matchConstraints);
    Py_DECREF(par_matchConstraints);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_matchTags);
    Py_DECREF(par_matchTags);
    CHECK_OBJECT(par_matchConstraints);
    Py_DECREF(par_matchConstraints);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__10_isNoValue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_283d93382fe8c98054f0757d92596e7a;
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
    static struct Nuitka_FrameObject *cache_frame_283d93382fe8c98054f0757d92596e7a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_283d93382fe8c98054f0757d92596e7a)) {
        Py_XDECREF(cache_frame_283d93382fe8c98054f0757d92596e7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_283d93382fe8c98054f0757d92596e7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_283d93382fe8c98054f0757d92596e7a = MAKE_FUNCTION_FRAME(codeobj_283d93382fe8c98054f0757d92596e7a, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_283d93382fe8c98054f0757d92596e7a->m_type_description == NULL);
    frame_283d93382fe8c98054f0757d92596e7a = cache_frame_283d93382fe8c98054f0757d92596e7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_283d93382fe8c98054f0757d92596e7a);
    assert(Py_REFCNT(frame_283d93382fe8c98054f0757d92596e7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_values);
        tmp_iter_arg_1 = par_values;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 138;
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
            PyObject *old = var_value;
            var_value = tmp_assign_source_3;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 138;
        type_description_1 = "oo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_283d93382fe8c98054f0757d92596e7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_283d93382fe8c98054f0757d92596e7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_283d93382fe8c98054f0757d92596e7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_283d93382fe8c98054f0757d92596e7a,
        type_description_1,
        par_values,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_283d93382fe8c98054f0757d92596e7a == cache_frame_283d93382fe8c98054f0757d92596e7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_283d93382fe8c98054f0757d92596e7a);
        cache_frame_283d93382fe8c98054f0757d92596e7a = NULL;
    }

    assertFrameObject(frame_283d93382fe8c98054f0757d92596e7a);

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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_value);
    var_value = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__11_prettyPrint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scope = python_pars[1];
    struct Nuitka_FrameObject *frame_4211dcbdd5721fefa8377fdafdcc818a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4211dcbdd5721fefa8377fdafdcc818a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4211dcbdd5721fefa8377fdafdcc818a)) {
        Py_XDECREF(cache_frame_4211dcbdd5721fefa8377fdafdcc818a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4211dcbdd5721fefa8377fdafdcc818a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4211dcbdd5721fefa8377fdafdcc818a = MAKE_FUNCTION_FRAME(codeobj_4211dcbdd5721fefa8377fdafdcc818a, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4211dcbdd5721fefa8377fdafdcc818a->m_type_description == NULL);
    frame_4211dcbdd5721fefa8377fdafdcc818a = cache_frame_4211dcbdd5721fefa8377fdafdcc818a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4211dcbdd5721fefa8377fdafdcc818a);
    assert(Py_REFCNT(frame_4211dcbdd5721fefa8377fdafdcc818a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4211dcbdd5721fefa8377fdafdcc818a->m_frame.f_lineno = 144;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 144;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4211dcbdd5721fefa8377fdafdcc818a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4211dcbdd5721fefa8377fdafdcc818a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4211dcbdd5721fefa8377fdafdcc818a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4211dcbdd5721fefa8377fdafdcc818a,
        type_description_1,
        par_self,
        par_scope
    );


    // Release cached frame if used for exception.
    if (frame_4211dcbdd5721fefa8377fdafdcc818a == cache_frame_4211dcbdd5721fefa8377fdafdcc818a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4211dcbdd5721fefa8377fdafdcc818a);
        cache_frame_4211dcbdd5721fefa8377fdafdcc818a = NULL;
    }

    assertFrameObject(frame_4211dcbdd5721fefa8377fdafdcc818a);

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
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__12_getTagSet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_95f53de5fb8309a2e6af9cacc1d6e193;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_95f53de5fb8309a2e6af9cacc1d6e193 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_95f53de5fb8309a2e6af9cacc1d6e193)) {
        Py_XDECREF(cache_frame_95f53de5fb8309a2e6af9cacc1d6e193);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95f53de5fb8309a2e6af9cacc1d6e193 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95f53de5fb8309a2e6af9cacc1d6e193 = MAKE_FUNCTION_FRAME(codeobj_95f53de5fb8309a2e6af9cacc1d6e193, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_95f53de5fb8309a2e6af9cacc1d6e193->m_type_description == NULL);
    frame_95f53de5fb8309a2e6af9cacc1d6e193 = cache_frame_95f53de5fb8309a2e6af9cacc1d6e193;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_95f53de5fb8309a2e6af9cacc1d6e193);
    assert(Py_REFCNT(frame_95f53de5fb8309a2e6af9cacc1d6e193) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_95f53de5fb8309a2e6af9cacc1d6e193, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95f53de5fb8309a2e6af9cacc1d6e193->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95f53de5fb8309a2e6af9cacc1d6e193, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95f53de5fb8309a2e6af9cacc1d6e193,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_95f53de5fb8309a2e6af9cacc1d6e193 == cache_frame_95f53de5fb8309a2e6af9cacc1d6e193) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_95f53de5fb8309a2e6af9cacc1d6e193);
        cache_frame_95f53de5fb8309a2e6af9cacc1d6e193 = NULL;
    }

    assertFrameObject(frame_95f53de5fb8309a2e6af9cacc1d6e193);

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


static PyObject *impl_pyasn1$type$base$$$function__13_getEffectiveTagSet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c7026b6fb12e81c78750a68b00b065d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c7026b6fb12e81c78750a68b00b065d7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c7026b6fb12e81c78750a68b00b065d7)) {
        Py_XDECREF(cache_frame_c7026b6fb12e81c78750a68b00b065d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7026b6fb12e81c78750a68b00b065d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7026b6fb12e81c78750a68b00b065d7 = MAKE_FUNCTION_FRAME(codeobj_c7026b6fb12e81c78750a68b00b065d7, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7026b6fb12e81c78750a68b00b065d7->m_type_description == NULL);
    frame_c7026b6fb12e81c78750a68b00b065d7 = cache_frame_c7026b6fb12e81c78750a68b00b065d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c7026b6fb12e81c78750a68b00b065d7);
    assert(Py_REFCNT(frame_c7026b6fb12e81c78750a68b00b065d7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_c7026b6fb12e81c78750a68b00b065d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7026b6fb12e81c78750a68b00b065d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7026b6fb12e81c78750a68b00b065d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7026b6fb12e81c78750a68b00b065d7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c7026b6fb12e81c78750a68b00b065d7 == cache_frame_c7026b6fb12e81c78750a68b00b065d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7026b6fb12e81c78750a68b00b065d7);
        cache_frame_c7026b6fb12e81c78750a68b00b065d7 = NULL;
    }

    assertFrameObject(frame_c7026b6fb12e81c78750a68b00b065d7);

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


static PyObject *impl_pyasn1$type$base$$$function__14_getTagMap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_556e1c2f209b532106a92217ca598b65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_556e1c2f209b532106a92217ca598b65 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_556e1c2f209b532106a92217ca598b65)) {
        Py_XDECREF(cache_frame_556e1c2f209b532106a92217ca598b65);

#if _DEBUG_REFCOUNTS
        if (cache_frame_556e1c2f209b532106a92217ca598b65 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_556e1c2f209b532106a92217ca598b65 = MAKE_FUNCTION_FRAME(codeobj_556e1c2f209b532106a92217ca598b65, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_556e1c2f209b532106a92217ca598b65->m_type_description == NULL);
    frame_556e1c2f209b532106a92217ca598b65 = cache_frame_556e1c2f209b532106a92217ca598b65;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_556e1c2f209b532106a92217ca598b65);
    assert(Py_REFCNT(frame_556e1c2f209b532106a92217ca598b65) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_556e1c2f209b532106a92217ca598b65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_556e1c2f209b532106a92217ca598b65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_556e1c2f209b532106a92217ca598b65, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_556e1c2f209b532106a92217ca598b65,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_556e1c2f209b532106a92217ca598b65 == cache_frame_556e1c2f209b532106a92217ca598b65) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_556e1c2f209b532106a92217ca598b65);
        cache_frame_556e1c2f209b532106a92217ca598b65 = NULL;
    }

    assertFrameObject(frame_556e1c2f209b532106a92217ca598b65);

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


static PyObject *impl_pyasn1$type$base$$$function__15_getSubtypeSpec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3b88eb944a3bd3a3b8d0deb76d762954;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b88eb944a3bd3a3b8d0deb76d762954 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3b88eb944a3bd3a3b8d0deb76d762954)) {
        Py_XDECREF(cache_frame_3b88eb944a3bd3a3b8d0deb76d762954);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b88eb944a3bd3a3b8d0deb76d762954 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b88eb944a3bd3a3b8d0deb76d762954 = MAKE_FUNCTION_FRAME(codeobj_3b88eb944a3bd3a3b8d0deb76d762954, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b88eb944a3bd3a3b8d0deb76d762954->m_type_description == NULL);
    frame_3b88eb944a3bd3a3b8d0deb76d762954 = cache_frame_3b88eb944a3bd3a3b8d0deb76d762954;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b88eb944a3bd3a3b8d0deb76d762954);
    assert(Py_REFCNT(frame_3b88eb944a3bd3a3b8d0deb76d762954) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
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
        exception_tb = MAKE_TRACEBACK(frame_3b88eb944a3bd3a3b8d0deb76d762954, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b88eb944a3bd3a3b8d0deb76d762954->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b88eb944a3bd3a3b8d0deb76d762954, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b88eb944a3bd3a3b8d0deb76d762954,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3b88eb944a3bd3a3b8d0deb76d762954 == cache_frame_3b88eb944a3bd3a3b8d0deb76d762954) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b88eb944a3bd3a3b8d0deb76d762954);
        cache_frame_3b88eb944a3bd3a3b8d0deb76d762954 = NULL;
    }

    assertFrameObject(frame_3b88eb944a3bd3a3b8d0deb76d762954);

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


static PyObject *impl_pyasn1$type$base$$$function__16_hasValue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b7e0adde0d836fd9dfbc84589708ee5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b7e0adde0d836fd9dfbc84589708ee5a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b7e0adde0d836fd9dfbc84589708ee5a)) {
        Py_XDECREF(cache_frame_b7e0adde0d836fd9dfbc84589708ee5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7e0adde0d836fd9dfbc84589708ee5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7e0adde0d836fd9dfbc84589708ee5a = MAKE_FUNCTION_FRAME(codeobj_b7e0adde0d836fd9dfbc84589708ee5a, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7e0adde0d836fd9dfbc84589708ee5a->m_type_description == NULL);
    frame_b7e0adde0d836fd9dfbc84589708ee5a = cache_frame_b7e0adde0d836fd9dfbc84589708ee5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7e0adde0d836fd9dfbc84589708ee5a);
    assert(Py_REFCNT(frame_b7e0adde0d836fd9dfbc84589708ee5a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
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
        exception_tb = MAKE_TRACEBACK(frame_b7e0adde0d836fd9dfbc84589708ee5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7e0adde0d836fd9dfbc84589708ee5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7e0adde0d836fd9dfbc84589708ee5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7e0adde0d836fd9dfbc84589708ee5a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b7e0adde0d836fd9dfbc84589708ee5a == cache_frame_b7e0adde0d836fd9dfbc84589708ee5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7e0adde0d836fd9dfbc84589708ee5a);
        cache_frame_b7e0adde0d836fd9dfbc84589708ee5a = NULL;
    }

    assertFrameObject(frame_b7e0adde0d836fd9dfbc84589708ee5a);

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


static PyObject *impl_pyasn1$type$base$$$function__17___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_getPlug = NULL;
    PyObject *var_op_names = NULL;
    PyObject *var_name = NULL;
    PyObject *outline_0_var_typ = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_8f8886bdc3b70e87b8f3a2e98b19cc22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_663bc0f1e92c9f15402428235747f854_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_663bc0f1e92c9f15402428235747f854_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22)) {
        Py_XDECREF(cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22 = MAKE_FUNCTION_FRAME(codeobj_8f8886bdc3b70e87b8f3a2e98b19cc22, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22->m_type_description == NULL);
    frame_8f8886bdc3b70e87b8f3a2e98b19cc22 = cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f8886bdc3b70e87b8f3a2e98b19cc22);
    assert(Py_REFCNT(frame_8f8886bdc3b70e87b8f3a2e98b19cc22) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug();

        assert(var_getPlug == NULL);
        var_getPlug = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[29];
            tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_3 == NULL));
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_663bc0f1e92c9f15402428235747f854_2)) {
            Py_XDECREF(cache_frame_663bc0f1e92c9f15402428235747f854_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_663bc0f1e92c9f15402428235747f854_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_663bc0f1e92c9f15402428235747f854_2 = MAKE_FUNCTION_FRAME(codeobj_663bc0f1e92c9f15402428235747f854, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_663bc0f1e92c9f15402428235747f854_2->m_type_description == NULL);
        frame_663bc0f1e92c9f15402428235747f854_2 = cache_frame_663bc0f1e92c9f15402428235747f854_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_663bc0f1e92c9f15402428235747f854_2);
        assert(Py_REFCNT(frame_663bc0f1e92c9f15402428235747f854_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 217;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_typ;
                outline_0_var_typ = tmp_assign_source_6;
                Py_INCREF(outline_0_var_typ);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_dir_arg_1;
            CHECK_OBJECT(outline_0_var_typ);
            tmp_dir_arg_1 = outline_0_var_typ;
            tmp_iter_arg_2 = PyObject_Dir(tmp_dir_arg_1);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 217;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_name;
                outline_0_var_name = tmp_assign_source_9;
                Py_INCREF(outline_0_var_name);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_expression_value_2;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_call_result_2;
            int tmp_truth_name_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            int tmp_truth_name_3;
            CHECK_OBJECT(outline_0_var_name);
            tmp_cmp_expr_left_2 = outline_0_var_name;
            if (par_cls == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 220;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_expression_value_2 = par_cls;
            tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
            if (tmp_cmp_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
            Py_DECREF(tmp_cmp_expr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            CHECK_OBJECT(outline_0_var_name);
            tmp_expression_value_3 = outline_0_var_name;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_663bc0f1e92c9f15402428235747f854_2->m_frame.f_lineno = 221;
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[33]);

            Py_DECREF(tmp_called_value_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_1);
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            CHECK_OBJECT(outline_0_var_name);
            tmp_expression_value_4 = outline_0_var_name;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_663bc0f1e92c9f15402428235747f854_2->m_frame.f_lineno = 222;
            tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[33]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_2);

                exception_lineno = 222;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_and_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_2);
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (tmp_and_left_truth_3 == 1) {
                goto and_right_3;
            } else {
                goto and_left_3;
            }
            and_right_3:;
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_typ);
            tmp_getattr_target_1 = outline_0_var_typ;
            CHECK_OBJECT(outline_0_var_name);
            tmp_getattr_attr_1 = outline_0_var_name;
            tmp_args_element_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 223;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_663bc0f1e92c9f15402428235747f854_2->m_frame.f_lineno = 223;
            tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_3);

                exception_lineno = 223;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_and_right_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_3);
            tmp_and_right_value_2 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_and_right_value_2 = tmp_and_left_value_3;
            and_end_3:;
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
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (outline_0_var_name == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_append_value_1 = outline_0_var_name;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
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
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
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
            exception_tb = MAKE_TRACEBACK(frame_663bc0f1e92c9f15402428235747f854_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_663bc0f1e92c9f15402428235747f854_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_663bc0f1e92c9f15402428235747f854_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_663bc0f1e92c9f15402428235747f854_2,
            type_description_2,
            outline_0_var_typ,
            outline_0_var_name,
            par_cls
        );


        // Release cached frame if used for exception.
        if (frame_663bc0f1e92c9f15402428235747f854_2 == cache_frame_663bc0f1e92c9f15402428235747f854_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_663bc0f1e92c9f15402428235747f854_2);
            cache_frame_663bc0f1e92c9f15402428235747f854_2 = NULL;
        }

        assertFrameObject(frame_663bc0f1e92c9f15402428235747f854_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_typ);
        outline_0_var_typ = NULL;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
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

        Py_XDECREF(outline_0_var_typ);
        outline_0_var_typ = NULL;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
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
        exception_lineno = 217;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_op_names == NULL);
        var_op_names = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_set_arg_1;
        CHECK_OBJECT(var_op_names);
        tmp_set_arg_1 = var_op_names;
        tmp_iter_arg_3 = PySet_New(tmp_set_arg_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 225;
                goto try_except_handler_4;
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
            PyObject *old = var_name;
            var_name = tmp_assign_source_12;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_capi_result_1;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_setattr_target_1 = par_cls;
        CHECK_OBJECT(var_name);
        tmp_setattr_attr_1 = var_name;
        if (var_getPlug == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_value_4 = var_getPlug;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_2 = var_name;
        frame_8f8886bdc3b70e87b8f3a2e98b19cc22->m_frame.f_lineno = 226;
        tmp_setattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        if (tmp_setattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 225;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_6 = (PyObject *)&PyBaseObject_Type;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        assert(!(tmp_called_value_5 == NULL));
        if (par_cls == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_cls;
        frame_8f8886bdc3b70e87b8f3a2e98b19cc22->m_frame.f_lineno = 228;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_7;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_cls;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8f8886bdc3b70e87b8f3a2e98b19cc22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f8886bdc3b70e87b8f3a2e98b19cc22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f8886bdc3b70e87b8f3a2e98b19cc22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f8886bdc3b70e87b8f3a2e98b19cc22,
        type_description_1,
        par_cls,
        var_getPlug,
        var_op_names,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_8f8886bdc3b70e87b8f3a2e98b19cc22 == cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22);
        cache_frame_8f8886bdc3b70e87b8f3a2e98b19cc22 = NULL;
    }

    assertFrameObject(frame_8f8886bdc3b70e87b8f3a2e98b19cc22);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_getPlug);
    var_getPlug = NULL;
    Py_XDECREF(var_op_names);
    var_op_names = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_getPlug);
    var_getPlug = NULL;
    Py_XDECREF(var_op_names);
    var_op_names = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_plug = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_name;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(tmp_closure_1);

        assert(var_plug == NULL);
        var_plug = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_plug);
    tmp_return_value = var_plug;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_plug);
    Py_DECREF(var_plug);
    var_plug = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kw = python_pars[2];
    struct Nuitka_FrameObject *frame_9afa04a483f2ec34c9f785f2217bc439;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9afa04a483f2ec34c9f785f2217bc439 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9afa04a483f2ec34c9f785f2217bc439)) {
        Py_XDECREF(cache_frame_9afa04a483f2ec34c9f785f2217bc439);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9afa04a483f2ec34c9f785f2217bc439 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9afa04a483f2ec34c9f785f2217bc439 = MAKE_FUNCTION_FRAME(codeobj_9afa04a483f2ec34c9f785f2217bc439, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9afa04a483f2ec34c9f785f2217bc439->m_type_description == NULL);
    frame_9afa04a483f2ec34c9f785f2217bc439 = cache_frame_9afa04a483f2ec34c9f785f2217bc439;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9afa04a483f2ec34c9f785f2217bc439);
    assert(Py_REFCNT(frame_9afa04a483f2ec34c9f785f2217bc439) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[41];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 214;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_9afa04a483f2ec34c9f785f2217bc439->m_frame.f_lineno = 214;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 214;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9afa04a483f2ec34c9f785f2217bc439, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9afa04a483f2ec34c9f785f2217bc439->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9afa04a483f2ec34c9f785f2217bc439, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9afa04a483f2ec34c9f785f2217bc439,
        type_description_1,
        par_self,
        par_args,
        par_kw,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9afa04a483f2ec34c9f785f2217bc439 == cache_frame_9afa04a483f2ec34c9f785f2217bc439) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9afa04a483f2ec34c9f785f2217bc439);
        cache_frame_9afa04a483f2ec34c9f785f2217bc439 = NULL;
    }

    assertFrameObject(frame_9afa04a483f2ec34c9f785f2217bc439);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__18___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_attr = python_pars[1];
    struct Nuitka_FrameObject *frame_1d403b2a02665675d9d48407c964b12f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1d403b2a02665675d9d48407c964b12f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d403b2a02665675d9d48407c964b12f)) {
        Py_XDECREF(cache_frame_1d403b2a02665675d9d48407c964b12f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d403b2a02665675d9d48407c964b12f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d403b2a02665675d9d48407c964b12f = MAKE_FUNCTION_FRAME(codeobj_1d403b2a02665675d9d48407c964b12f, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d403b2a02665675d9d48407c964b12f->m_type_description == NULL);
    frame_1d403b2a02665675d9d48407c964b12f = cache_frame_1d403b2a02665675d9d48407c964b12f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d403b2a02665675d9d48407c964b12f);
    assert(Py_REFCNT(frame_1d403b2a02665675d9d48407c964b12f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_attr);
        tmp_cmp_expr_left_1 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[42];
        CHECK_OBJECT(par_attr);
        tmp_mod_expr_right_1 = par_attr;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1d403b2a02665675d9d48407c964b12f->m_frame.f_lineno = 234;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 234;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_2 = mod_consts[41];
        CHECK_OBJECT(par_attr);
        tmp_mod_expr_right_2 = par_attr;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1d403b2a02665675d9d48407c964b12f->m_frame.f_lineno = 236;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 236;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d403b2a02665675d9d48407c964b12f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d403b2a02665675d9d48407c964b12f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d403b2a02665675d9d48407c964b12f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d403b2a02665675d9d48407c964b12f,
        type_description_1,
        par_self,
        par_attr
    );


    // Release cached frame if used for exception.
    if (frame_1d403b2a02665675d9d48407c964b12f == cache_frame_1d403b2a02665675d9d48407c964b12f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d403b2a02665675d9d48407c964b12f);
        cache_frame_1d403b2a02665675d9d48407c964b12f = NULL;
    }

    assertFrameObject(frame_1d403b2a02665675d9d48407c964b12f);

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
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__19___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cce32da79bdd427b4da57278ef4eedfa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cce32da79bdd427b4da57278ef4eedfa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cce32da79bdd427b4da57278ef4eedfa)) {
        Py_XDECREF(cache_frame_cce32da79bdd427b4da57278ef4eedfa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cce32da79bdd427b4da57278ef4eedfa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cce32da79bdd427b4da57278ef4eedfa = MAKE_FUNCTION_FRAME(codeobj_cce32da79bdd427b4da57278ef4eedfa, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cce32da79bdd427b4da57278ef4eedfa->m_type_description == NULL);
    frame_cce32da79bdd427b4da57278ef4eedfa = cache_frame_cce32da79bdd427b4da57278ef4eedfa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cce32da79bdd427b4da57278ef4eedfa);
    assert(Py_REFCNT(frame_cce32da79bdd427b4da57278ef4eedfa) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[43];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
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
        exception_tb = MAKE_TRACEBACK(frame_cce32da79bdd427b4da57278ef4eedfa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cce32da79bdd427b4da57278ef4eedfa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cce32da79bdd427b4da57278ef4eedfa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cce32da79bdd427b4da57278ef4eedfa,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cce32da79bdd427b4da57278ef4eedfa == cache_frame_cce32da79bdd427b4da57278ef4eedfa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cce32da79bdd427b4da57278ef4eedfa);
        cache_frame_cce32da79bdd427b4da57278ef4eedfa = NULL;
    }

    assertFrameObject(frame_cce32da79bdd427b4da57278ef4eedfa);

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


static PyObject *impl_pyasn1$type$base$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_exType = NULL;
    PyObject *var_exValue = NULL;
    PyObject *var_exTb = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0a74faf4eb7f00ea449450cf63d7ac5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a)) {
        Py_XDECREF(cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a = MAKE_FUNCTION_FRAME(codeobj_0a74faf4eb7f00ea449450cf63d7ac5a, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_type_description == NULL);
    frame_0a74faf4eb7f00ea449450cf63d7ac5a = cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a74faf4eb7f00ea449450cf63d7ac5a);
    assert(Py_REFCNT(frame_0a74faf4eb7f00ea449450cf63d7ac5a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame.f_lineno = 267;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[48], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame.f_lineno = 269;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[3], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0a74faf4eb7f00ea449450cf63d7ac5a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0a74faf4eb7f00ea449450cf63d7ac5a, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame.f_lineno = 272;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[50]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
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


            type_description_1 = "oooooo";
            exception_lineno = 272;
            goto try_except_handler_5;
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


            type_description_1 = "oooooo";
            exception_lineno = 272;
            goto try_except_handler_5;
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


            type_description_1 = "oooooo";
            exception_lineno = 272;
            goto try_except_handler_5;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 272;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[51];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 272;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_exType == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_exType = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_exValue == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_exValue = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_exTb == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_exTb = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_exType);
        tmp_called_value_1 = var_exType;
        tmp_mod_expr_left_1 = mod_consts[52];
        CHECK_OBJECT(var_exValue);
        tmp_tuple_element_2 = var_exValue;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_5);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[44]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame.f_lineno = 273;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 273;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 268;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame) frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = par_value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a74faf4eb7f00ea449450cf63d7ac5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a74faf4eb7f00ea449450cf63d7ac5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a74faf4eb7f00ea449450cf63d7ac5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a74faf4eb7f00ea449450cf63d7ac5a,
        type_description_1,
        par_self,
        par_value,
        par_kwargs,
        var_exType,
        var_exValue,
        var_exTb
    );


    // Release cached frame if used for exception.
    if (frame_0a74faf4eb7f00ea449450cf63d7ac5a == cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a);
        cache_frame_0a74faf4eb7f00ea449450cf63d7ac5a = NULL;
    }

    assertFrameObject(frame_0a74faf4eb7f00ea449450cf63d7ac5a);

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
    Py_XDECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_exType);
    var_exType = NULL;
    Py_XDECREF(var_exValue);
    var_exValue = NULL;
    Py_XDECREF(var_exTb);
    var_exTb = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__21___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_representation = NULL;
    PyObject *var_attr = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4c72b9d0746a64ca910a80e80ac9e899;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4c72b9d0746a64ca910a80e80ac9e899 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c72b9d0746a64ca910a80e80ac9e899)) {
        Py_XDECREF(cache_frame_4c72b9d0746a64ca910a80e80ac9e899);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c72b9d0746a64ca910a80e80ac9e899 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c72b9d0746a64ca910a80e80ac9e899 = MAKE_FUNCTION_FRAME(codeobj_4c72b9d0746a64ca910a80e80ac9e899, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c72b9d0746a64ca910a80e80ac9e899->m_type_description == NULL);
    frame_4c72b9d0746a64ca910a80e80ac9e899 = cache_frame_4c72b9d0746a64ca910a80e80ac9e899;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c72b9d0746a64ca910a80e80ac9e899);
    assert(Py_REFCNT(frame_4c72b9d0746a64ca910a80e80ac9e899) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
            if (tmp_and_left_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
            if (tmp_and_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_and_left_value_1);

                exception_lineno = 279;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            Py_DECREF(tmp_and_left_value_1);
            tmp_and_right_value_1 = mod_consts[53];
            Py_INCREF(tmp_and_right_value_1);
            tmp_or_left_value_1 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_or_left_value_1 = tmp_and_left_value_1;
            and_end_1:;
            tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
            if (tmp_or_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_1);

                exception_lineno = 279;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            Py_DECREF(tmp_or_left_value_1);
            tmp_or_right_value_1 = mod_consts[56];
            Py_INCREF(tmp_or_right_value_1);
            tmp_tuple_element_1 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_tuple_element_1 = tmp_or_left_value_1;
            or_end_1:;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_representation == NULL);
        var_representation = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[57]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[58]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4c72b9d0746a64ca910a80e80ac9e899->m_frame.f_lineno = 281;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 281;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "oooo";
            exception_lineno = 281;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "oooo";
            exception_lineno = 281;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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
                    exception_lineno = 281;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[59];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 281;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
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
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_7;
            Py_INCREF(var_attr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_value);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_value);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        if (var_representation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_representation;
        tmp_mod_expr_left_2 = mod_consts[61];
        CHECK_OBJECT(var_attr);
        tmp_tuple_element_2 = var_attr;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_value);
        tmp_tuple_element_2 = var_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        var_representation = tmp_assign_source_9;

    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 281;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[25]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4c72b9d0746a64ca910a80e80ac9e899->m_frame.f_lineno = 286;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[12]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_value);
        tmp_len_arg_1 = var_value;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 32;
        tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_value);
        tmp_expression_value_7 = var_value;
        tmp_subscript_value_1 = mod_consts[62];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[63];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_expression_value_8 = var_value;
        tmp_subscript_value_2 = mod_consts[64];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        if (var_representation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_representation;
        tmp_mod_expr_left_3 = mod_consts[65];
        if (var_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_3 = var_value;
        tmp_iadd_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_2;
        var_representation = tmp_assign_source_12;

    }
    branch_no_2:;
    {
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_mod_expr_left_4 = mod_consts[66];
        if (var_representation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_4 = var_representation;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c72b9d0746a64ca910a80e80ac9e899, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c72b9d0746a64ca910a80e80ac9e899->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c72b9d0746a64ca910a80e80ac9e899, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c72b9d0746a64ca910a80e80ac9e899,
        type_description_1,
        par_self,
        var_representation,
        var_attr,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_4c72b9d0746a64ca910a80e80ac9e899 == cache_frame_4c72b9d0746a64ca910a80e80ac9e899) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c72b9d0746a64ca910a80e80ac9e899);
        cache_frame_4c72b9d0746a64ca910a80e80ac9e899 = NULL;
    }

    assertFrameObject(frame_4c72b9d0746a64ca910a80e80ac9e899);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_representation);
    var_representation = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_representation);
    var_representation = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyasn1$type$base$$$function__22___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_25c7f1afabf2defad745d34536028eb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25c7f1afabf2defad745d34536028eb8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_25c7f1afabf2defad745d34536028eb8)) {
        Py_XDECREF(cache_frame_25c7f1afabf2defad745d34536028eb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25c7f1afabf2defad745d34536028eb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25c7f1afabf2defad745d34536028eb8 = MAKE_FUNCTION_FRAME(codeobj_25c7f1afabf2defad745d34536028eb8, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25c7f1afabf2defad745d34536028eb8->m_type_description == NULL);
    frame_25c7f1afabf2defad745d34536028eb8 = cache_frame_25c7f1afabf2defad745d34536028eb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25c7f1afabf2defad745d34536028eb8);
    assert(Py_REFCNT(frame_25c7f1afabf2defad745d34536028eb8) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = Py_True;
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_2 = par_other;
        tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_25c7f1afabf2defad745d34536028eb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25c7f1afabf2defad745d34536028eb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25c7f1afabf2defad745d34536028eb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25c7f1afabf2defad745d34536028eb8,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_25c7f1afabf2defad745d34536028eb8 == cache_frame_25c7f1afabf2defad745d34536028eb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25c7f1afabf2defad745d34536028eb8);
        cache_frame_25c7f1afabf2defad745d34536028eb8 = NULL;
    }

    assertFrameObject(frame_25c7f1afabf2defad745d34536028eb8);

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


static PyObject *impl_pyasn1$type$base$$$function__23___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_31d83a184df96333cfd440a4071ec6a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_31d83a184df96333cfd440a4071ec6a9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31d83a184df96333cfd440a4071ec6a9)) {
        Py_XDECREF(cache_frame_31d83a184df96333cfd440a4071ec6a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31d83a184df96333cfd440a4071ec6a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31d83a184df96333cfd440a4071ec6a9 = MAKE_FUNCTION_FRAME(codeobj_31d83a184df96333cfd440a4071ec6a9, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31d83a184df96333cfd440a4071ec6a9->m_type_description == NULL);
    frame_31d83a184df96333cfd440a4071ec6a9 = cache_frame_31d83a184df96333cfd440a4071ec6a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31d83a184df96333cfd440a4071ec6a9);
    assert(Py_REFCNT(frame_31d83a184df96333cfd440a4071ec6a9) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_31d83a184df96333cfd440a4071ec6a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31d83a184df96333cfd440a4071ec6a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31d83a184df96333cfd440a4071ec6a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31d83a184df96333cfd440a4071ec6a9,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_31d83a184df96333cfd440a4071ec6a9 == cache_frame_31d83a184df96333cfd440a4071ec6a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31d83a184df96333cfd440a4071ec6a9);
        cache_frame_31d83a184df96333cfd440a4071ec6a9 = NULL;
    }

    assertFrameObject(frame_31d83a184df96333cfd440a4071ec6a9);

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


static PyObject *impl_pyasn1$type$base$$$function__24___lt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_c5e9bfc0a586a2e69fc678579e19c8be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5e9bfc0a586a2e69fc678579e19c8be = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5e9bfc0a586a2e69fc678579e19c8be)) {
        Py_XDECREF(cache_frame_c5e9bfc0a586a2e69fc678579e19c8be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5e9bfc0a586a2e69fc678579e19c8be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5e9bfc0a586a2e69fc678579e19c8be = MAKE_FUNCTION_FRAME(codeobj_c5e9bfc0a586a2e69fc678579e19c8be, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5e9bfc0a586a2e69fc678579e19c8be->m_type_description == NULL);
    frame_c5e9bfc0a586a2e69fc678579e19c8be = cache_frame_c5e9bfc0a586a2e69fc678579e19c8be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5e9bfc0a586a2e69fc678579e19c8be);
    assert(Py_REFCNT(frame_c5e9bfc0a586a2e69fc678579e19c8be) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_c5e9bfc0a586a2e69fc678579e19c8be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5e9bfc0a586a2e69fc678579e19c8be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5e9bfc0a586a2e69fc678579e19c8be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5e9bfc0a586a2e69fc678579e19c8be,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c5e9bfc0a586a2e69fc678579e19c8be == cache_frame_c5e9bfc0a586a2e69fc678579e19c8be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5e9bfc0a586a2e69fc678579e19c8be);
        cache_frame_c5e9bfc0a586a2e69fc678579e19c8be = NULL;
    }

    assertFrameObject(frame_c5e9bfc0a586a2e69fc678579e19c8be);

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


static PyObject *impl_pyasn1$type$base$$$function__25___le__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_47ee89047bf6c14e907d1b72805a45d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47ee89047bf6c14e907d1b72805a45d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47ee89047bf6c14e907d1b72805a45d2)) {
        Py_XDECREF(cache_frame_47ee89047bf6c14e907d1b72805a45d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47ee89047bf6c14e907d1b72805a45d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47ee89047bf6c14e907d1b72805a45d2 = MAKE_FUNCTION_FRAME(codeobj_47ee89047bf6c14e907d1b72805a45d2, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47ee89047bf6c14e907d1b72805a45d2->m_type_description == NULL);
    frame_47ee89047bf6c14e907d1b72805a45d2 = cache_frame_47ee89047bf6c14e907d1b72805a45d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47ee89047bf6c14e907d1b72805a45d2);
    assert(Py_REFCNT(frame_47ee89047bf6c14e907d1b72805a45d2) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
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
        exception_tb = MAKE_TRACEBACK(frame_47ee89047bf6c14e907d1b72805a45d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47ee89047bf6c14e907d1b72805a45d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47ee89047bf6c14e907d1b72805a45d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47ee89047bf6c14e907d1b72805a45d2,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_47ee89047bf6c14e907d1b72805a45d2 == cache_frame_47ee89047bf6c14e907d1b72805a45d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47ee89047bf6c14e907d1b72805a45d2);
        cache_frame_47ee89047bf6c14e907d1b72805a45d2 = NULL;
    }

    assertFrameObject(frame_47ee89047bf6c14e907d1b72805a45d2);

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


static PyObject *impl_pyasn1$type$base$$$function__26___gt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_d5ccb4955269c19c53babfe802a160d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5ccb4955269c19c53babfe802a160d9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5ccb4955269c19c53babfe802a160d9)) {
        Py_XDECREF(cache_frame_d5ccb4955269c19c53babfe802a160d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5ccb4955269c19c53babfe802a160d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5ccb4955269c19c53babfe802a160d9 = MAKE_FUNCTION_FRAME(codeobj_d5ccb4955269c19c53babfe802a160d9, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5ccb4955269c19c53babfe802a160d9->m_type_description == NULL);
    frame_d5ccb4955269c19c53babfe802a160d9 = cache_frame_d5ccb4955269c19c53babfe802a160d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5ccb4955269c19c53babfe802a160d9);
    assert(Py_REFCNT(frame_d5ccb4955269c19c53babfe802a160d9) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
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
        exception_tb = MAKE_TRACEBACK(frame_d5ccb4955269c19c53babfe802a160d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5ccb4955269c19c53babfe802a160d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5ccb4955269c19c53babfe802a160d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5ccb4955269c19c53babfe802a160d9,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_d5ccb4955269c19c53babfe802a160d9 == cache_frame_d5ccb4955269c19c53babfe802a160d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5ccb4955269c19c53babfe802a160d9);
        cache_frame_d5ccb4955269c19c53babfe802a160d9 = NULL;
    }

    assertFrameObject(frame_d5ccb4955269c19c53babfe802a160d9);

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


static PyObject *impl_pyasn1$type$base$$$function__27___ge__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_58216ee1e60366aac2ad22da4aab50be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58216ee1e60366aac2ad22da4aab50be = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58216ee1e60366aac2ad22da4aab50be)) {
        Py_XDECREF(cache_frame_58216ee1e60366aac2ad22da4aab50be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58216ee1e60366aac2ad22da4aab50be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58216ee1e60366aac2ad22da4aab50be = MAKE_FUNCTION_FRAME(codeobj_58216ee1e60366aac2ad22da4aab50be, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58216ee1e60366aac2ad22da4aab50be->m_type_description == NULL);
    frame_58216ee1e60366aac2ad22da4aab50be = cache_frame_58216ee1e60366aac2ad22da4aab50be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_58216ee1e60366aac2ad22da4aab50be);
    assert(Py_REFCNT(frame_58216ee1e60366aac2ad22da4aab50be) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
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
        exception_tb = MAKE_TRACEBACK(frame_58216ee1e60366aac2ad22da4aab50be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58216ee1e60366aac2ad22da4aab50be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58216ee1e60366aac2ad22da4aab50be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58216ee1e60366aac2ad22da4aab50be,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_58216ee1e60366aac2ad22da4aab50be == cache_frame_58216ee1e60366aac2ad22da4aab50be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58216ee1e60366aac2ad22da4aab50be);
        cache_frame_58216ee1e60366aac2ad22da4aab50be = NULL;
    }

    assertFrameObject(frame_58216ee1e60366aac2ad22da4aab50be);

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


static PyObject *impl_pyasn1$type$base$$$function__29___bool__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0708176cefee4c708acef22e00337415;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0708176cefee4c708acef22e00337415 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0708176cefee4c708acef22e00337415)) {
        Py_XDECREF(cache_frame_0708176cefee4c708acef22e00337415);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0708176cefee4c708acef22e00337415 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0708176cefee4c708acef22e00337415 = MAKE_FUNCTION_FRAME(codeobj_0708176cefee4c708acef22e00337415, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0708176cefee4c708acef22e00337415->m_type_description == NULL);
    frame_0708176cefee4c708acef22e00337415 = cache_frame_0708176cefee4c708acef22e00337415;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0708176cefee4c708acef22e00337415);
    assert(Py_REFCNT(frame_0708176cefee4c708acef22e00337415) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        tmp_and_right_value_1 = Py_True;
        Py_INCREF(tmp_and_right_value_1);
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = Py_False;
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_0708176cefee4c708acef22e00337415, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0708176cefee4c708acef22e00337415->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0708176cefee4c708acef22e00337415, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0708176cefee4c708acef22e00337415,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0708176cefee4c708acef22e00337415 == cache_frame_0708176cefee4c708acef22e00337415) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0708176cefee4c708acef22e00337415);
        cache_frame_0708176cefee4c708acef22e00337415 = NULL;
    }

    assertFrameObject(frame_0708176cefee4c708acef22e00337415);

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


static PyObject *impl_pyasn1$type$base$$$function__30___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_49cbd82698ea2eef6b02f48d48afa577;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_49cbd82698ea2eef6b02f48d48afa577 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_49cbd82698ea2eef6b02f48d48afa577)) {
        Py_XDECREF(cache_frame_49cbd82698ea2eef6b02f48d48afa577);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49cbd82698ea2eef6b02f48d48afa577 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49cbd82698ea2eef6b02f48d48afa577 = MAKE_FUNCTION_FRAME(codeobj_49cbd82698ea2eef6b02f48d48afa577, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49cbd82698ea2eef6b02f48d48afa577->m_type_description == NULL);
    frame_49cbd82698ea2eef6b02f48d48afa577 = cache_frame_49cbd82698ea2eef6b02f48d48afa577;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49cbd82698ea2eef6b02f48d48afa577);
    assert(Py_REFCNT(frame_49cbd82698ea2eef6b02f48d48afa577) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_hash_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
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
        exception_tb = MAKE_TRACEBACK(frame_49cbd82698ea2eef6b02f48d48afa577, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49cbd82698ea2eef6b02f48d48afa577->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49cbd82698ea2eef6b02f48d48afa577, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49cbd82698ea2eef6b02f48d48afa577,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_49cbd82698ea2eef6b02f48d48afa577 == cache_frame_49cbd82698ea2eef6b02f48d48afa577) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49cbd82698ea2eef6b02f48d48afa577);
        cache_frame_49cbd82698ea2eef6b02f48d48afa577 = NULL;
    }

    assertFrameObject(frame_49cbd82698ea2eef6b02f48d48afa577);

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


static PyObject *impl_pyasn1$type$base$$$function__31_isValue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_422dedcccbd581cca099f64d3e198b0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_422dedcccbd581cca099f64d3e198b0a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_422dedcccbd581cca099f64d3e198b0a)) {
        Py_XDECREF(cache_frame_422dedcccbd581cca099f64d3e198b0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_422dedcccbd581cca099f64d3e198b0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_422dedcccbd581cca099f64d3e198b0a = MAKE_FUNCTION_FRAME(codeobj_422dedcccbd581cca099f64d3e198b0a, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_422dedcccbd581cca099f64d3e198b0a->m_type_description == NULL);
    frame_422dedcccbd581cca099f64d3e198b0a = cache_frame_422dedcccbd581cca099f64d3e198b0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_422dedcccbd581cca099f64d3e198b0a);
    assert(Py_REFCNT(frame_422dedcccbd581cca099f64d3e198b0a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_422dedcccbd581cca099f64d3e198b0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_422dedcccbd581cca099f64d3e198b0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_422dedcccbd581cca099f64d3e198b0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_422dedcccbd581cca099f64d3e198b0a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_422dedcccbd581cca099f64d3e198b0a == cache_frame_422dedcccbd581cca099f64d3e198b0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_422dedcccbd581cca099f64d3e198b0a);
        cache_frame_422dedcccbd581cca099f64d3e198b0a = NULL;
    }

    assertFrameObject(frame_422dedcccbd581cca099f64d3e198b0a);

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


static PyObject *impl_pyasn1$type$base$$$function__32_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_initializers = NULL;
    struct Nuitka_FrameObject *frame_5c2556ccca12bbfaa364964de6f96ea8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5c2556ccca12bbfaa364964de6f96ea8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5c2556ccca12bbfaa364964de6f96ea8)) {
        Py_XDECREF(cache_frame_5c2556ccca12bbfaa364964de6f96ea8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c2556ccca12bbfaa364964de6f96ea8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c2556ccca12bbfaa364964de6f96ea8 = MAKE_FUNCTION_FRAME(codeobj_5c2556ccca12bbfaa364964de6f96ea8, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c2556ccca12bbfaa364964de6f96ea8->m_type_description == NULL);
    frame_5c2556ccca12bbfaa364964de6f96ea8 = cache_frame_5c2556ccca12bbfaa364964de6f96ea8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c2556ccca12bbfaa364964de6f96ea8);
    assert(Py_REFCNT(frame_5c2556ccca12bbfaa364964de6f96ea8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_operand_value_1 = par_kwargs;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[68]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5c2556ccca12bbfaa364964de6f96ea8->m_frame.f_lineno = 373;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_initializers == NULL);
        var_initializers = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_initializers);
        tmp_expression_value_4 = var_initializers;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_1 = par_kwargs;
        frame_5c2556ccca12bbfaa364964de6f96ea8->m_frame.f_lineno = 374;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_5);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_tuple_element_1 = par_value;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_initializers);
        tmp_dircall_arg3_1 = var_initializers;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c2556ccca12bbfaa364964de6f96ea8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c2556ccca12bbfaa364964de6f96ea8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c2556ccca12bbfaa364964de6f96ea8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c2556ccca12bbfaa364964de6f96ea8,
        type_description_1,
        par_self,
        par_value,
        par_kwargs,
        var_initializers
    );


    // Release cached frame if used for exception.
    if (frame_5c2556ccca12bbfaa364964de6f96ea8 == cache_frame_5c2556ccca12bbfaa364964de6f96ea8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c2556ccca12bbfaa364964de6f96ea8);
        cache_frame_5c2556ccca12bbfaa364964de6f96ea8 = NULL;
    }

    assertFrameObject(frame_5c2556ccca12bbfaa364964de6f96ea8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_initializers);
    var_initializers = NULL;
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

    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_initializers);
    var_initializers = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__33_subtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_initializers = NULL;
    PyObject *var_implicitTag = NULL;
    PyObject *var_explicitTag = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_option = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c36f2b368ba4c7a52a4d44685d338c9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c36f2b368ba4c7a52a4d44685d338c9b = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c36f2b368ba4c7a52a4d44685d338c9b)) {
        Py_XDECREF(cache_frame_c36f2b368ba4c7a52a4d44685d338c9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c36f2b368ba4c7a52a4d44685d338c9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c36f2b368ba4c7a52a4d44685d338c9b = MAKE_FUNCTION_FRAME(codeobj_c36f2b368ba4c7a52a4d44685d338c9b, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c36f2b368ba4c7a52a4d44685d338c9b->m_type_description == NULL);
    frame_c36f2b368ba4c7a52a4d44685d338c9b = cache_frame_c36f2b368ba4c7a52a4d44685d338c9b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c36f2b368ba4c7a52a4d44685d338c9b);
    assert(Py_REFCNT(frame_c36f2b368ba4c7a52a4d44685d338c9b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_operand_value_1 = par_kwargs;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[68]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c36f2b368ba4c7a52a4d44685d338c9b->m_frame.f_lineno = 431;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initializers == NULL);
        var_initializers = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[70];
        tmp_default_value_1 = Py_None;
        tmp_assign_source_3 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_implicitTag == NULL);
        var_implicitTag = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_implicitTag);
        tmp_cmp_expr_left_2 = var_implicitTag;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_implicitTag);
        tmp_args_element_value_1 = var_implicitTag;
        frame_c36f2b368ba4c7a52a4d44685d338c9b->m_frame.f_lineno = 435;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[71], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_initializers);
        tmp_ass_subscribed_1 = var_initializers;
        tmp_ass_subscript_1 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_5 = par_kwargs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[72]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c36f2b368ba4c7a52a4d44685d338c9b->m_frame.f_lineno = 437;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[73]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_explicitTag == NULL);
        var_explicitTag = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_explicitTag);
        tmp_cmp_expr_left_3 = var_explicitTag;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_explicitTag);
        tmp_args_element_value_2 = var_explicitTag;
        frame_c36f2b368ba4c7a52a4d44685d338c9b->m_frame.f_lineno = 439;
        tmp_ass_subvalue_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[74], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_initializers == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_initializers;
        tmp_ass_subscript_2 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_7 = par_kwargs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[58]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c36f2b368ba4c7a52a4d44685d338c9b->m_frame.f_lineno = 441;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 441;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 441;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 441;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooooo";
                    exception_lineno = 441;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[59];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 441;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_10;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_option;
            var_option = tmp_assign_source_11;
            Py_INCREF(var_option);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        if (var_initializers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_12 = var_initializers;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_12;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(var_arg);
        tmp_assign_source_13 = var_arg;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_13;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_8 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(var_option);
        tmp_iadd_expr_right_1 = var_option;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_15;

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_3 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 441;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_9);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_tuple_element_1 = par_value;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (var_initializers == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_initializers;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
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
        exception_tb = MAKE_TRACEBACK(frame_c36f2b368ba4c7a52a4d44685d338c9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c36f2b368ba4c7a52a4d44685d338c9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c36f2b368ba4c7a52a4d44685d338c9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c36f2b368ba4c7a52a4d44685d338c9b,
        type_description_1,
        par_self,
        par_value,
        par_kwargs,
        var_initializers,
        var_implicitTag,
        var_explicitTag,
        var_arg,
        var_option
    );


    // Release cached frame if used for exception.
    if (frame_c36f2b368ba4c7a52a4d44685d338c9b == cache_frame_c36f2b368ba4c7a52a4d44685d338c9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c36f2b368ba4c7a52a4d44685d338c9b);
        cache_frame_c36f2b368ba4c7a52a4d44685d338c9b = NULL;
    }

    assertFrameObject(frame_c36f2b368ba4c7a52a4d44685d338c9b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_initializers);
    var_initializers = NULL;
    Py_XDECREF(var_implicitTag);
    var_implicitTag = NULL;
    Py_XDECREF(var_explicitTag);
    var_explicitTag = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_option);
    var_option = NULL;
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

    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_initializers);
    var_initializers = NULL;
    Py_XDECREF(var_implicitTag);
    var_implicitTag = NULL;
    Py_XDECREF(var_explicitTag);
    var_explicitTag = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_option);
    var_option = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__34_prettyIn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__35_prettyOut(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_71ca5a77c5c5e5f30aaed697803a08d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_71ca5a77c5c5e5f30aaed697803a08d3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_71ca5a77c5c5e5f30aaed697803a08d3)) {
        Py_XDECREF(cache_frame_71ca5a77c5c5e5f30aaed697803a08d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71ca5a77c5c5e5f30aaed697803a08d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71ca5a77c5c5e5f30aaed697803a08d3 = MAKE_FUNCTION_FRAME(codeobj_71ca5a77c5c5e5f30aaed697803a08d3, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71ca5a77c5c5e5f30aaed697803a08d3->m_type_description == NULL);
    frame_71ca5a77c5c5e5f30aaed697803a08d3 = cache_frame_71ca5a77c5c5e5f30aaed697803a08d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71ca5a77c5c5e5f30aaed697803a08d3);
    assert(Py_REFCNT(frame_71ca5a77c5c5e5f30aaed697803a08d3) == 2);

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
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
        exception_tb = MAKE_TRACEBACK(frame_71ca5a77c5c5e5f30aaed697803a08d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71ca5a77c5c5e5f30aaed697803a08d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71ca5a77c5c5e5f30aaed697803a08d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71ca5a77c5c5e5f30aaed697803a08d3,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_71ca5a77c5c5e5f30aaed697803a08d3 == cache_frame_71ca5a77c5c5e5f30aaed697803a08d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71ca5a77c5c5e5f30aaed697803a08d3);
        cache_frame_71ca5a77c5c5e5f30aaed697803a08d3 = NULL;
    }

    assertFrameObject(frame_71ca5a77c5c5e5f30aaed697803a08d3);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__36_prettyPrint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scope = python_pars[1];
    struct Nuitka_FrameObject *frame_abb622d613a9ebc34bd5238aa38d297e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abb622d613a9ebc34bd5238aa38d297e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_abb622d613a9ebc34bd5238aa38d297e)) {
        Py_XDECREF(cache_frame_abb622d613a9ebc34bd5238aa38d297e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_abb622d613a9ebc34bd5238aa38d297e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_abb622d613a9ebc34bd5238aa38d297e = MAKE_FUNCTION_FRAME(codeobj_abb622d613a9ebc34bd5238aa38d297e, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_abb622d613a9ebc34bd5238aa38d297e->m_type_description == NULL);
    frame_abb622d613a9ebc34bd5238aa38d297e = cache_frame_abb622d613a9ebc34bd5238aa38d297e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_abb622d613a9ebc34bd5238aa38d297e);
    assert(Py_REFCNT(frame_abb622d613a9ebc34bd5238aa38d297e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[77]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[54]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_abb622d613a9ebc34bd5238aa38d297e->m_frame.f_lineno = 453;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
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
        exception_tb = MAKE_TRACEBACK(frame_abb622d613a9ebc34bd5238aa38d297e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_abb622d613a9ebc34bd5238aa38d297e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_abb622d613a9ebc34bd5238aa38d297e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_abb622d613a9ebc34bd5238aa38d297e,
        type_description_1,
        par_self,
        par_scope
    );


    // Release cached frame if used for exception.
    if (frame_abb622d613a9ebc34bd5238aa38d297e == cache_frame_abb622d613a9ebc34bd5238aa38d297e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_abb622d613a9ebc34bd5238aa38d297e);
        cache_frame_abb622d613a9ebc34bd5238aa38d297e = NULL;
    }

    assertFrameObject(frame_abb622d613a9ebc34bd5238aa38d297e);

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
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__37_prettyPrintType(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scope = python_pars[1];
    struct Nuitka_FrameObject *frame_a74bc630c8804b909dfa9feb41a9e355;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a74bc630c8804b909dfa9feb41a9e355 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a74bc630c8804b909dfa9feb41a9e355)) {
        Py_XDECREF(cache_frame_a74bc630c8804b909dfa9feb41a9e355);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a74bc630c8804b909dfa9feb41a9e355 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a74bc630c8804b909dfa9feb41a9e355 = MAKE_FUNCTION_FRAME(codeobj_a74bc630c8804b909dfa9feb41a9e355, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a74bc630c8804b909dfa9feb41a9e355->m_type_description == NULL);
    frame_a74bc630c8804b909dfa9feb41a9e355 = cache_frame_a74bc630c8804b909dfa9feb41a9e355;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a74bc630c8804b909dfa9feb41a9e355);
    assert(Py_REFCNT(frame_a74bc630c8804b909dfa9feb41a9e355) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[78];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
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
        exception_tb = MAKE_TRACEBACK(frame_a74bc630c8804b909dfa9feb41a9e355, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a74bc630c8804b909dfa9feb41a9e355->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a74bc630c8804b909dfa9feb41a9e355, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a74bc630c8804b909dfa9feb41a9e355,
        type_description_1,
        par_self,
        par_scope
    );


    // Release cached frame if used for exception.
    if (frame_a74bc630c8804b909dfa9feb41a9e355 == cache_frame_a74bc630c8804b909dfa9feb41a9e355) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a74bc630c8804b909dfa9feb41a9e355);
        cache_frame_a74bc630c8804b909dfa9feb41a9e355 = NULL;
    }

    assertFrameObject(frame_a74bc630c8804b909dfa9feb41a9e355);

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
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__38___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_readOnly = NULL;
    struct Nuitka_FrameObject *frame_08deee05a7f60a079726a68223f67f9f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_08deee05a7f60a079726a68223f67f9f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_08deee05a7f60a079726a68223f67f9f)) {
        Py_XDECREF(cache_frame_08deee05a7f60a079726a68223f67f9f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08deee05a7f60a079726a68223f67f9f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08deee05a7f60a079726a68223f67f9f = MAKE_FUNCTION_FRAME(codeobj_08deee05a7f60a079726a68223f67f9f, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08deee05a7f60a079726a68223f67f9f->m_type_description == NULL);
    frame_08deee05a7f60a079726a68223f67f9f = cache_frame_08deee05a7f60a079726a68223f67f9f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08deee05a7f60a079726a68223f67f9f);
    assert(Py_REFCNT(frame_08deee05a7f60a079726a68223f67f9f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[79];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[79]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[80];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[80]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_readOnly == NULL);
        var_readOnly = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[81]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_2 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kwargs;
            assert(old != NULL);
            par_kwargs = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(var_readOnly);
        tmp_dict_arg_value_1 = var_readOnly;
        CHECK_OBJECT(par_kwargs);
        tmp_iterable_value_1 = par_kwargs;
        assert(PyDict_Check(tmp_dict_arg_value_1));
        if (HAS_ATTR_BOOL(tmp_iterable_value_1, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        }

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_readOnly);
        tmp_dircall_arg3_1 = var_readOnly;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
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
        exception_tb = MAKE_TRACEBACK(frame_08deee05a7f60a079726a68223f67f9f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08deee05a7f60a079726a68223f67f9f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08deee05a7f60a079726a68223f67f9f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08deee05a7f60a079726a68223f67f9f,
        type_description_1,
        par_self,
        par_kwargs,
        var_readOnly
    );


    // Release cached frame if used for exception.
    if (frame_08deee05a7f60a079726a68223f67f9f == cache_frame_08deee05a7f60a079726a68223f67f9f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08deee05a7f60a079726a68223f67f9f);
        cache_frame_08deee05a7f60a079726a68223f67f9f = NULL;
    }

    assertFrameObject(frame_08deee05a7f60a079726a68223f67f9f);

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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_readOnly);
    Py_DECREF(var_readOnly);
    var_readOnly = NULL;
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

    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_readOnly);
    var_readOnly = NULL;
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


static PyObject *impl_pyasn1$type$base$$$function__39__moveSizeSpec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_sizeSpec = NULL;
    PyObject *var_subtypeSpec = NULL;
    struct Nuitka_FrameObject *frame_9eaee38cb8ea44255967db84fb28e939;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9eaee38cb8ea44255967db84fb28e939 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eaee38cb8ea44255967db84fb28e939)) {
        Py_XDECREF(cache_frame_9eaee38cb8ea44255967db84fb28e939);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eaee38cb8ea44255967db84fb28e939 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eaee38cb8ea44255967db84fb28e939 = MAKE_FUNCTION_FRAME(codeobj_9eaee38cb8ea44255967db84fb28e939, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9eaee38cb8ea44255967db84fb28e939->m_type_description == NULL);
    frame_9eaee38cb8ea44255967db84fb28e939 = cache_frame_9eaee38cb8ea44255967db84fb28e939;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9eaee38cb8ea44255967db84fb28e939);
    assert(Py_REFCNT(frame_9eaee38cb8ea44255967db84fb28e939) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_default_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_default_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        Py_DECREF(tmp_default_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_sizeSpec == NULL);
        var_sizeSpec = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_sizeSpec);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_sizeSpec);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_2 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[3];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 523;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_9eaee38cb8ea44255967db84fb28e939->m_frame.f_lineno = 523;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_subtypeSpec == NULL);
        var_subtypeSpec = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_subtypeSpec);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_subtypeSpec);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_sizeSpec);
        tmp_assign_source_3 = var_sizeSpec;
        {
            PyObject *old = var_subtypeSpec;
            assert(old != NULL);
            var_subtypeSpec = tmp_assign_source_3;
            Py_INCREF(var_subtypeSpec);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_subtypeSpec);
        tmp_iadd_expr_left_1 = var_subtypeSpec;
        CHECK_OBJECT(var_sizeSpec);
        tmp_iadd_expr_right_1 = var_sizeSpec;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_1;
        var_subtypeSpec = tmp_assign_source_4;

    }
    branch_end_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_subtypeSpec);
        tmp_ass_subvalue_1 = var_subtypeSpec;
        CHECK_OBJECT(par_kwargs);
        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = mod_consts[3];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9eaee38cb8ea44255967db84fb28e939, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eaee38cb8ea44255967db84fb28e939->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eaee38cb8ea44255967db84fb28e939, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eaee38cb8ea44255967db84fb28e939,
        type_description_1,
        par_self,
        par_kwargs,
        var_sizeSpec,
        var_subtypeSpec
    );


    // Release cached frame if used for exception.
    if (frame_9eaee38cb8ea44255967db84fb28e939 == cache_frame_9eaee38cb8ea44255967db84fb28e939) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9eaee38cb8ea44255967db84fb28e939);
        cache_frame_9eaee38cb8ea44255967db84fb28e939 = NULL;
    }

    assertFrameObject(frame_9eaee38cb8ea44255967db84fb28e939);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_kwargs);
    tmp_return_value = par_kwargs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sizeSpec);
    var_sizeSpec = NULL;
    Py_XDECREF(var_subtypeSpec);
    var_subtypeSpec = NULL;
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

    Py_XDECREF(var_sizeSpec);
    var_sizeSpec = NULL;
    Py_XDECREF(var_subtypeSpec);
    var_subtypeSpec = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__40___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_representation = NULL;
    PyObject *var_attr = NULL;
    PyObject *var_value = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2173053583cb20ed3d4082e879bbc608;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_f3ec3dfadab4e21d7c46377e437a190d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2173053583cb20ed3d4082e879bbc608 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2173053583cb20ed3d4082e879bbc608)) {
        Py_XDECREF(cache_frame_2173053583cb20ed3d4082e879bbc608);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2173053583cb20ed3d4082e879bbc608 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2173053583cb20ed3d4082e879bbc608 = MAKE_FUNCTION_FRAME(codeobj_2173053583cb20ed3d4082e879bbc608, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2173053583cb20ed3d4082e879bbc608->m_type_description == NULL);
    frame_2173053583cb20ed3d4082e879bbc608 = cache_frame_2173053583cb20ed3d4082e879bbc608;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2173053583cb20ed3d4082e879bbc608);
    assert(Py_REFCNT(frame_2173053583cb20ed3d4082e879bbc608) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
            if (tmp_and_left_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 536;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
            if (tmp_and_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_and_left_value_1);

                exception_lineno = 536;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            Py_DECREF(tmp_and_left_value_1);
            tmp_and_right_value_1 = mod_consts[53];
            Py_INCREF(tmp_and_right_value_1);
            tmp_or_left_value_1 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_or_left_value_1 = tmp_and_left_value_1;
            and_end_1:;
            tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
            if (tmp_or_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_1);

                exception_lineno = 536;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            Py_DECREF(tmp_or_left_value_1);
            tmp_or_right_value_1 = mod_consts[56];
            Py_INCREF(tmp_or_right_value_1);
            tmp_tuple_element_1 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_tuple_element_1 = tmp_or_left_value_1;
            or_end_1:;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_representation == NULL);
        var_representation = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[57]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[58]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2173053583cb20ed3d4082e879bbc608->m_frame.f_lineno = 539;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 539;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "oooo";
            exception_lineno = 539;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "oooo";
            exception_lineno = 539;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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
                    exception_lineno = 539;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[59];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 539;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
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
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_7;
            Py_INCREF(var_attr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        if (var_representation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 541;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_representation;
        tmp_mod_expr_left_2 = mod_consts[82];
        CHECK_OBJECT(var_attr);
        tmp_tuple_element_2 = var_attr;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_value);
        tmp_tuple_element_2 = var_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        var_representation = tmp_assign_source_9;

    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 539;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[25]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 543;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[83]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 543;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        if (var_representation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_representation;
        tmp_mod_expr_left_3 = mod_consts[65];
        tmp_str_arg_value_1 = mod_consts[84];
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[83]);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2)) {
            Py_XDECREF(cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2 = MAKE_FUNCTION_FRAME(codeobj_f3ec3dfadab4e21d7c46377e437a190d, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2->m_type_description == NULL);
        frame_f3ec3dfadab4e21d7c46377e437a190d_2 = cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f3ec3dfadab4e21d7c46377e437a190d_2);
        assert(Py_REFCNT(frame_f3ec3dfadab4e21d7c46377e437a190d_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 545;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_14;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_operand_value_1 = outline_0_var_x;
            tmp_append_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
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
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f3ec3dfadab4e21d7c46377e437a190d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f3ec3dfadab4e21d7c46377e437a190d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f3ec3dfadab4e21d7c46377e437a190d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f3ec3dfadab4e21d7c46377e437a190d_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_f3ec3dfadab4e21d7c46377e437a190d_2 == cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2);
            cache_frame_f3ec3dfadab4e21d7c46377e437a190d_2 = NULL;
        }

        assertFrameObject(frame_f3ec3dfadab4e21d7c46377e437a190d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 545;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_mod_expr_right_3 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_mod_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_2;
        var_representation = tmp_assign_source_10;

    }
    branch_no_2:;
    {
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_mod_expr_left_4 = mod_consts[66];
        if (var_representation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_4 = var_representation;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2173053583cb20ed3d4082e879bbc608, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2173053583cb20ed3d4082e879bbc608->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2173053583cb20ed3d4082e879bbc608, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2173053583cb20ed3d4082e879bbc608,
        type_description_1,
        par_self,
        var_representation,
        var_attr,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_2173053583cb20ed3d4082e879bbc608 == cache_frame_2173053583cb20ed3d4082e879bbc608) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2173053583cb20ed3d4082e879bbc608);
        cache_frame_2173053583cb20ed3d4082e879bbc608 = NULL;
    }

    assertFrameObject(frame_2173053583cb20ed3d4082e879bbc608);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_representation);
    var_representation = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_representation);
    var_representation = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_pyasn1$type$base$$$function__41___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_90f78445083983fff4c132dc4a9385d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90f78445083983fff4c132dc4a9385d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90f78445083983fff4c132dc4a9385d6)) {
        Py_XDECREF(cache_frame_90f78445083983fff4c132dc4a9385d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90f78445083983fff4c132dc4a9385d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90f78445083983fff4c132dc4a9385d6 = MAKE_FUNCTION_FRAME(codeobj_90f78445083983fff4c132dc4a9385d6, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90f78445083983fff4c132dc4a9385d6->m_type_description == NULL);
    frame_90f78445083983fff4c132dc4a9385d6 = cache_frame_90f78445083983fff4c132dc4a9385d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90f78445083983fff4c132dc4a9385d6);
    assert(Py_REFCNT(frame_90f78445083983fff4c132dc4a9385d6) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_2 = par_other;
        tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_90f78445083983fff4c132dc4a9385d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90f78445083983fff4c132dc4a9385d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90f78445083983fff4c132dc4a9385d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90f78445083983fff4c132dc4a9385d6,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_90f78445083983fff4c132dc4a9385d6 == cache_frame_90f78445083983fff4c132dc4a9385d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90f78445083983fff4c132dc4a9385d6);
        cache_frame_90f78445083983fff4c132dc4a9385d6 = NULL;
    }

    assertFrameObject(frame_90f78445083983fff4c132dc4a9385d6);

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


static PyObject *impl_pyasn1$type$base$$$function__42___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_7d1c4e15d2af4cb8bf9268763b336d50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d1c4e15d2af4cb8bf9268763b336d50 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d1c4e15d2af4cb8bf9268763b336d50)) {
        Py_XDECREF(cache_frame_7d1c4e15d2af4cb8bf9268763b336d50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d1c4e15d2af4cb8bf9268763b336d50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d1c4e15d2af4cb8bf9268763b336d50 = MAKE_FUNCTION_FRAME(codeobj_7d1c4e15d2af4cb8bf9268763b336d50, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d1c4e15d2af4cb8bf9268763b336d50->m_type_description == NULL);
    frame_7d1c4e15d2af4cb8bf9268763b336d50 = cache_frame_7d1c4e15d2af4cb8bf9268763b336d50;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d1c4e15d2af4cb8bf9268763b336d50);
    assert(Py_REFCNT(frame_7d1c4e15d2af4cb8bf9268763b336d50) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
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
        exception_tb = MAKE_TRACEBACK(frame_7d1c4e15d2af4cb8bf9268763b336d50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d1c4e15d2af4cb8bf9268763b336d50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d1c4e15d2af4cb8bf9268763b336d50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d1c4e15d2af4cb8bf9268763b336d50,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_7d1c4e15d2af4cb8bf9268763b336d50 == cache_frame_7d1c4e15d2af4cb8bf9268763b336d50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d1c4e15d2af4cb8bf9268763b336d50);
        cache_frame_7d1c4e15d2af4cb8bf9268763b336d50 = NULL;
    }

    assertFrameObject(frame_7d1c4e15d2af4cb8bf9268763b336d50);

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


static PyObject *impl_pyasn1$type$base$$$function__43___lt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_97a5a495b6dac31188deb11fa53aa16d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97a5a495b6dac31188deb11fa53aa16d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97a5a495b6dac31188deb11fa53aa16d)) {
        Py_XDECREF(cache_frame_97a5a495b6dac31188deb11fa53aa16d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97a5a495b6dac31188deb11fa53aa16d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97a5a495b6dac31188deb11fa53aa16d = MAKE_FUNCTION_FRAME(codeobj_97a5a495b6dac31188deb11fa53aa16d, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97a5a495b6dac31188deb11fa53aa16d->m_type_description == NULL);
    frame_97a5a495b6dac31188deb11fa53aa16d = cache_frame_97a5a495b6dac31188deb11fa53aa16d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97a5a495b6dac31188deb11fa53aa16d);
    assert(Py_REFCNT(frame_97a5a495b6dac31188deb11fa53aa16d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
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
        exception_tb = MAKE_TRACEBACK(frame_97a5a495b6dac31188deb11fa53aa16d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97a5a495b6dac31188deb11fa53aa16d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97a5a495b6dac31188deb11fa53aa16d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97a5a495b6dac31188deb11fa53aa16d,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_97a5a495b6dac31188deb11fa53aa16d == cache_frame_97a5a495b6dac31188deb11fa53aa16d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97a5a495b6dac31188deb11fa53aa16d);
        cache_frame_97a5a495b6dac31188deb11fa53aa16d = NULL;
    }

    assertFrameObject(frame_97a5a495b6dac31188deb11fa53aa16d);

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


static PyObject *impl_pyasn1$type$base$$$function__44___le__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_f8c6eaecddae266d0da82d2234e3bb95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f8c6eaecddae266d0da82d2234e3bb95 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8c6eaecddae266d0da82d2234e3bb95)) {
        Py_XDECREF(cache_frame_f8c6eaecddae266d0da82d2234e3bb95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8c6eaecddae266d0da82d2234e3bb95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8c6eaecddae266d0da82d2234e3bb95 = MAKE_FUNCTION_FRAME(codeobj_f8c6eaecddae266d0da82d2234e3bb95, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8c6eaecddae266d0da82d2234e3bb95->m_type_description == NULL);
    frame_f8c6eaecddae266d0da82d2234e3bb95 = cache_frame_f8c6eaecddae266d0da82d2234e3bb95;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f8c6eaecddae266d0da82d2234e3bb95);
    assert(Py_REFCNT(frame_f8c6eaecddae266d0da82d2234e3bb95) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
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
        exception_tb = MAKE_TRACEBACK(frame_f8c6eaecddae266d0da82d2234e3bb95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8c6eaecddae266d0da82d2234e3bb95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8c6eaecddae266d0da82d2234e3bb95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8c6eaecddae266d0da82d2234e3bb95,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_f8c6eaecddae266d0da82d2234e3bb95 == cache_frame_f8c6eaecddae266d0da82d2234e3bb95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8c6eaecddae266d0da82d2234e3bb95);
        cache_frame_f8c6eaecddae266d0da82d2234e3bb95 = NULL;
    }

    assertFrameObject(frame_f8c6eaecddae266d0da82d2234e3bb95);

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


static PyObject *impl_pyasn1$type$base$$$function__45___gt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_ce49ca9ff2c898dce018b1bc2649ff00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce49ca9ff2c898dce018b1bc2649ff00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce49ca9ff2c898dce018b1bc2649ff00)) {
        Py_XDECREF(cache_frame_ce49ca9ff2c898dce018b1bc2649ff00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce49ca9ff2c898dce018b1bc2649ff00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce49ca9ff2c898dce018b1bc2649ff00 = MAKE_FUNCTION_FRAME(codeobj_ce49ca9ff2c898dce018b1bc2649ff00, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce49ca9ff2c898dce018b1bc2649ff00->m_type_description == NULL);
    frame_ce49ca9ff2c898dce018b1bc2649ff00 = cache_frame_ce49ca9ff2c898dce018b1bc2649ff00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce49ca9ff2c898dce018b1bc2649ff00);
    assert(Py_REFCNT(frame_ce49ca9ff2c898dce018b1bc2649ff00) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
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
        exception_tb = MAKE_TRACEBACK(frame_ce49ca9ff2c898dce018b1bc2649ff00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce49ca9ff2c898dce018b1bc2649ff00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce49ca9ff2c898dce018b1bc2649ff00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce49ca9ff2c898dce018b1bc2649ff00,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_ce49ca9ff2c898dce018b1bc2649ff00 == cache_frame_ce49ca9ff2c898dce018b1bc2649ff00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce49ca9ff2c898dce018b1bc2649ff00);
        cache_frame_ce49ca9ff2c898dce018b1bc2649ff00 = NULL;
    }

    assertFrameObject(frame_ce49ca9ff2c898dce018b1bc2649ff00);

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


static PyObject *impl_pyasn1$type$base$$$function__46___ge__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_8b6e9c2b472eeaeb31460765a1d5266e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b6e9c2b472eeaeb31460765a1d5266e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b6e9c2b472eeaeb31460765a1d5266e)) {
        Py_XDECREF(cache_frame_8b6e9c2b472eeaeb31460765a1d5266e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b6e9c2b472eeaeb31460765a1d5266e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b6e9c2b472eeaeb31460765a1d5266e = MAKE_FUNCTION_FRAME(codeobj_8b6e9c2b472eeaeb31460765a1d5266e, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b6e9c2b472eeaeb31460765a1d5266e->m_type_description == NULL);
    frame_8b6e9c2b472eeaeb31460765a1d5266e = cache_frame_8b6e9c2b472eeaeb31460765a1d5266e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b6e9c2b472eeaeb31460765a1d5266e);
    assert(Py_REFCNT(frame_8b6e9c2b472eeaeb31460765a1d5266e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
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
        exception_tb = MAKE_TRACEBACK(frame_8b6e9c2b472eeaeb31460765a1d5266e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b6e9c2b472eeaeb31460765a1d5266e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b6e9c2b472eeaeb31460765a1d5266e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b6e9c2b472eeaeb31460765a1d5266e,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_8b6e9c2b472eeaeb31460765a1d5266e == cache_frame_8b6e9c2b472eeaeb31460765a1d5266e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b6e9c2b472eeaeb31460765a1d5266e);
        cache_frame_8b6e9c2b472eeaeb31460765a1d5266e = NULL;
    }

    assertFrameObject(frame_8b6e9c2b472eeaeb31460765a1d5266e);

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


static PyObject *impl_pyasn1$type$base$$$function__48___bool__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_04656f413f17d0430b0336910959f607;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_04656f413f17d0430b0336910959f607 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04656f413f17d0430b0336910959f607)) {
        Py_XDECREF(cache_frame_04656f413f17d0430b0336910959f607);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04656f413f17d0430b0336910959f607 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04656f413f17d0430b0336910959f607 = MAKE_FUNCTION_FRAME(codeobj_04656f413f17d0430b0336910959f607, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04656f413f17d0430b0336910959f607->m_type_description == NULL);
    frame_04656f413f17d0430b0336910959f607 = cache_frame_04656f413f17d0430b0336910959f607;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04656f413f17d0430b0336910959f607);
    assert(Py_REFCNT(frame_04656f413f17d0430b0336910959f607) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_04656f413f17d0430b0336910959f607, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04656f413f17d0430b0336910959f607->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04656f413f17d0430b0336910959f607, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04656f413f17d0430b0336910959f607,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_04656f413f17d0430b0336910959f607 == cache_frame_04656f413f17d0430b0336910959f607) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04656f413f17d0430b0336910959f607);
        cache_frame_04656f413f17d0430b0336910959f607 = NULL;
    }

    assertFrameObject(frame_04656f413f17d0430b0336910959f607);

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


static PyObject *impl_pyasn1$type$base$$$function__49_components(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_964a5bbe5b5b8c65d3a89fb672b57982;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_964a5bbe5b5b8c65d3a89fb672b57982 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_964a5bbe5b5b8c65d3a89fb672b57982)) {
        Py_XDECREF(cache_frame_964a5bbe5b5b8c65d3a89fb672b57982);

#if _DEBUG_REFCOUNTS
        if (cache_frame_964a5bbe5b5b8c65d3a89fb672b57982 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_964a5bbe5b5b8c65d3a89fb672b57982 = MAKE_FUNCTION_FRAME(codeobj_964a5bbe5b5b8c65d3a89fb672b57982, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_964a5bbe5b5b8c65d3a89fb672b57982->m_type_description == NULL);
    frame_964a5bbe5b5b8c65d3a89fb672b57982 = cache_frame_964a5bbe5b5b8c65d3a89fb672b57982;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_964a5bbe5b5b8c65d3a89fb672b57982);
    assert(Py_REFCNT(frame_964a5bbe5b5b8c65d3a89fb672b57982) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_964a5bbe5b5b8c65d3a89fb672b57982->m_frame.f_lineno = 576;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 576;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_964a5bbe5b5b8c65d3a89fb672b57982, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_964a5bbe5b5b8c65d3a89fb672b57982->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_964a5bbe5b5b8c65d3a89fb672b57982, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_964a5bbe5b5b8c65d3a89fb672b57982,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_964a5bbe5b5b8c65d3a89fb672b57982 == cache_frame_964a5bbe5b5b8c65d3a89fb672b57982) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_964a5bbe5b5b8c65d3a89fb672b57982);
        cache_frame_964a5bbe5b5b8c65d3a89fb672b57982 = NULL;
    }

    assertFrameObject(frame_964a5bbe5b5b8c65d3a89fb672b57982);

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

}


static PyObject *impl_pyasn1$type$base$$$function__51_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_cloneValueFlag = NULL;
    PyObject *var_initializers = NULL;
    PyObject *var_clone = NULL;
    struct Nuitka_FrameObject *frame_6219a4fd9d28b7965c03f91813364283;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6219a4fd9d28b7965c03f91813364283 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[86];
        tmp_default_value_1 = Py_False;
        tmp_assign_source_1 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_cloneValueFlag == NULL);
        var_cloneValueFlag = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_6219a4fd9d28b7965c03f91813364283)) {
        Py_XDECREF(cache_frame_6219a4fd9d28b7965c03f91813364283);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6219a4fd9d28b7965c03f91813364283 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6219a4fd9d28b7965c03f91813364283 = MAKE_FUNCTION_FRAME(codeobj_6219a4fd9d28b7965c03f91813364283, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6219a4fd9d28b7965c03f91813364283->m_type_description == NULL);
    frame_6219a4fd9d28b7965c03f91813364283 = cache_frame_6219a4fd9d28b7965c03f91813364283;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6219a4fd9d28b7965c03f91813364283);
    assert(Py_REFCNT(frame_6219a4fd9d28b7965c03f91813364283) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[57]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6219a4fd9d28b7965c03f91813364283->m_frame.f_lineno = 606;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initializers == NULL);
        var_initializers = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_initializers);
        tmp_expression_value_3 = var_initializers;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_1 = par_kwargs;
        frame_6219a4fd9d28b7965c03f91813364283->m_frame.f_lineno = 607;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_4);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_initializers);
        tmp_dircall_arg2_1 = var_initializers;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_3 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clone == NULL);
        var_clone = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_cloneValueFlag);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_cloneValueFlag);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_clone);
        tmp_args_element_value_2 = var_clone;
        CHECK_OBJECT(var_cloneValueFlag);
        tmp_args_element_value_3 = var_cloneValueFlag;
        frame_6219a4fd9d28b7965c03f91813364283->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    if (var_clone == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 614;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_clone;
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
        exception_tb = MAKE_TRACEBACK(frame_6219a4fd9d28b7965c03f91813364283, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6219a4fd9d28b7965c03f91813364283->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6219a4fd9d28b7965c03f91813364283, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6219a4fd9d28b7965c03f91813364283,
        type_description_1,
        par_self,
        par_kwargs,
        var_cloneValueFlag,
        var_initializers,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_6219a4fd9d28b7965c03f91813364283 == cache_frame_6219a4fd9d28b7965c03f91813364283) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6219a4fd9d28b7965c03f91813364283);
        cache_frame_6219a4fd9d28b7965c03f91813364283 = NULL;
    }

    assertFrameObject(frame_6219a4fd9d28b7965c03f91813364283);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cloneValueFlag);
    var_cloneValueFlag = NULL;
    CHECK_OBJECT(var_initializers);
    Py_DECREF(var_initializers);
    var_initializers = NULL;
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

    Py_XDECREF(var_cloneValueFlag);
    var_cloneValueFlag = NULL;
    Py_XDECREF(var_initializers);
    var_initializers = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__52_subtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_initializers = NULL;
    PyObject *var_cloneValueFlag = NULL;
    PyObject *var_implicitTag = NULL;
    PyObject *var_explicitTag = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_option = NULL;
    PyObject *var_clone = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_28b619effec2dfabc2d4838746cb9912;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_28b619effec2dfabc2d4838746cb9912 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28b619effec2dfabc2d4838746cb9912)) {
        Py_XDECREF(cache_frame_28b619effec2dfabc2d4838746cb9912);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28b619effec2dfabc2d4838746cb9912 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28b619effec2dfabc2d4838746cb9912 = MAKE_FUNCTION_FRAME(codeobj_28b619effec2dfabc2d4838746cb9912, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28b619effec2dfabc2d4838746cb9912->m_type_description == NULL);
    frame_28b619effec2dfabc2d4838746cb9912 = cache_frame_28b619effec2dfabc2d4838746cb9912;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28b619effec2dfabc2d4838746cb9912);
    assert(Py_REFCNT(frame_28b619effec2dfabc2d4838746cb9912) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[57]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 658;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initializers == NULL);
        var_initializers = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[86];
        tmp_default_value_1 = Py_False;
        tmp_assign_source_2 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_cloneValueFlag == NULL);
        var_cloneValueFlag = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_3 = par_kwargs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[72]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 662;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[90]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_implicitTag == NULL);
        var_implicitTag = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_implicitTag);
        tmp_cmp_expr_left_1 = var_implicitTag;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_implicitTag);
        tmp_args_element_value_1 = var_implicitTag;
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 664;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[71], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_initializers);
        tmp_ass_subscribed_1 = var_initializers;
        tmp_ass_subscript_1 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_5 = par_kwargs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[72]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 666;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[73]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_explicitTag == NULL);
        var_explicitTag = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_explicitTag);
        tmp_cmp_expr_left_2 = var_explicitTag;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_explicitTag);
        tmp_args_element_value_2 = var_explicitTag;
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 668;
        tmp_ass_subvalue_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[74], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_initializers == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 668;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_initializers;
        tmp_ass_subscript_2 = mod_consts[2];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_7 = par_kwargs;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[58]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 670;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 670;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 670;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 670;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 670;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[59];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 670;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_10;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_option;
            var_option = tmp_assign_source_11;
            Py_INCREF(var_option);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        if (var_initializers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 671;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_12 = var_initializers;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_12;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(var_arg);
        tmp_assign_source_13 = var_arg;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_13;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_8 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(var_option);
        tmp_iadd_expr_right_1 = var_option;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_15;

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_3 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 670;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_9);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_initializers == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 673;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = var_initializers;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_16 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clone == NULL);
        var_clone = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_cloneValueFlag);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_cloneValueFlag);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_clone);
        tmp_args_element_value_3 = var_clone;
        CHECK_OBJECT(var_cloneValueFlag);
        tmp_args_element_value_4 = var_cloneValueFlag;
        frame_28b619effec2dfabc2d4838746cb9912->m_frame.f_lineno = 676;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    if (var_clone == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 678;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_clone;
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
        exception_tb = MAKE_TRACEBACK(frame_28b619effec2dfabc2d4838746cb9912, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28b619effec2dfabc2d4838746cb9912->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28b619effec2dfabc2d4838746cb9912, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28b619effec2dfabc2d4838746cb9912,
        type_description_1,
        par_self,
        par_kwargs,
        var_initializers,
        var_cloneValueFlag,
        var_implicitTag,
        var_explicitTag,
        var_arg,
        var_option,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_28b619effec2dfabc2d4838746cb9912 == cache_frame_28b619effec2dfabc2d4838746cb9912) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28b619effec2dfabc2d4838746cb9912);
        cache_frame_28b619effec2dfabc2d4838746cb9912 = NULL;
    }

    assertFrameObject(frame_28b619effec2dfabc2d4838746cb9912);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_initializers);
    var_initializers = NULL;
    Py_XDECREF(var_cloneValueFlag);
    var_cloneValueFlag = NULL;
    Py_XDECREF(var_implicitTag);
    var_implicitTag = NULL;
    Py_XDECREF(var_explicitTag);
    var_explicitTag = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_option);
    var_option = NULL;
    Py_XDECREF(var_clone);
    var_clone = NULL;
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

    Py_XDECREF(var_initializers);
    var_initializers = NULL;
    Py_XDECREF(var_cloneValueFlag);
    var_cloneValueFlag = NULL;
    Py_XDECREF(var_implicitTag);
    var_implicitTag = NULL;
    Py_XDECREF(var_explicitTag);
    var_explicitTag = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_option);
    var_option = NULL;
    Py_XDECREF(var_clone);
    var_clone = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__53_getComponentByPosition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    struct Nuitka_FrameObject *frame_c458ca4581f143e53d9bee761f6ac852;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c458ca4581f143e53d9bee761f6ac852 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c458ca4581f143e53d9bee761f6ac852)) {
        Py_XDECREF(cache_frame_c458ca4581f143e53d9bee761f6ac852);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c458ca4581f143e53d9bee761f6ac852 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c458ca4581f143e53d9bee761f6ac852 = MAKE_FUNCTION_FRAME(codeobj_c458ca4581f143e53d9bee761f6ac852, module_pyasn1$type$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c458ca4581f143e53d9bee761f6ac852->m_type_description == NULL);
    frame_c458ca4581f143e53d9bee761f6ac852 = cache_frame_c458ca4581f143e53d9bee761f6ac852;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c458ca4581f143e53d9bee761f6ac852);
    assert(Py_REFCNT(frame_c458ca4581f143e53d9bee761f6ac852) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c458ca4581f143e53d9bee761f6ac852->m_frame.f_lineno = 681;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 681;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c458ca4581f143e53d9bee761f6ac852, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c458ca4581f143e53d9bee761f6ac852->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c458ca4581f143e53d9bee761f6ac852, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c458ca4581f143e53d9bee761f6ac852,
        type_description_1,
        par_self,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_c458ca4581f143e53d9bee761f6ac852 == cache_frame_c458ca4581f143e53d9bee761f6ac852) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c458ca4581f143e53d9bee761f6ac852);
        cache_frame_c458ca4581f143e53d9bee761f6ac852 = NULL;
    }

    assertFrameObject(frame_c458ca4581f143e53d9bee761f6ac852);

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
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__54_setComponentByPosition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_verifyConstraints = python_pars[3];
    struct Nuitka_FrameObject *frame_d0800b00bdea910b7b444d99223e793d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0800b00bdea910b7b444d99223e793d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0800b00bdea910b7b444d99223e793d)) {
        Py_XDECREF(cache_frame_d0800b00bdea910b7b444d99223e793d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0800b00bdea910b7b444d99223e793d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0800b00bdea910b7b444d99223e793d = MAKE_FUNCTION_FRAME(codeobj_d0800b00bdea910b7b444d99223e793d, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0800b00bdea910b7b444d99223e793d->m_type_description == NULL);
    frame_d0800b00bdea910b7b444d99223e793d = cache_frame_d0800b00bdea910b7b444d99223e793d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0800b00bdea910b7b444d99223e793d);
    assert(Py_REFCNT(frame_d0800b00bdea910b7b444d99223e793d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d0800b00bdea910b7b444d99223e793d->m_frame.f_lineno = 684;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 684;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0800b00bdea910b7b444d99223e793d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0800b00bdea910b7b444d99223e793d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0800b00bdea910b7b444d99223e793d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0800b00bdea910b7b444d99223e793d,
        type_description_1,
        par_self,
        par_idx,
        par_value,
        par_verifyConstraints
    );


    // Release cached frame if used for exception.
    if (frame_d0800b00bdea910b7b444d99223e793d == cache_frame_d0800b00bdea910b7b444d99223e793d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0800b00bdea910b7b444d99223e793d);
        cache_frame_d0800b00bdea910b7b444d99223e793d = NULL;
    }

    assertFrameObject(frame_d0800b00bdea910b7b444d99223e793d);

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
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_verifyConstraints);
    Py_DECREF(par_verifyConstraints);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyasn1$type$base$$$function__55_setComponents(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_idx = NULL;
    PyObject *var_value = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_251cc8f15fce8b5f53c5b6b08f3c630a;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a)) {
        Py_XDECREF(cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a = MAKE_FUNCTION_FRAME(codeobj_251cc8f15fce8b5f53c5b6b08f3c630a, module_pyasn1$type$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a->m_type_description == NULL);
    frame_251cc8f15fce8b5f53c5b6b08f3c630a = cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_251cc8f15fce8b5f53c5b6b08f3c630a);
    assert(Py_REFCNT(frame_251cc8f15fce8b5f53c5b6b08f3c630a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_args);
        tmp_args_element_value_1 = par_args;
        frame_251cc8f15fce8b5f53c5b6b08f3c630a->m_frame.f_lineno = 687;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 687;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 687;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 687;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooo";
                    exception_lineno = 687;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[59];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 687;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_6;
            Py_INCREF(var_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_value);
        tmp_ass_subvalue_1 = var_value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 688;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = par_self;
        CHECK_OBJECT(var_idx);
        tmp_ass_subscript_1 = var_idx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 688;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 687;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(par_kwargs);
        tmp_iter_arg_3 = par_kwargs;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 689;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_10 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_10;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        CHECK_OBJECT(var_k);
        tmp_subscript_value_1 = var_k;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 690;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_2 = par_self;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_2 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 689;
        type_description_1 = "oooooo";
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
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 691;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_251cc8f15fce8b5f53c5b6b08f3c630a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_251cc8f15fce8b5f53c5b6b08f3c630a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_251cc8f15fce8b5f53c5b6b08f3c630a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_251cc8f15fce8b5f53c5b6b08f3c630a,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_idx,
        var_value,
        var_k
    );


    // Release cached frame if used for exception.
    if (frame_251cc8f15fce8b5f53c5b6b08f3c630a == cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a);
        cache_frame_251cc8f15fce8b5f53c5b6b08f3c630a = NULL;
    }

    assertFrameObject(frame_251cc8f15fce8b5f53c5b6b08f3c630a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
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

    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$base$$$function__57_getComponentType(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_adf1c6436ddd0b10dd0a288cc0f93f72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72)) {
        Py_XDECREF(cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72 = MAKE_FUNCTION_FRAME(codeobj_adf1c6436ddd0b10dd0a288cc0f93f72, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72->m_type_description == NULL);
    frame_adf1c6436ddd0b10dd0a288cc0f93f72 = cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_adf1c6436ddd0b10dd0a288cc0f93f72);
    assert(Py_REFCNT(frame_adf1c6436ddd0b10dd0a288cc0f93f72) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[79]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;
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
        exception_tb = MAKE_TRACEBACK(frame_adf1c6436ddd0b10dd0a288cc0f93f72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_adf1c6436ddd0b10dd0a288cc0f93f72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_adf1c6436ddd0b10dd0a288cc0f93f72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_adf1c6436ddd0b10dd0a288cc0f93f72,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_adf1c6436ddd0b10dd0a288cc0f93f72 == cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72);
        cache_frame_adf1c6436ddd0b10dd0a288cc0f93f72 = NULL;
    }

    assertFrameObject(frame_adf1c6436ddd0b10dd0a288cc0f93f72);

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


static PyObject *impl_pyasn1$type$base$$$function__58_verifySizeSpec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ffcae663ad048b05695586e9b52174e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffcae663ad048b05695586e9b52174e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffcae663ad048b05695586e9b52174e5)) {
        Py_XDECREF(cache_frame_ffcae663ad048b05695586e9b52174e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffcae663ad048b05695586e9b52174e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffcae663ad048b05695586e9b52174e5 = MAKE_FUNCTION_FRAME(codeobj_ffcae663ad048b05695586e9b52174e5, module_pyasn1$type$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffcae663ad048b05695586e9b52174e5->m_type_description == NULL);
    frame_ffcae663ad048b05695586e9b52174e5 = cache_frame_ffcae663ad048b05695586e9b52174e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffcae663ad048b05695586e9b52174e5);
    assert(Py_REFCNT(frame_ffcae663ad048b05695586e9b52174e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_ffcae663ad048b05695586e9b52174e5->m_frame.f_lineno = 703;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffcae663ad048b05695586e9b52174e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffcae663ad048b05695586e9b52174e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffcae663ad048b05695586e9b52174e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffcae663ad048b05695586e9b52174e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ffcae663ad048b05695586e9b52174e5 == cache_frame_ffcae663ad048b05695586e9b52174e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffcae663ad048b05695586e9b52174e5);
        cache_frame_ffcae663ad048b05695586e9b52174e5 = NULL;
    }

    assertFrameObject(frame_ffcae663ad048b05695586e9b52174e5);

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



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__10_isNoValue,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_283d93382fe8c98054f0757d92596e7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__11_prettyPrint(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__11_prettyPrint,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_4211dcbdd5721fefa8377fdafdcc818a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__12_getTagSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__12_getTagSet,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_95f53de5fb8309a2e6af9cacc1d6e193,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__13_getEffectiveTagSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__13_getEffectiveTagSet,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_c7026b6fb12e81c78750a68b00b065d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__14_getTagMap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__14_getTagMap,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_556e1c2f209b532106a92217ca598b65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__15_getSubtypeSpec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__15_getSubtypeSpec,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_3b88eb944a3bd3a3b8d0deb76d762954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__16_hasValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__16_hasValue,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_b7e0adde0d836fd9dfbc84589708ee5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__17___new__,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_8f8886bdc3b70e87b8f3a2e98b19cc22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_0dd62dcd2cbf882cab1fd070db5c26cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_9afa04a483f2ec34c9f785f2217bc439,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__18___getattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__18___getattr__,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_1d403b2a02665675d9d48407c964b12f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__19___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__19___repr__,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_cce32da79bdd427b4da57278ef4eedfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__1_getTypeId,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_3ac3c3f191af4e33b5eaf162882a9f78,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__20___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__20___init__,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_0a74faf4eb7f00ea449450cf63d7ac5a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__21___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__21___repr__,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_4c72b9d0746a64ca910a80e80ac9e899,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__22___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__22___eq__,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_25c7f1afabf2defad745d34536028eb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__23___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__23___ne__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_31d83a184df96333cfd440a4071ec6a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__24___lt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__24___lt__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_c5e9bfc0a586a2e69fc678579e19c8be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__25___le__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__25___le__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_47ee89047bf6c14e907d1b72805a45d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__26___gt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__26___gt__,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_d5ccb4955269c19c53babfe802a160d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__27___ge__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__27___ge__,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_58216ee1e60366aac2ad22da4aab50be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__29___bool__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__29___bool__,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_0708176cefee4c708acef22e00337415,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__2___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__2___init__,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_50b9df4737dbdf9c2d4fd23bcd3fc4d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__30___hash__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__30___hash__,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_49cbd82698ea2eef6b02f48d48afa577,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__31_isValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__31_isValue,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_422dedcccbd581cca099f64d3e198b0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__32_clone(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__32_clone,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_5c2556ccca12bbfaa364964de6f96ea8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__33_subtype(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__33_subtype,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_c36f2b368ba4c7a52a4d44685d338c9b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__34_prettyIn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__34_prettyIn,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_5dcb04e7da70fb637552f7d009c5de0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__35_prettyOut() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__35_prettyOut,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_71ca5a77c5c5e5f30aaed697803a08d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__36_prettyPrint(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__36_prettyPrint,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_abb622d613a9ebc34bd5238aa38d297e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__37_prettyPrintType(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__37_prettyPrintType,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_a74bc630c8804b909dfa9feb41a9e355,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__38___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__38___init__,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_08deee05a7f60a079726a68223f67f9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__39__moveSizeSpec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__39__moveSizeSpec,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_9eaee38cb8ea44255967db84fb28e939,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__3___setattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__3___setattr__,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_127007b57ada561be1d7375c2dbb0ba4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__40___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__40___repr__,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_2173053583cb20ed3d4082e879bbc608,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__41___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__41___eq__,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_90f78445083983fff4c132dc4a9385d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__42___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__42___ne__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_7d1c4e15d2af4cb8bf9268763b336d50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__43___lt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__43___lt__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_97a5a495b6dac31188deb11fa53aa16d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__44___le__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__44___le__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_f8c6eaecddae266d0da82d2234e3bb95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__45___gt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__45___gt__,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_ce49ca9ff2c898dce018b1bc2649ff00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__46___ge__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__46___ge__,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_8b6e9c2b472eeaeb31460765a1d5266e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__48___bool__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__48___bool__,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_04656f413f17d0430b0336910959f607,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__49_components() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__49_components,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_964a5bbe5b5b8c65d3a89fb672b57982,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__4___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__4___str__,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_b20e315f966d1e72f31e9ea9772e64ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__50__cloneComponentValues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_f6ab264e0cb769828c7f36c08e261f9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__51_clone() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__51_clone,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_6219a4fd9d28b7965c03f91813364283,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__52_subtype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__52_subtype,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_28b619effec2dfabc2d4838746cb9912,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__53_getComponentByPosition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__53_getComponentByPosition,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_c458ca4581f143e53d9bee761f6ac852,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__54_setComponentByPosition(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__54_setComponentByPosition,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_d0800b00bdea910b7b444d99223e793d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__55_setComponents() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__55_setComponents,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_251cc8f15fce8b5f53c5b6b08f3c630a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__56_setDefaultComponents() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_3b2a41b6a31e33e13b07f0cd5fce9f22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__57_getComponentType() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__57_getComponentType,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_adf1c6436ddd0b10dd0a288cc0f93f72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__58_verifySizeSpec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__58_verifySizeSpec,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_ffcae663ad048b05695586e9b52174e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__5_readOnly,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_79e8565044b56e79ec3c0c5899bbc61e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__6_effectiveTagSet,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_f4db3966691303e434f856c6a3cce191,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__7_tagMap,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_4b145d36d002bdebd2772956f00b7307,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__8_isSameTypeWith(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__8_isSameTypeWith,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_52147f5aac2bcc036f08007bd2646ec4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$base$$$function__9_isSuperTypeOf(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$base$$$function__9_isSuperTypeOf,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_fcf792fd47a15eeb63e8281f0a9cd20b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$base,
        mod_consts[21],
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

function_impl_code functable_pyasn1$type$base[] = {
    impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug,
    impl_pyasn1$type$base$$$function__17___new__$$$function__1_getPlug$$$function__1_plug,
    impl_pyasn1$type$base$$$function__1_getTypeId,
    impl_pyasn1$type$base$$$function__2___init__,
    impl_pyasn1$type$base$$$function__3___setattr__,
    impl_pyasn1$type$base$$$function__4___str__,
    impl_pyasn1$type$base$$$function__5_readOnly,
    impl_pyasn1$type$base$$$function__6_effectiveTagSet,
    impl_pyasn1$type$base$$$function__7_tagMap,
    impl_pyasn1$type$base$$$function__8_isSameTypeWith,
    impl_pyasn1$type$base$$$function__9_isSuperTypeOf,
    impl_pyasn1$type$base$$$function__10_isNoValue,
    impl_pyasn1$type$base$$$function__11_prettyPrint,
    impl_pyasn1$type$base$$$function__12_getTagSet,
    impl_pyasn1$type$base$$$function__13_getEffectiveTagSet,
    impl_pyasn1$type$base$$$function__14_getTagMap,
    impl_pyasn1$type$base$$$function__15_getSubtypeSpec,
    impl_pyasn1$type$base$$$function__16_hasValue,
    impl_pyasn1$type$base$$$function__17___new__,
    impl_pyasn1$type$base$$$function__18___getattr__,
    impl_pyasn1$type$base$$$function__19___repr__,
    impl_pyasn1$type$base$$$function__20___init__,
    impl_pyasn1$type$base$$$function__21___repr__,
    impl_pyasn1$type$base$$$function__22___eq__,
    impl_pyasn1$type$base$$$function__23___ne__,
    impl_pyasn1$type$base$$$function__24___lt__,
    impl_pyasn1$type$base$$$function__25___le__,
    impl_pyasn1$type$base$$$function__26___gt__,
    impl_pyasn1$type$base$$$function__27___ge__,
    impl_pyasn1$type$base$$$function__29___bool__,
    impl_pyasn1$type$base$$$function__30___hash__,
    impl_pyasn1$type$base$$$function__31_isValue,
    impl_pyasn1$type$base$$$function__32_clone,
    impl_pyasn1$type$base$$$function__33_subtype,
    impl_pyasn1$type$base$$$function__34_prettyIn,
    impl_pyasn1$type$base$$$function__35_prettyOut,
    impl_pyasn1$type$base$$$function__36_prettyPrint,
    impl_pyasn1$type$base$$$function__37_prettyPrintType,
    impl_pyasn1$type$base$$$function__38___init__,
    impl_pyasn1$type$base$$$function__39__moveSizeSpec,
    impl_pyasn1$type$base$$$function__40___repr__,
    impl_pyasn1$type$base$$$function__41___eq__,
    impl_pyasn1$type$base$$$function__42___ne__,
    impl_pyasn1$type$base$$$function__43___lt__,
    impl_pyasn1$type$base$$$function__44___le__,
    impl_pyasn1$type$base$$$function__45___gt__,
    impl_pyasn1$type$base$$$function__46___ge__,
    impl_pyasn1$type$base$$$function__48___bool__,
    impl_pyasn1$type$base$$$function__49_components,
    NULL,
    impl_pyasn1$type$base$$$function__51_clone,
    impl_pyasn1$type$base$$$function__52_subtype,
    impl_pyasn1$type$base$$$function__53_getComponentByPosition,
    impl_pyasn1$type$base$$$function__54_setComponentByPosition,
    impl_pyasn1$type$base$$$function__55_setComponents,
    NULL,
    impl_pyasn1$type$base$$$function__57_getComponentType,
    impl_pyasn1$type$base$$$function__58_verifySizeSpec,
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

    function_impl_code *current = functable_pyasn1$type$base;
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

    if (offset > sizeof(functable_pyasn1$type$base) || offset < 0) {
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
        functable_pyasn1$type$base[offset],
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
        module_pyasn1$type$base,
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
PyObject *modulecode_pyasn1$type$base(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyasn1.type.base");

    // Store the module for future use.
    module_pyasn1$type$base = module;

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
        PRINT_STRING("pyasn1.type.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1.type.base: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1.type.base: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyasn1$type$base\n");

    moduledict_pyasn1$type$base = MODULE_DICT(module_pyasn1$type$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyasn1$type$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[258]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyasn1$type$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyasn1$type$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
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
    struct Nuitka_FrameObject *frame_4ade62603eb1e11a68b75b2bab96371e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyasn1$type$base$$$class__1_Asn1Item_19 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bfba611c14a642d8a5248585a94d8ff8_2;
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
    PyObject *locals_pyasn1$type$base$$$class__2_Asn1Type_29 = NULL;
    struct Nuitka_FrameObject *frame_572fe93f6b2b45708a684e849438e3dd_3;
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
    PyObject *locals_pyasn1$type$base$$$class__3_NoValue_168 = NULL;
    struct Nuitka_FrameObject *frame_93b5e98d6a82c0b0f3c255c5773bb53b_4;
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
    PyObject *locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245 = NULL;
    struct Nuitka_FrameObject *frame_ea9477bc95aaeded890681fe3fd98254_5;
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
    PyObject *locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481 = NULL;
    struct Nuitka_FrameObject *frame_d6bcf2d80dc63670a673825188bc7518_6;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_2);
    }
    frame_4ade62603eb1e11a68b75b2bab96371e = MAKE_MODULE_FRAME(codeobj_4ade62603eb1e11a68b75b2bab96371e, module_pyasn1$type$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ade62603eb1e11a68b75b2bab96371e);
    assert(Py_REFCNT(frame_4ade62603eb1e11a68b75b2bab96371e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[95], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[96], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[98];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyasn1$type$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[99];
        tmp_level_value_1 = mod_consts[6];
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyasn1$type$base,
                mod_consts[8],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[100];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyasn1$type$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[101];
        tmp_level_value_2 = mod_consts[6];
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 10;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyasn1$type$base,
                mod_consts[35],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[102];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyasn1$type$base;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[103];
        tmp_level_value_3 = mod_consts[6];
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyasn1$type$base,
                mod_consts[104],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[102];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyasn1$type$base;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[105];
        tmp_level_value_4 = mod_consts[6];
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyasn1$type$base,
                mod_consts[106],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[102];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyasn1$type$base;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[107];
        tmp_level_value_5 = mod_consts[6];
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyasn1$type$base,
                mod_consts[14],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST4(mod_consts[108]);
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[110];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_11 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[6];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[111]);
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[0];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 19;
        tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[112]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[44];
        tmp_getattr_default_1 = mod_consts[114];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
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
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[44]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 19;
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
            locals_pyasn1$type$base$$$class__1_Asn1Item_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_19, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_19, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        frame_bfba611c14a642d8a5248585a94d8ff8_2 = MAKE_CLASS_FRAME(codeobj_bfba611c14a642d8a5248585a94d8ff8, module_pyasn1$type$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bfba611c14a642d8a5248585a94d8ff8_2);
        assert(Py_REFCNT(frame_bfba611c14a642d8a5248585a94d8ff8_2) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_defaults_1;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_2;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__1_Asn1Item_19, mod_consts[118]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_19, mod_consts[118]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[118]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = mod_consts[119];
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(tmp_defaults_1);

            frame_bfba611c14a642d8a5248585a94d8ff8_2->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_defaults_2 = mod_consts[119];
            Py_INCREF(tmp_defaults_2);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__1_getTypeId(tmp_defaults_2);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_19, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bfba611c14a642d8a5248585a94d8ff8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bfba611c14a642d8a5248585a94d8ff8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bfba611c14a642d8a5248585a94d8ff8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bfba611c14a642d8a5248585a94d8ff8_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bfba611c14a642d8a5248585a94d8ff8_2);

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
            tmp_cmp_expr_right_1 = mod_consts[110];
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__1_Asn1Item_19, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[0];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pyasn1$type$base$$$class__1_Asn1Item_19;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 19;
            tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

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
        Py_DECREF(locals_pyasn1$type$base$$$class__1_Asn1Item_19);
        locals_pyasn1$type$base$$$class__1_Asn1Item_19 = NULL;
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

        Py_DECREF(locals_pyasn1$type$base$$$class__1_Asn1Item_19);
        locals_pyasn1$type$base$$$class__1_Asn1Item_19 = NULL;
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
        exception_lineno = 19;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[6];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[111]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[111]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = mod_consts[45];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 29;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[112]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[44];
        tmp_getattr_default_2 = mod_consts[114];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[44]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
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


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 29;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyasn1$type$base$$$class__2_Asn1Type_29 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        frame_572fe93f6b2b45708a684e849438e3dd_3 = MAKE_CLASS_FRAME(codeobj_572fe93f6b2b45708a684e849438e3dd, module_pyasn1$type$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_572fe93f6b2b45708a684e849438e3dd_3);
        assert(Py_REFCNT(frame_572fe93f6b2b45708a684e849438e3dd_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[106]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[106]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[124]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[104]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[104]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[125]);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__2___init__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__3___setattr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__4___str__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[130], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_3;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_5 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[132]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_3 = MAKE_FUNCTION_pyasn1$type$base$$$function__5_readOnly();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_7 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[132]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_pyasn1$type$base$$$function__6_effectiveTagSet();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_7;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_9 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[132]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 82;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_7 = MAKE_FUNCTION_pyasn1$type$base$$$function__7_tagMap();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 82;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[136];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__8_isSameTypeWith(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[136];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__9_isSuperTypeOf(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[140]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_11 = PyObject_GetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[140]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[140]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_8 = MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue();

            frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame.f_lineno = 136;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_pyasn1$type$base$$$function__10_isNoValue();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[143];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__11_prettyPrint(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__12_getTagSet();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__13_getEffectiveTagSet();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[147], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__14_getTagMap();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__15_getSubtypeSpec();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[151], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__16_hasValue();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_572fe93f6b2b45708a684e849438e3dd_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_572fe93f6b2b45708a684e849438e3dd_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_572fe93f6b2b45708a684e849438e3dd_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_572fe93f6b2b45708a684e849438e3dd_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_572fe93f6b2b45708a684e849438e3dd_3);

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


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__2_Asn1Type_29, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_12 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[45];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyasn1$type$base$$$class__2_Asn1Type_29;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 29;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyasn1$type$base$$$class__2_Asn1Type_29);
        locals_pyasn1$type$base$$$class__2_Asn1Type_29 = NULL;
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

        Py_DECREF(locals_pyasn1$type$base$$$class__2_Asn1Type_29);
        locals_pyasn1$type$base$$$class__2_Asn1Type_29 = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_24);
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
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assign_source_26 == NULL)) {
            tmp_assign_source_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[110];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[6];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[111]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[111]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[156];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 168;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[112]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[44];
        tmp_getattr_default_3 = mod_consts[114];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[44]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
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


            exception_lineno = 168;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 168;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_31;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyasn1$type$base$$$class__3_NoValue_168 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_9;
        }
        frame_93b5e98d6a82c0b0f3c255c5773bb53b_4 = MAKE_CLASS_FRAME(codeobj_93b5e98d6a82c0b0f3c255c5773bb53b, module_pyasn1$type$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_93b5e98d6a82c0b0f3c255c5773bb53b_4);
        assert(Py_REFCNT(frame_93b5e98d6a82c0b0f3c255c5773bb53b_4) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[158]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_14 = PyObject_GetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[158]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[158]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_93b5e98d6a82c0b0f3c255c5773bb53b_4->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[159]);

            Py_DECREF(tmp_called_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_dictset_value = PySet_New(mod_consts[160]);
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[26], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__17___new__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[38], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__18___getattr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[162], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__19___repr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_93b5e98d6a82c0b0f3c255c5773bb53b_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_93b5e98d6a82c0b0f3c255c5773bb53b_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_93b5e98d6a82c0b0f3c255c5773bb53b_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_93b5e98d6a82c0b0f3c255c5773bb53b_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_93b5e98d6a82c0b0f3c255c5773bb53b_4);

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
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_3 = mod_consts[110];
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__3_NoValue_168, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_15 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[156];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pyasn1$type$base$$$class__3_NoValue_168;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 168;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_32 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyasn1$type$base$$$class__3_NoValue_168);
        locals_pyasn1$type$base$$$class__3_NoValue_168 = NULL;
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

        Py_DECREF(locals_pyasn1$type$base$$$class__3_NoValue_168);
        locals_pyasn1$type$base$$$class__3_NoValue_168 = NULL;
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
        exception_lineno = 168;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_32);
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
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 242;
        tmp_assign_source_34 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_34);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_condition_result_19 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_16 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[6];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[111]);
        tmp_condition_result_20 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[111]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_tuple_element_12 = mod_consts[166];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_12 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 245;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[112]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
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
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[44];
        tmp_getattr_default_4 = mod_consts[114];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[44]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 245;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_12;
        }
        frame_ea9477bc95aaeded890681fe3fd98254_5 = MAKE_CLASS_FRAME(codeobj_ea9477bc95aaeded890681fe3fd98254, module_pyasn1$type$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ea9477bc95aaeded890681fe3fd98254_5);
        assert(Py_REFCNT(frame_ea9477bc95aaeded890681fe3fd98254_5) == 2);

        // Framed code:
        tmp_dictset_value = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[22]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto frame_exception_exit_5;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_5;
            }
        }

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_tuple_element_14;
            tmp_tuple_element_14 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[22]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_6 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_6, 0, tmp_tuple_element_14);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__20___init__(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__21___repr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__22___eq__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__23___ne__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__24___lt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__25___le__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__26___gt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[178], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__27___ge__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__29___bool__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[182], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__30___hash__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[184], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_18 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[132]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_pyasn1$type$base$$$function__31_isValue();

            frame_ea9477bc95aaeded890681fe3fd98254_5->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_pyasn1$type$base$$$function__31_isValue();

            frame_ea9477bc95aaeded890681fe3fd98254_5->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_15;
            tmp_tuple_element_15 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[22]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 351;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_7 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_7, 0, tmp_tuple_element_15);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__32_clone(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_tuple_element_16;
            tmp_tuple_element_16 = PyObject_GetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[22]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 378;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_8 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_8, 0, tmp_tuple_element_16);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__33_subtype(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[188], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__34_prettyIn();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__35_prettyOut();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[143];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__36_prettyPrint(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = mod_consts[143];
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__37_prettyPrintType(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[193], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ea9477bc95aaeded890681fe3fd98254_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ea9477bc95aaeded890681fe3fd98254_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ea9477bc95aaeded890681fe3fd98254_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ea9477bc95aaeded890681fe3fd98254_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_ea9477bc95aaeded890681fe3fd98254_5);

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
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_20 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_17 = mod_consts[166];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_17 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 245;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_41 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245);
        locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245 = NULL;
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

        Py_DECREF(locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245);
        locals_pyasn1$type$base$$$class__4_SimpleAsn1Type_245 = NULL;
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
        exception_lineno = 245;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_41);
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
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assign_source_43 == NULL)) {
            tmp_assign_source_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_43);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_18;
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_18);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_45 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        tmp_condition_result_24 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_21 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[6];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[111]);
        tmp_condition_result_25 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[111]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        tmp_tuple_element_19 = mod_consts[196];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_19 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 481;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[112]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_26 != false) {
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
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[44];
        tmp_getattr_default_5 = mod_consts[114];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[44]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 481;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_49;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[197];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_15;
        }
        frame_d6bcf2d80dc63670a673825188bc7518_6 = MAKE_CLASS_FRAME(codeobj_d6bcf2d80dc63670a673825188bc7518, module_pyasn1$type$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d6bcf2d80dc63670a673825188bc7518_6);
        assert(Py_REFCNT(frame_d6bcf2d80dc63670a673825188bc7518_6) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[198], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_called_instance_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[104]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[104]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 503;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_d6bcf2d80dc63670a673825188bc7518_6->m_frame.f_lineno = 503;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[125]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 503;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 503;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__38___init__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__39__moveSizeSpec();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__40___repr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__41___eq__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__42___ne__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__43___lt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__44___le__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__45___gt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[178], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__46___ge__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__48___bool__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[182], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_22 = PyObject_GetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[132]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_pyasn1$type$base$$$function__49_components();

            frame_d6bcf2d80dc63670a673825188bc7518_6->m_frame.f_lineno = 574;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_pyasn1$type$base$$$function__49_components();

            frame_d6bcf2d80dc63670a673825188bc7518_6->m_frame.f_lineno = 574;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__50__cloneComponentValues();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__51_clone();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[88], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__52_subtype();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[188], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__53_getComponentByPosition();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[213], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_defaults_11;
            tmp_defaults_11 = mod_consts[215];
            Py_INCREF(tmp_defaults_11);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__54_setComponentByPosition(tmp_defaults_11);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[216], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__55_setComponents();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[218], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__56_setDefaultComponents();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[220], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__57_getComponentType();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[222], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$base$$$function__58_verifySizeSpec();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[224], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d6bcf2d80dc63670a673825188bc7518_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d6bcf2d80dc63670a673825188bc7518_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d6bcf2d80dc63670a673825188bc7518_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d6bcf2d80dc63670a673825188bc7518_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_d6bcf2d80dc63670a673825188bc7518_6);

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
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_24 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_21 = mod_consts[196];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_21 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_4ade62603eb1e11a68b75b2bab96371e->m_frame.f_lineno = 481;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_50 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481);
        locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481 = NULL;
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

        Py_DECREF(locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481);
        locals_pyasn1$type$base$$$class__5_ConstructedAsn1Type_481 = NULL;
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
        exception_lineno = 481;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_50);
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
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assign_source_52 == NULL)) {
            tmp_assign_source_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$base, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_52);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ade62603eb1e11a68b75b2bab96371e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ade62603eb1e11a68b75b2bab96371e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ade62603eb1e11a68b75b2bab96371e, exception_lineno);
    }



    assertFrameObject(frame_4ade62603eb1e11a68b75b2bab96371e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyasn1.type.base", false);

    Py_INCREF(module_pyasn1$type$base);
    return module_pyasn1$type$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyasn1$type$base", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
