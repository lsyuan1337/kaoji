/* Generated code for Python module 'sqlalchemy.sql.visitors'
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

/* The "module_sqlalchemy$sql$visitors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$sql$visitors;
PyDictObject *moduledict_sqlalchemy$sql$visitors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[418];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[418];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.sql.visitors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 418; i++) {
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
void checkModuleConstants_sqlalchemy$sql$visitors(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 418; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bcccdc3edfad3faadf5b0b66b7d0d972;
static PyCodeObject *codeobj_f5dc13b6e0d6f95a0f0477887419cc1b;
static PyCodeObject *codeobj_00e3abd37c9e9ce840b19310fabda3e9;
static PyCodeObject *codeobj_a832f16d85d65ceb0361dd7db9de8182;
static PyCodeObject *codeobj_6e85fac6793d84977317b242d043188e;
static PyCodeObject *codeobj_08f72d29ea13ed6ed9e6eb6bcd9d53f1;
static PyCodeObject *codeobj_adc29990789673a5994d0c1b6a30b395;
static PyCodeObject *codeobj_c2e71453ef2f2247fe3981d373b47787;
static PyCodeObject *codeobj_c1887de59b76e7fae9566375743d5135;
static PyCodeObject *codeobj_a6230041da4aaac4777ef79439c0606c;
static PyCodeObject *codeobj_965e6186ce5d2efb739633ef71a4e955;
static PyCodeObject *codeobj_aa5e5628154e8e8d821b63ceafc144d3;
static PyCodeObject *codeobj_ef3ab4ffe32db64b90fa6cbdc1efa0bf;
static PyCodeObject *codeobj_ddb53996904d442f405bda6bbc83ffca;
static PyCodeObject *codeobj_e4a78be2c27f82dd3c500b27b430a910;
static PyCodeObject *codeobj_11f35fa77e2ba11ff9e755228f32d0b3;
static PyCodeObject *codeobj_f6128e76ca9c0de123886cec0be4835d;
static PyCodeObject *codeobj_8cb64567d22609bf43dc2c4a6725650c;
static PyCodeObject *codeobj_45bf5f49209b4ddc6f216c49641ea425;
static PyCodeObject *codeobj_a205cd41b801b93c02c3607a299d73b3;
static PyCodeObject *codeobj_14a1816ceaf5c91bcb7da88fe3154991;
static PyCodeObject *codeobj_ca1d63bf70bdb728357b6d9aac96bd47;
static PyCodeObject *codeobj_6208a17f5fd93fbe3f2fb60236eab36e;
static PyCodeObject *codeobj_3ca816185e6f45932cb2616f8f238dd0;
static PyCodeObject *codeobj_cb1e879a242e02565164af240813ce1e;
static PyCodeObject *codeobj_d9e1c95c666d942ebee34085c9ade54a;
static PyCodeObject *codeobj_4190ff645ae851e4c68167354bf09fc7;
static PyCodeObject *codeobj_959971bacb64b7c3ec646ee5e6a11380;
static PyCodeObject *codeobj_0138ac5916cca247c1ef9064ee33de54;
static PyCodeObject *codeobj_1d38b182a87909068122af0a35f2ead7;
static PyCodeObject *codeobj_9eb8bf3164c1f08eca0c4a36c9a25135;
static PyCodeObject *codeobj_08c1344e1fac9e65010a1cb6ad4d580d;
static PyCodeObject *codeobj_39fdd2693491dbd1c3001bc0de094e8c;
static PyCodeObject *codeobj_318f5f42d2c8681687b38c547a7ad99d;
static PyCodeObject *codeobj_58b48860e48dcfa15005f3ed64a4cb56;
static PyCodeObject *codeobj_66a90078af0814d09e5a2a28d4e1d970;
static PyCodeObject *codeobj_ca57a73adfd4bf57c5ddb64ec078e702;
static PyCodeObject *codeobj_c64c520fdf14d6b3dfe8df2dd99a4321;
static PyCodeObject *codeobj_53dfbb782ca9caadeb854f97537a2e97;
static PyCodeObject *codeobj_c1f4e3861cadc72d315d82b89ee9b70d;
static PyCodeObject *codeobj_f1bb30aa91a0661c2c70f2ebd309486a;
static PyCodeObject *codeobj_fc4bce2e76eaaded557b1bc0de6a6c94;
static PyCodeObject *codeobj_7131b016ee7b7f233cc1a3eb59185382;
static PyCodeObject *codeobj_2c3d0d498460f76d0bd76f88a909770c;
static PyCodeObject *codeobj_6bea1efb51aa54e02b32588088a4ed5a;
static PyCodeObject *codeobj_7f613ec19e6b424a6a62ef8a67f8dcc8;
static PyCodeObject *codeobj_defe1859f5e60181f93cacf1d419e956;
static PyCodeObject *codeobj_dc3e33bbc0a732b98be69bdb200eeb7d;
static PyCodeObject *codeobj_d9c15eadc0532ff30db1c43eb72e5a34;
static PyCodeObject *codeobj_022110a24371ac147042486a4d836f98;
static PyCodeObject *codeobj_c1832f3eac9011532183c7879c2e1adf;
static PyCodeObject *codeobj_f1cde627b1eb2bb0454f268773d05994;
static PyCodeObject *codeobj_d15c87ce5a23dbd50a65734f24855074;
static PyCodeObject *codeobj_7f78374c1230e27166e77e19e353f9c1;
static PyCodeObject *codeobj_e5c71a2c7366c19508512d169ea7ca1e;
static PyCodeObject *codeobj_b781d31fb1be010d48bd77140c852686;
static PyCodeObject *codeobj_47d8a0854078a2ddb363bd579a217768;
static PyCodeObject *codeobj_67afadf855e1fea82997d38a97305067;
static PyCodeObject *codeobj_6e0f2b35bd4a1f2374aca7c7b9f9e0aa;
static PyCodeObject *codeobj_bd00c370a4d7abd5c336f202ce979c2c;
static PyCodeObject *codeobj_7d2d4fae6c0cfa77396577982c0011c9;
static PyCodeObject *codeobj_b204c40fc2bda59b66c035d77f99dc12;
static PyCodeObject *codeobj_e87fb7fd3f88f0d0604b22b986443577;
static PyCodeObject *codeobj_864c01209b36928df9f84af02fc3a5f6;
static PyCodeObject *codeobj_85c48f8aa6ebf2ab380e21401a1d7e94;
static PyCodeObject *codeobj_0bb345f47e83ba90bd40d336fb31e2d8;
static PyCodeObject *codeobj_c01dc4f1182ef88deccb237eaef564f4;
static PyCodeObject *codeobj_53af19dd9b5731655ede64efa597c7fe;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[370]); CHECK_OBJECT(module_filename_obj);
    codeobj_bcccdc3edfad3faadf5b0b66b7d0d972 = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[371], NULL, 1, 0, 0);
    codeobj_f5dc13b6e0d6f95a0f0477887419cc1b = MAKE_CODE_OBJECT(module_filename_obj, 564, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[372], NULL, 1, 0, 0);
    codeobj_00e3abd37c9e9ce840b19310fabda3e9 = MAKE_CODE_OBJECT(module_filename_obj, 745, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[373], mod_consts[373], mod_consts[374], NULL, 1, 0, 0);
    codeobj_a832f16d85d65ceb0361dd7db9de8182 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[375], mod_consts[375], NULL, NULL, 0, 0, 0);
    codeobj_6e85fac6793d84977317b242d043188e = MAKE_CODE_OBJECT(module_filename_obj, 1142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[376], mod_consts[376], mod_consts[377], NULL, 1, 0, 0);
    codeobj_08f72d29ea13ed6ed9e6eb6bcd9d53f1 = MAKE_CODE_OBJECT(module_filename_obj, 726, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[343], mod_consts[343], mod_consts[378], NULL, 0, 0, 0);
    codeobj_adc29990789673a5994d0c1b6a30b395 = MAKE_CODE_OBJECT(module_filename_obj, 652, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[323], mod_consts[323], mod_consts[378], NULL, 0, 0, 0);
    codeobj_c2e71453ef2f2247fe3981d373b47787 = MAKE_CODE_OBJECT(module_filename_obj, 597, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[111], mod_consts[111], mod_consts[378], NULL, 0, 0, 0);
    codeobj_c1887de59b76e7fae9566375743d5135 = MAKE_CODE_OBJECT(module_filename_obj, 499, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[290], mod_consts[290], mod_consts[378], NULL, 0, 0, 0);
    codeobj_a6230041da4aaac4777ef79439c0606c = MAKE_CODE_OBJECT(module_filename_obj, 442, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[280], mod_consts[280], mod_consts[378], NULL, 0, 0, 0);
    codeobj_965e6186ce5d2efb739633ef71a4e955 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[378], NULL, 0, 0, 0);
    codeobj_aa5e5628154e8e8d821b63ceafc144d3 = MAKE_CODE_OBJECT(module_filename_obj, 765, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[378], NULL, 0, 0, 0);
    codeobj_ef3ab4ffe32db64b90fa6cbdc1efa0bf = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[188], mod_consts[188], mod_consts[378], NULL, 0, 0, 0);
    codeobj_ddb53996904d442f405bda6bbc83ffca = MAKE_CODE_OBJECT(module_filename_obj, 639, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[314], mod_consts[314], mod_consts[378], NULL, 0, 0, 0);
    codeobj_e4a78be2c27f82dd3c500b27b430a910 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[176], mod_consts[176], mod_consts[378], NULL, 0, 0, 0);
    codeobj_11f35fa77e2ba11ff9e755228f32d0b3 = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[52], mod_consts[52], mod_consts[378], NULL, 0, 0, 0);
    codeobj_f6128e76ca9c0de123886cec0be4835d = MAKE_CODE_OBJECT(module_filename_obj, 644, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[317], mod_consts[317], mod_consts[378], NULL, 0, 0, 0);
    codeobj_8cb64567d22609bf43dc2c4a6725650c = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[184], mod_consts[184], mod_consts[379], NULL, 3, 0, 0);
    codeobj_45bf5f49209b4ddc6f216c49641ea425 = MAKE_CODE_OBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[184], mod_consts[184], mod_consts[380], NULL, 3, 0, 0);
    codeobj_a205cd41b801b93c02c3607a299d73b3 = MAKE_CODE_OBJECT(module_filename_obj, 640, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[184], mod_consts[184], mod_consts[381], NULL, 2, 0, 0);
    codeobj_14a1816ceaf5c91bcb7da88fe3154991 = MAKE_CODE_OBJECT(module_filename_obj, 645, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[184], mod_consts[184], mod_consts[381], NULL, 2, 0, 0);
    codeobj_ca1d63bf70bdb728357b6d9aac96bd47 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[197], mod_consts[197], mod_consts[382], NULL, 2, 0, 0);
    codeobj_6208a17f5fd93fbe3f2fb60236eab36e = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[3], mod_consts[3], mod_consts[383], mod_consts[378], 1, 0, 0);
    codeobj_3ca816185e6f45932cb2616f8f238dd0 = MAKE_CODE_OBJECT(module_filename_obj, 612, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[113], mod_consts[113], mod_consts[384], NULL, 1, 0, 0);
    codeobj_cb1e879a242e02565164af240813ce1e = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[4], mod_consts[4], mod_consts[385], mod_consts[386], 2, 0, 0);
    codeobj_d9e1c95c666d942ebee34085c9ade54a = MAKE_CODE_OBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[114], mod_consts[114], mod_consts[387], NULL, 1, 1, 0);
    codeobj_4190ff645ae851e4c68167354bf09fc7 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[388], NULL, 1, 0, 0);
    codeobj_959971bacb64b7c3ec646ee5e6a11380 = MAKE_CODE_OBJECT(module_filename_obj, 550, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[41], mod_consts[41], mod_consts[389], NULL, 3, 0, 0);
    codeobj_0138ac5916cca247c1ef9064ee33de54 = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[301], mod_consts[301], mod_consts[390], NULL, 0, 0, 0);
    codeobj_1d38b182a87909068122af0a35f2ead7 = MAKE_CODE_OBJECT(module_filename_obj, 696, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[337], mod_consts[337], mod_consts[391], NULL, 1, 0, 0);
    codeobj_9eb8bf3164c1f08eca0c4a36c9a25135 = MAKE_CODE_OBJECT(module_filename_obj, 715, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[392], NULL, 2, 0, 0);
    codeobj_08c1344e1fac9e65010a1cb6ad4d580d = MAKE_CODE_OBJECT(module_filename_obj, 1149, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[106], mod_consts[106], mod_consts[393], mod_consts[394], 1, 0, 0);
    codeobj_39fdd2693491dbd1c3001bc0de094e8c = MAKE_CODE_OBJECT(module_filename_obj, 1047, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[106], mod_consts[106], mod_consts[395], mod_consts[396], 1, 0, 0);
    codeobj_318f5f42d2c8681687b38c547a7ad99d = MAKE_CODE_OBJECT(module_filename_obj, 972, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[85], mod_consts[85], mod_consts[397], NULL, 3, 0, 0);
    codeobj_58b48860e48dcfa15005f3ed64a4cb56 = MAKE_CODE_OBJECT(module_filename_obj, 985, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[85], mod_consts[85], mod_consts[397], NULL, 3, 0, 0);
    codeobj_66a90078af0814d09e5a2a28d4e1d970 = MAKE_CODE_OBJECT(module_filename_obj, 994, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[85], mod_consts[85], mod_consts[398], NULL, 3, 0, 0);
    codeobj_ca57a73adfd4bf57c5ddb64ec078e702 = MAKE_CODE_OBJECT(module_filename_obj, 738, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[346], mod_consts[346], mod_consts[399], NULL, 2, 0, 0);
    codeobj_c64c520fdf14d6b3dfe8df2dd99a4321 = MAKE_CODE_OBJECT(module_filename_obj, 1144, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[103], mod_consts[103], mod_consts[400], mod_consts[401], 1, 0, 0);
    codeobj_53dfbb782ca9caadeb854f97537a2e97 = MAKE_CODE_OBJECT(module_filename_obj, 1042, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[103], mod_consts[103], mod_consts[397], mod_consts[402], 1, 0, 0);
    codeobj_c1f4e3861cadc72d315d82b89ee9b70d = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[43], mod_consts[43], mod_consts[403], NULL, 2, 0, 0);
    codeobj_f1bb30aa91a0661c2c70f2ebd309486a = MAKE_CODE_OBJECT(module_filename_obj, 537, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[39], mod_consts[39], mod_consts[404], NULL, 4, 0, 0);
    codeobj_fc4bce2e76eaaded557b1bc0de6a6c94 = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[92], mod_consts[92], mod_consts[405], NULL, 1, 1, 0);
    codeobj_7131b016ee7b7f233cc1a3eb59185382 = MAKE_CODE_OBJECT(module_filename_obj, 672, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[69], mod_consts[69], mod_consts[406], NULL, 2, 0, 0);
    codeobj_2c3d0d498460f76d0bd76f88a909770c = MAKE_CODE_OBJECT(module_filename_obj, 822, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[69], mod_consts[69], mod_consts[407], NULL, 2, 0, 0);
    codeobj_6bea1efb51aa54e02b32588088a4ed5a = MAKE_CODE_OBJECT(module_filename_obj, 800, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[61], mod_consts[61], mod_consts[408], mod_consts[409], 1, 0, 0);
    codeobj_7f613ec19e6b424a6a62ef8a67f8dcc8 = MAKE_CODE_OBJECT(module_filename_obj, 776, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[61], mod_consts[61], mod_consts[410], NULL, 2, 0, 0);
    codeobj_defe1859f5e60181f93cacf1d419e956 = MAKE_CODE_OBJECT(module_filename_obj, 1086, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[88], mod_consts[88], mod_consts[400], NULL, 3, 0, 0);
    codeobj_dc3e33bbc0a732b98be69bdb200eeb7d = MAKE_CODE_OBJECT(module_filename_obj, 1095, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[88], mod_consts[88], mod_consts[400], NULL, 3, 0, 0);
    codeobj_d9c15eadc0532ff30db1c43eb72e5a34 = MAKE_CODE_OBJECT(module_filename_obj, 1104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[88], mod_consts[88], mod_consts[400], NULL, 3, 0, 0);
    codeobj_022110a24371ac147042486a4d836f98 = MAKE_CODE_OBJECT(module_filename_obj, 1113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[88], mod_consts[88], mod_consts[411], NULL, 3, 0, 0);
    codeobj_c1832f3eac9011532183c7879c2e1adf = MAKE_CODE_OBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[412], NULL, 4, 0, 0);
    codeobj_f1cde627b1eb2bb0454f268773d05994 = MAKE_CODE_OBJECT(module_filename_obj, 917, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[397], NULL, 3, 0, 0);
    codeobj_d15c87ce5a23dbd50a65734f24855074 = MAKE_CODE_OBJECT(module_filename_obj, 926, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[397], NULL, 3, 0, 0);
    codeobj_7f78374c1230e27166e77e19e353f9c1 = MAKE_CODE_OBJECT(module_filename_obj, 935, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[397], NULL, 3, 0, 0);
    codeobj_e5c71a2c7366c19508512d169ea7ca1e = MAKE_CODE_OBJECT(module_filename_obj, 681, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_b781d31fb1be010d48bd77140c852686 = MAKE_CODE_OBJECT(module_filename_obj, 685, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_47d8a0854078a2ddb363bd579a217768 = MAKE_CODE_OBJECT(module_filename_obj, 689, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_67afadf855e1fea82997d38a97305067 = MAKE_CODE_OBJECT(module_filename_obj, 747, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_6e0f2b35bd4a1f2374aca7c7b9f9e0aa = MAKE_CODE_OBJECT(module_filename_obj, 751, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_bd00c370a4d7abd5c336f202ce979c2c = MAKE_CODE_OBJECT(module_filename_obj, 755, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_7d2d4fae6c0cfa77396577982c0011c9 = MAKE_CODE_OBJECT(module_filename_obj, 787, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_b204c40fc2bda59b66c035d77f99dc12 = MAKE_CODE_OBJECT(module_filename_obj, 791, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[406], NULL, 2, 0, 0);
    codeobj_e87fb7fd3f88f0d0604b22b986443577 = MAKE_CODE_OBJECT(module_filename_obj, 795, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[413], NULL, 2, 0, 0);
    codeobj_864c01209b36928df9f84af02fc3a5f6 = MAKE_CODE_OBJECT(module_filename_obj, 666, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[329], mod_consts[329], mod_consts[414], NULL, 2, 0, 0);
    codeobj_85c48f8aa6ebf2ab380e21401a1d7e94 = MAKE_CODE_OBJECT(module_filename_obj, 863, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[415], NULL, 3, 0, 0);
    codeobj_0bb345f47e83ba90bd40d336fb31e2d8 = MAKE_CODE_OBJECT(module_filename_obj, 872, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[415], NULL, 3, 0, 0);
    codeobj_c01dc4f1182ef88deccb237eaef564f4 = MAKE_CODE_OBJECT(module_filename_obj, 881, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[416], NULL, 3, 0, 0);
    codeobj_53af19dd9b5731655ede64efa597c7fe = MAKE_CODE_OBJECT(module_filename_obj, 706, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[67], mod_consts[67], mod_consts[417], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__10_generate_dispatch(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__12__generate_traversal_dispatch(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__15__clone(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__16__copy_internals(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__17___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__18___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__19_traverse_single(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__1___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__20_iterate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__21_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__22_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__23_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__24__memoized_attr__visitor_dict(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__25_visitor_iterator(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__26_chain(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__27_copy_and_process(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__28_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__29_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__30_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__31_replace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__32_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__33_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__34_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__34_traverse$$$function__1_replace(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__35_iterate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__36_traverse_using(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__37_traverse_using(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__38_traverse_using(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__39_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__3___init_subclass__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__40_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__41_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__42_cloned_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__43_cloned_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__1_deferred_copy_internals(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__2_clone(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__45_replacement_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__46_replacement_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__47_replacement_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__1_deferred_copy_internals(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__2_clone(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch$$$function__1__compiler_dispatch(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__5___class_getitem__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__6_get_children(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__7___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__8_dispatch(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__9_run_generated_dispatch(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$sql$visitors$$$function__3___init_subclass__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_6208a17f5fd93fbe3f2fb60236eab36e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6208a17f5fd93fbe3f2fb60236eab36e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6208a17f5fd93fbe3f2fb60236eab36e)) {
        Py_XDECREF(cache_frame_6208a17f5fd93fbe3f2fb60236eab36e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6208a17f5fd93fbe3f2fb60236eab36e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6208a17f5fd93fbe3f2fb60236eab36e = MAKE_FUNCTION_FRAME(codeobj_6208a17f5fd93fbe3f2fb60236eab36e, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6208a17f5fd93fbe3f2fb60236eab36e->m_type_description == NULL);
    frame_6208a17f5fd93fbe3f2fb60236eab36e = cache_frame_6208a17f5fd93fbe3f2fb60236eab36e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6208a17f5fd93fbe3f2fb60236eab36e);
    assert(Py_REFCNT(frame_6208a17f5fd93fbe3f2fb60236eab36e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = mod_consts[0];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oc";
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
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_1 = par_cls;
        frame_6208a17f5fd93fbe3f2fb60236eab36e->m_frame.f_lineno = 108;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_2 = BUILTIN_SUPER0(moduledict_sqlalchemy$sql$visitors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_6208a17f5fd93fbe3f2fb60236eab36e->m_frame.f_lineno = 109;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6208a17f5fd93fbe3f2fb60236eab36e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6208a17f5fd93fbe3f2fb60236eab36e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6208a17f5fd93fbe3f2fb60236eab36e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6208a17f5fd93fbe3f2fb60236eab36e,
        type_description_1,
        par_cls,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6208a17f5fd93fbe3f2fb60236eab36e == cache_frame_6208a17f5fd93fbe3f2fb60236eab36e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6208a17f5fd93fbe3f2fb60236eab36e);
        cache_frame_6208a17f5fd93fbe3f2fb60236eab36e = NULL;
    }

    assertFrameObject(frame_6208a17f5fd93fbe3f2fb60236eab36e);

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


static PyObject *impl_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_visit_name = NULL;
    PyObject *var_name = NULL;
    struct Nuitka_CellObject *var_getter = Nuitka_Cell_Empty();
    PyObject *var__compiler_dispatch = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_4190ff645ae851e4c68167354bf09fc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4190ff645ae851e4c68167354bf09fc7 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4190ff645ae851e4c68167354bf09fc7)) {
        Py_XDECREF(cache_frame_4190ff645ae851e4c68167354bf09fc7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4190ff645ae851e4c68167354bf09fc7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4190ff645ae851e4c68167354bf09fc7 = MAKE_FUNCTION_FRAME(codeobj_4190ff645ae851e4c68167354bf09fc7, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4190ff645ae851e4c68167354bf09fc7->m_type_description == NULL);
    frame_4190ff645ae851e4c68167354bf09fc7 = cache_frame_4190ff645ae851e4c68167354bf09fc7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4190ff645ae851e4c68167354bf09fc7);
    assert(Py_REFCNT(frame_4190ff645ae851e4c68167354bf09fc7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert(var_visit_name == NULL);
        var_visit_name = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_1 = mod_consts[4];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooco";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_3 = par_cls;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_1 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_visit_name);
        tmp_isinstance_inst_1 = var_visit_name;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooco";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[8];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_cls);
            tmp_expression_value_5 = par_cls;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_1 = "oooco";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[10];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_1 = "oooco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[11];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        frame_4190ff645ae851e4c68167354bf09fc7->m_frame.f_lineno = 123;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooco";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(var_visit_name);
        tmp_mod_expr_right_1 = var_visit_name;
        tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_2 = var_name;
        frame_4190ff645ae851e4c68167354bf09fc7->m_frame.f_lineno = 129;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_getter) == NULL);
        PyCell_SET(var_getter, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[15]);

        tmp_closure_1[0] = var_getter;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch$$$function__1__compiler_dispatch(tmp_annotations_1, tmp_closure_1);

        assert(var__compiler_dispatch == NULL);
        var__compiler_dispatch = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(var__compiler_dispatch);
        tmp_assign_source_5 = var__compiler_dispatch;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_2 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_3 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_3 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooco";
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

    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_4190ff645ae851e4c68167354bf09fc7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4190ff645ae851e4c68167354bf09fc7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4190ff645ae851e4c68167354bf09fc7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4190ff645ae851e4c68167354bf09fc7,
        type_description_1,
        par_cls,
        var_visit_name,
        var_name,
        var_getter,
        var__compiler_dispatch
    );


    // Release cached frame if used for exception.
    if (frame_4190ff645ae851e4c68167354bf09fc7 == cache_frame_4190ff645ae851e4c68167354bf09fc7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4190ff645ae851e4c68167354bf09fc7);
        cache_frame_4190ff645ae851e4c68167354bf09fc7 = NULL;
    }

    assertFrameObject(frame_4190ff645ae851e4c68167354bf09fc7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_visit_name);
    var_visit_name = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_getter);
    Py_DECREF(var_getter);
    var_getter = NULL;
    Py_XDECREF(var__compiler_dispatch);
    var__compiler_dispatch = NULL;
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

    Py_XDECREF(var_visit_name);
    var_visit_name = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_getter);
    Py_DECREF(var_getter);
    var_getter = NULL;
    Py_XDECREF(var__compiler_dispatch);
    var__compiler_dispatch = NULL;
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


static PyObject *impl_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch$$$function__1__compiler_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visitor = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_meth = NULL;
    PyObject *var_err = NULL;
    struct Nuitka_FrameObject *frame_cb1e879a242e02565164af240813ce1e;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_cb1e879a242e02565164af240813ce1e = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cb1e879a242e02565164af240813ce1e)) {
        Py_XDECREF(cache_frame_cb1e879a242e02565164af240813ce1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb1e879a242e02565164af240813ce1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb1e879a242e02565164af240813ce1e = MAKE_FUNCTION_FRAME(codeobj_cb1e879a242e02565164af240813ce1e, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb1e879a242e02565164af240813ce1e->m_type_description == NULL);
    frame_cb1e879a242e02565164af240813ce1e = cache_frame_cb1e879a242e02565164af240813ce1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb1e879a242e02565164af240813ce1e);
    assert(Py_REFCNT(frame_cb1e879a242e02565164af240813ce1e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_visitor);
        tmp_args_element_value_1 = par_visitor;
        frame_cb1e879a242e02565164af240813ce1e->m_frame.f_lineno = 139;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        assert(var_meth == NULL);
        var_meth = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cb1e879a242e02565164af240813ce1e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cb1e879a242e02565164af240813ce1e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_err = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_visitor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooc";
            goto try_except_handler_4;
        }

        tmp_expression_value_1 = par_visitor;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_err);
        tmp_tuple_element_1 = var_err;
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


            exception_lineno = 141;
            type_description_1 = "oooooc";
            goto try_except_handler_4;
        }
        goto try_return_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(var_err);
    var_err = NULL;

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

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 138;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cb1e879a242e02565164af240813ce1e->m_frame) frame_cb1e879a242e02565164af240813ce1e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooc";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_2;
        CHECK_OBJECT(var_meth);
        tmp_dircall_arg1_2 = var_meth;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_2 = par_self;
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_2 = par_kw;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_cb1e879a242e02565164af240813ce1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb1e879a242e02565164af240813ce1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb1e879a242e02565164af240813ce1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb1e879a242e02565164af240813ce1e,
        type_description_1,
        par_self,
        par_visitor,
        par_kw,
        var_meth,
        var_err,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cb1e879a242e02565164af240813ce1e == cache_frame_cb1e879a242e02565164af240813ce1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb1e879a242e02565164af240813ce1e);
        cache_frame_cb1e879a242e02565164af240813ce1e = NULL;
    }

    assertFrameObject(frame_cb1e879a242e02565164af240813ce1e);

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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_meth);
    var_meth = NULL;
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


static PyObject *impl_sqlalchemy$sql$visitors$$$function__5___class_getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_cls);
    tmp_return_value = par_cls;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__6_get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_omit_attrs = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kw = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_traversals = NULL;
    PyObject *var_traverse_internals = NULL;
    PyObject *var_dispatch = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_fc4bce2e76eaaded557b1bc0de6a6c94;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94)) {
        Py_XDECREF(cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94 = MAKE_FUNCTION_FRAME(codeobj_fc4bce2e76eaaded557b1bc0de6a6c94, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94->m_type_description == NULL);
    frame_fc4bce2e76eaaded557b1bc0de6a6c94 = cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc4bce2e76eaaded557b1bc0de6a6c94);
    assert(Py_REFCNT(frame_fc4bce2e76eaaded557b1bc0de6a6c94) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        assert(var_traversals == NULL);
        var_traversals = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[24]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "occooo";
            goto try_except_handler_2;
        }
        assert(var_traverse_internals == NULL);
        var_traverse_internals = tmp_assign_source_2;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_fc4bce2e76eaaded557b1bc0de6a6c94, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_fc4bce2e76eaaded557b1bc0de6a6c94, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
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
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 478;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fc4bce2e76eaaded557b1bc0de6a6c94->m_frame) frame_fc4bce2e76eaaded557b1bc0de6a6c94->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_traversals);
        tmp_expression_value_5 = var_traversals;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        assert(var_dispatch == NULL);
        var_dispatch = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            CHECK_OBJECT(var_dispatch);
            tmp_called_value_2 = var_dispatch;
            CHECK_OBJECT(par_self);
            tmp_args_element_value_2 = par_self;
            CHECK_OBJECT(var_traverse_internals);
            tmp_args_element_value_3 = var_traverse_internals;
            tmp_args_element_value_4 = mod_consts[30];
            frame_fc4bce2e76eaaded557b1bc0de6a6c94->m_frame.f_lineno = 487;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "occooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_1 = "occooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[3];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_kw;
            Py_INCREF(tmp_closure_1[1]);
            tmp_closure_1[2] = par_omit_attrs;
            Py_INCREF(tmp_closure_1[2]);

            tmp_args_element_value_1 = MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_fc4bce2e76eaaded557b1bc0de6a6c94->m_frame.f_lineno = 485;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "occooo";
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
        exception_tb = MAKE_TRACEBACK(frame_fc4bce2e76eaaded557b1bc0de6a6c94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc4bce2e76eaaded557b1bc0de6a6c94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc4bce2e76eaaded557b1bc0de6a6c94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc4bce2e76eaaded557b1bc0de6a6c94,
        type_description_1,
        par_self,
        par_omit_attrs,
        par_kw,
        var_traversals,
        var_traverse_internals,
        var_dispatch
    );


    // Release cached frame if used for exception.
    if (frame_fc4bce2e76eaaded557b1bc0de6a6c94 == cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94);
        cache_frame_fc4bce2e76eaaded557b1bc0de6a6c94 = NULL;
    }

    assertFrameObject(frame_fc4bce2e76eaaded557b1bc0de6a6c94);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_traversals);
    var_traversals = NULL;
    Py_XDECREF(var_traverse_internals);
    var_traverse_internals = NULL;
    Py_XDECREF(var_dispatch);
    var_dispatch = NULL;
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

    Py_XDECREF(var_traversals);
    var_traversals = NULL;
    Py_XDECREF(var_traverse_internals);
    var_traverse_internals = NULL;
    Py_XDECREF(var_dispatch);
    var_dispatch = NULL;
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
    CHECK_OBJECT(par_omit_attrs);
    Py_DECREF(par_omit_attrs);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_omit_attrs);
    Py_DECREF(par_omit_attrs);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr_locals {
    PyObject *var_attrname;
    PyObject *var_obj;
    PyObject *var_meth;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__element_3;
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

static PyObject *sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr_locals *generator_heap = (struct sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_attrname = NULL;
    generator_heap->var_obj = NULL;
    generator_heap->var_meth = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_bcccdc3edfad3faadf5b0b66b7d0d972, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Nooocc";
                generator_heap->exception_lineno = 486;
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


            generator_heap->exception_lineno = 486;
            generator_heap->type_description_1 = "Nooocc";
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooocc";
            generator_heap->exception_lineno = 486;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooocc";
            generator_heap->exception_lineno = 486;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooocc";
            generator_heap->exception_lineno = 486;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
            generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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

                    generator_heap->type_description_1 = "Nooocc";
                    generator_heap->exception_lineno = 486;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[32];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Nooocc";
            generator_heap->exception_lineno = 486;
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
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_attrname;
            generator_heap->var_attrname = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_attrname);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_obj;
            generator_heap->var_obj = tmp_assign_source_7;
            Py_INCREF(generator_heap->var_obj);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = generator_heap->var_meth;
            generator_heap->var_meth = tmp_assign_source_8;
            Py_INCREF(generator_heap->var_meth);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(generator_heap->var_attrname);
        tmp_cmp_expr_left_1 = generator_heap->var_attrname;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 490;
            generator_heap->type_description_1 = "Nooocc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 490;
            generator_heap->type_description_1 = "Nooocc";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = (generator_heap->tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(generator_heap->var_obj);
        tmp_cmp_expr_left_2 = generator_heap->var_obj;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_meth);
        tmp_dircall_arg1_1 = generator_heap->var_meth;
        CHECK_OBJECT(generator_heap->var_obj);
        tmp_tuple_element_1 = generator_heap->var_obj;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 486;
            generator_heap->type_description_1 = "Nooocc";
            goto try_except_handler_2;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_value_1 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 486;
            generator_heap->type_description_1 = "Nooocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 486;
            generator_heap->type_description_1 = "Nooocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 486;
        generator_heap->type_description_1 = "Nooocc";
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
            generator_heap->var_attrname,
            generator_heap->var_obj,
            generator_heap->var_meth,
            generator->m_closure[2],
            generator->m_closure[1]
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

    Py_XDECREF(generator_heap->var_attrname);
    generator_heap->var_attrname = NULL;
    Py_XDECREF(generator_heap->var_obj);
    generator_heap->var_obj = NULL;
    Py_XDECREF(generator_heap->var_meth);
    generator_heap->var_meth = NULL;
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
    Py_XDECREF(generator_heap->var_attrname);
    generator_heap->var_attrname = NULL;
    Py_XDECREF(generator_heap->var_obj);
    generator_heap->var_obj = NULL;
    Py_XDECREF(generator_heap->var_meth);
    generator_heap->var_meth = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr_context,
        module_sqlalchemy$sql$visitors,
        mod_consts[35],
#if PYTHON_VERSION >= 0x350
        mod_consts[36],
#endif
        codeobj_bcccdc3edfad3faadf5b0b66b7d0d972,
        closure,
        3,
        sizeof(struct sqlalchemy$sql$visitors$$$function__6_get_children$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__8_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visit_symbol = python_pars[1];
    PyObject *var_name = NULL;
    struct Nuitka_FrameObject *frame_c1f4e3861cadc72d315d82b89ee9b70d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c1f4e3861cadc72d315d82b89ee9b70d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1f4e3861cadc72d315d82b89ee9b70d)) {
        Py_XDECREF(cache_frame_c1f4e3861cadc72d315d82b89ee9b70d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1f4e3861cadc72d315d82b89ee9b70d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1f4e3861cadc72d315d82b89ee9b70d = MAKE_FUNCTION_FRAME(codeobj_c1f4e3861cadc72d315d82b89ee9b70d, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1f4e3861cadc72d315d82b89ee9b70d->m_type_description == NULL);
    frame_c1f4e3861cadc72d315d82b89ee9b70d = cache_frame_c1f4e3861cadc72d315d82b89ee9b70d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1f4e3861cadc72d315d82b89ee9b70d);
    assert(Py_REFCNT(frame_c1f4e3861cadc72d315d82b89ee9b70d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_visit_symbol);
        tmp_subscript_value_1 = par_visit_symbol;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT(var_name);
        tmp_getattr_attr_1 = var_name;
        tmp_getattr_default_1 = Py_None;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
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
        exception_tb = MAKE_TRACEBACK(frame_c1f4e3861cadc72d315d82b89ee9b70d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1f4e3861cadc72d315d82b89ee9b70d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1f4e3861cadc72d315d82b89ee9b70d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1f4e3861cadc72d315d82b89ee9b70d,
        type_description_1,
        par_self,
        par_visit_symbol,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_c1f4e3861cadc72d315d82b89ee9b70d == cache_frame_c1f4e3861cadc72d315d82b89ee9b70d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1f4e3861cadc72d315d82b89ee9b70d);
        cache_frame_c1f4e3861cadc72d315d82b89ee9b70d = NULL;
    }

    assertFrameObject(frame_c1f4e3861cadc72d315d82b89ee9b70d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
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

    Py_XDECREF(var_name);
    var_name = NULL;
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
    CHECK_OBJECT(par_visit_symbol);
    Py_DECREF(par_visit_symbol);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visit_symbol);
    Py_DECREF(par_visit_symbol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__9_run_generated_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_target = python_pars[1];
    PyObject *par_internal_dispatch = python_pars[2];
    PyObject *par_generate_dispatcher_name = python_pars[3];
    PyObject *var_dispatcher = NULL;
    struct Nuitka_FrameObject *frame_c1832f3eac9011532183c7879c2e1adf;
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
    static struct Nuitka_FrameObject *cache_frame_c1832f3eac9011532183c7879c2e1adf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1832f3eac9011532183c7879c2e1adf)) {
        Py_XDECREF(cache_frame_c1832f3eac9011532183c7879c2e1adf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1832f3eac9011532183c7879c2e1adf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1832f3eac9011532183c7879c2e1adf = MAKE_FUNCTION_FRAME(codeobj_c1832f3eac9011532183c7879c2e1adf, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1832f3eac9011532183c7879c2e1adf->m_type_description == NULL);
    frame_c1832f3eac9011532183c7879c2e1adf = cache_frame_c1832f3eac9011532183c7879c2e1adf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1832f3eac9011532183c7879c2e1adf);
    assert(Py_REFCNT(frame_c1832f3eac9011532183c7879c2e1adf) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_target);
        tmp_expression_value_3 = par_target;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_generate_dispatcher_name);
        tmp_subscript_value_1 = par_generate_dispatcher_name;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_dispatcher == NULL);
        var_dispatcher = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c1832f3eac9011532183c7879c2e1adf, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c1832f3eac9011532183c7879c2e1adf, exception_keeper_lineno_1);
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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_target);
        tmp_expression_value_5 = par_target;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 533;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_internal_dispatch);
        tmp_args_element_value_2 = par_internal_dispatch;
        CHECK_OBJECT(par_generate_dispatcher_name);
        tmp_args_element_value_3 = par_generate_dispatcher_name;
        frame_c1832f3eac9011532183c7879c2e1adf->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        assert(var_dispatcher == NULL);
        var_dispatcher = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 525;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c1832f3eac9011532183c7879c2e1adf->m_frame) frame_c1832f3eac9011532183c7879c2e1adf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
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
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_dispatcher);
        tmp_called_value_2 = var_dispatcher;
        CHECK_OBJECT(par_target);
        tmp_args_element_value_4 = par_target;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 535;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = par_self;
        frame_c1832f3eac9011532183c7879c2e1adf->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
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
        exception_tb = MAKE_TRACEBACK(frame_c1832f3eac9011532183c7879c2e1adf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1832f3eac9011532183c7879c2e1adf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1832f3eac9011532183c7879c2e1adf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1832f3eac9011532183c7879c2e1adf,
        type_description_1,
        par_self,
        par_target,
        par_internal_dispatch,
        par_generate_dispatcher_name,
        var_dispatcher
    );


    // Release cached frame if used for exception.
    if (frame_c1832f3eac9011532183c7879c2e1adf == cache_frame_c1832f3eac9011532183c7879c2e1adf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1832f3eac9011532183c7879c2e1adf);
        cache_frame_c1832f3eac9011532183c7879c2e1adf = NULL;
    }

    assertFrameObject(frame_c1832f3eac9011532183c7879c2e1adf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dispatcher);
    Py_DECREF(var_dispatcher);
    var_dispatcher = NULL;
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

    Py_XDECREF(var_dispatcher);
    var_dispatcher = NULL;
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
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_internal_dispatch);
    Py_DECREF(par_internal_dispatch);
    CHECK_OBJECT(par_generate_dispatcher_name);
    Py_DECREF(par_generate_dispatcher_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    CHECK_OBJECT(par_internal_dispatch);
    Py_DECREF(par_internal_dispatch);
    CHECK_OBJECT(par_generate_dispatcher_name);
    Py_DECREF(par_generate_dispatcher_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__10_generate_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_target_cls = python_pars[1];
    PyObject *par_internal_dispatch = python_pars[2];
    PyObject *par_generate_dispatcher_name = python_pars[3];
    PyObject *var_dispatcher = NULL;
    struct Nuitka_FrameObject *frame_f1bb30aa91a0661c2c70f2ebd309486a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f1bb30aa91a0661c2c70f2ebd309486a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f1bb30aa91a0661c2c70f2ebd309486a)) {
        Py_XDECREF(cache_frame_f1bb30aa91a0661c2c70f2ebd309486a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1bb30aa91a0661c2c70f2ebd309486a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1bb30aa91a0661c2c70f2ebd309486a = MAKE_FUNCTION_FRAME(codeobj_f1bb30aa91a0661c2c70f2ebd309486a, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1bb30aa91a0661c2c70f2ebd309486a->m_type_description == NULL);
    frame_f1bb30aa91a0661c2c70f2ebd309486a = cache_frame_f1bb30aa91a0661c2c70f2ebd309486a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1bb30aa91a0661c2c70f2ebd309486a);
    assert(Py_REFCNT(frame_f1bb30aa91a0661c2c70f2ebd309486a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_internal_dispatch);
        tmp_args_element_value_1 = par_internal_dispatch;
        CHECK_OBJECT(par_generate_dispatcher_name);
        tmp_args_element_value_2 = par_generate_dispatcher_name;
        frame_f1bb30aa91a0661c2c70f2ebd309486a->m_frame.f_lineno = 543;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dispatcher == NULL);
        var_dispatcher = tmp_assign_source_1;
    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_target_cls);
        tmp_setattr_target_1 = par_target_cls;
        CHECK_OBJECT(par_generate_dispatcher_name);
        tmp_setattr_attr_1 = par_generate_dispatcher_name;
        CHECK_OBJECT(var_dispatcher);
        tmp_setattr_value_1 = var_dispatcher;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1bb30aa91a0661c2c70f2ebd309486a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1bb30aa91a0661c2c70f2ebd309486a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1bb30aa91a0661c2c70f2ebd309486a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1bb30aa91a0661c2c70f2ebd309486a,
        type_description_1,
        par_self,
        par_target_cls,
        par_internal_dispatch,
        par_generate_dispatcher_name,
        var_dispatcher
    );


    // Release cached frame if used for exception.
    if (frame_f1bb30aa91a0661c2c70f2ebd309486a == cache_frame_f1bb30aa91a0661c2c70f2ebd309486a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1bb30aa91a0661c2c70f2ebd309486a);
        cache_frame_f1bb30aa91a0661c2c70f2ebd309486a = NULL;
    }

    assertFrameObject(frame_f1bb30aa91a0661c2c70f2ebd309486a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_dispatcher);
    tmp_return_value = var_dispatcher;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dispatcher);
    Py_DECREF(var_dispatcher);
    var_dispatcher = NULL;
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

    Py_XDECREF(var_dispatcher);
    var_dispatcher = NULL;
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
    CHECK_OBJECT(par_target_cls);
    Py_DECREF(par_target_cls);
    CHECK_OBJECT(par_internal_dispatch);
    Py_DECREF(par_internal_dispatch);
    CHECK_OBJECT(par_generate_dispatcher_name);
    Py_DECREF(par_generate_dispatcher_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_target_cls);
    Py_DECREF(par_target_cls);
    CHECK_OBJECT(par_internal_dispatch);
    Py_DECREF(par_internal_dispatch);
    CHECK_OBJECT(par_generate_dispatcher_name);
    Py_DECREF(par_generate_dispatcher_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_internal_dispatch = python_pars[1];
    PyObject *par_method_name = python_pars[2];
    PyObject *var_names = NULL;
    PyObject *var_attrname = NULL;
    PyObject *var_visit_sym = NULL;
    PyObject *var_meth = NULL;
    PyObject *var_visit_name = NULL;
    PyObject *var_code = NULL;
    PyObject *var_meth_text = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_959971bacb64b7c3ec646ee5e6a11380;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_959971bacb64b7c3ec646ee5e6a11380 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_names == NULL);
        var_names = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_959971bacb64b7c3ec646ee5e6a11380)) {
        Py_XDECREF(cache_frame_959971bacb64b7c3ec646ee5e6a11380);

#if _DEBUG_REFCOUNTS
        if (cache_frame_959971bacb64b7c3ec646ee5e6a11380 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_959971bacb64b7c3ec646ee5e6a11380 = MAKE_FUNCTION_FRAME(codeobj_959971bacb64b7c3ec646ee5e6a11380, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_959971bacb64b7c3ec646ee5e6a11380->m_type_description == NULL);
    frame_959971bacb64b7c3ec646ee5e6a11380 = cache_frame_959971bacb64b7c3ec646ee5e6a11380;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_959971bacb64b7c3ec646ee5e6a11380);
    assert(Py_REFCNT(frame_959971bacb64b7c3ec646ee5e6a11380) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_internal_dispatch);
        tmp_iter_arg_1 = par_internal_dispatch;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooooooooo";
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
                type_description_1 = "oooooooooo";
                exception_lineno = 554;
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


            exception_lineno = 554;
            type_description_1 = "oooooooooo";
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


            type_description_1 = "oooooooooo";
            exception_lineno = 554;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 554;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 554;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 554;
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
            PyObject *old = var_attrname;
            var_attrname = tmp_assign_source_7;
            Py_INCREF(var_attrname);
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
            PyObject *old = var_visit_sym;
            var_visit_sym = tmp_assign_source_8;
            Py_INCREF(var_visit_sym);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_visit_sym);
        tmp_args_element_value_1 = var_visit_sym;
        frame_959971bacb64b7c3ec646ee5e6a11380->m_frame.f_lineno = 555;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[43], tmp_args_element_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_meth;
            var_meth = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_meth);
        tmp_cmp_expr_left_1 = var_meth;
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_visit_sym);
        tmp_subscript_value_1 = var_visit_sym;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_visit_name;
            var_visit_name = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        if (var_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_names;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[45]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_attrname);
        tmp_tuple_element_1 = var_attrname;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_visit_name);
        tmp_tuple_element_1 = var_visit_name;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        frame_959971bacb64b7c3ec646ee5e6a11380->m_frame.f_lineno = 558;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 554;
        type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_add_expr_left_2 = mod_consts[46];
        tmp_str_arg_value_1 = mod_consts[47];
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            if (var_names == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 566;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_3 = var_names;
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_12;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_1 = MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_add_expr_right_2 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[48];
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_assign_source_11 == NULL));
        assert(var_code == NULL);
        var_code = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[49];
        CHECK_OBJECT(par_method_name);
        tmp_mod_expr_right_1 = par_method_name;
        tmp_add_expr_left_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_code);
        tmp_add_expr_right_4 = var_code;
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[50];
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_meth_text == NULL);
        var_meth_text = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_meth_text);
        tmp_args_element_value_5 = var_meth_text;
        tmp_args_element_value_6 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_method_name);
        tmp_args_element_value_7 = par_method_name;
        frame_959971bacb64b7c3ec646ee5e6a11380->m_frame.f_lineno = 574;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_4 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[54],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_959971bacb64b7c3ec646ee5e6a11380->m_frame.f_lineno = 572;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_959971bacb64b7c3ec646ee5e6a11380, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_959971bacb64b7c3ec646ee5e6a11380->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_959971bacb64b7c3ec646ee5e6a11380, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_959971bacb64b7c3ec646ee5e6a11380,
        type_description_1,
        par_self,
        par_internal_dispatch,
        par_method_name,
        var_names,
        var_attrname,
        var_visit_sym,
        var_meth,
        var_visit_name,
        var_code,
        var_meth_text
    );


    // Release cached frame if used for exception.
    if (frame_959971bacb64b7c3ec646ee5e6a11380 == cache_frame_959971bacb64b7c3ec646ee5e6a11380) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_959971bacb64b7c3ec646ee5e6a11380);
        cache_frame_959971bacb64b7c3ec646ee5e6a11380 = NULL;
    }

    assertFrameObject(frame_959971bacb64b7c3ec646ee5e6a11380);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_names);
    var_names = NULL;
    Py_XDECREF(var_attrname);
    var_attrname = NULL;
    Py_XDECREF(var_visit_sym);
    var_visit_sym = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_visit_name);
    var_visit_name = NULL;
    CHECK_OBJECT(var_code);
    Py_DECREF(var_code);
    var_code = NULL;
    CHECK_OBJECT(var_meth_text);
    Py_DECREF(var_meth_text);
    var_meth_text = NULL;
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

    Py_XDECREF(var_names);
    var_names = NULL;
    Py_XDECREF(var_attrname);
    var_attrname = NULL;
    Py_XDECREF(var_visit_sym);
    var_visit_sym = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
    Py_XDECREF(var_visit_name);
    var_visit_name = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_meth_text);
    var_meth_text = NULL;
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
    CHECK_OBJECT(par_internal_dispatch);
    Py_DECREF(par_internal_dispatch);
    CHECK_OBJECT(par_method_name);
    Py_DECREF(par_method_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_internal_dispatch);
    Py_DECREF(par_internal_dispatch);
    CHECK_OBJECT(par_method_name);
    Py_DECREF(par_method_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr_locals {
    PyObject *var_attrname;
    PyObject *var_visit_name;
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

static PyObject *sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr_locals *generator_heap = (struct sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_attrname = NULL;
    generator_heap->var_visit_name = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f5dc13b6e0d6f95a0f0477887419cc1b, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 564;
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


            generator_heap->exception_lineno = 564;
            generator_heap->type_description_1 = "Noo";
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


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 564;
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


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 564;
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

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 564;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[42];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 564;
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
            PyObject *old = generator_heap->var_attrname;
            generator_heap->var_attrname = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_attrname);
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
            PyObject *old = generator_heap->var_visit_name;
            generator_heap->var_visit_name = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_visit_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(generator_heap->var_attrname);
        tmp_tuple_element_1 = generator_heap->var_attrname;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_attrname);
        tmp_tuple_element_1 = generator_heap->var_attrname;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_visit_name);
        tmp_tuple_element_1 = generator_heap->var_visit_name;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        tmp_expression_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 565;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_mod_expr_left_1, sizeof(PyObject *), &tmp_mod_expr_right_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_mod_expr_left_1, sizeof(PyObject *), &tmp_mod_expr_right_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 564;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 564;
        generator_heap->type_description_1 = "Noo";
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
            generator_heap->var_attrname,
            generator_heap->var_visit_name
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

    Py_XDECREF(generator_heap->var_attrname);
    generator_heap->var_attrname = NULL;
    Py_XDECREF(generator_heap->var_visit_name);
    generator_heap->var_visit_name = NULL;
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
    Py_XDECREF(generator_heap->var_attrname);
    generator_heap->var_attrname = NULL;
    Py_XDECREF(generator_heap->var_visit_name);
    generator_heap->var_visit_name = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr_context,
        module_sqlalchemy$sql$visitors,
        mod_consts[35],
#if PYTHON_VERSION >= 0x350
        mod_consts[56],
#endif
        codeobj_f5dc13b6e0d6f95a0f0477887419cc1b,
        closure,
        1,
        sizeof(struct sqlalchemy$sql$visitors$$$function__11__generate_dispatcher$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__12__generate_traversal_dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_lookup = NULL;
    PyObject *var_sym = NULL;
    PyObject *var_key = NULL;
    PyObject *var_visit_key = NULL;
    PyObject *var_sym_name = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0138ac5916cca247c1ef9064ee33de54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0138ac5916cca247c1ef9064ee33de54 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0138ac5916cca247c1ef9064ee33de54)) {
        Py_XDECREF(cache_frame_0138ac5916cca247c1ef9064ee33de54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0138ac5916cca247c1ef9064ee33de54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0138ac5916cca247c1ef9064ee33de54 = MAKE_FUNCTION_FRAME(codeobj_0138ac5916cca247c1ef9064ee33de54, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0138ac5916cca247c1ef9064ee33de54->m_type_description == NULL);
    frame_0138ac5916cca247c1ef9064ee33de54 = cache_frame_0138ac5916cca247c1ef9064ee33de54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0138ac5916cca247c1ef9064ee33de54);
    assert(Py_REFCNT(frame_0138ac5916cca247c1ef9064ee33de54) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lookup == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_lookup = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 584;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_sym;
            var_sym = tmp_assign_source_4;
            Py_INCREF(var_sym);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_sym);
        tmp_expression_value_1 = var_sym;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_key);
        tmp_expression_value_2 = var_key;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[59]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_0138ac5916cca247c1ef9064ee33de54->m_frame.f_lineno = 586;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[60]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 586;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_key);
        tmp_expression_value_3 = var_key;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[61]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_0138ac5916cca247c1ef9064ee33de54->m_frame.f_lineno = 587;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[62]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_visit_key;
            var_visit_key = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_sym);
        tmp_expression_value_4 = var_sym;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[63]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sym_name;
            var_sym_name = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_sym_name);
        tmp_cmp_expr_left_1 = var_sym_name;
        if (var_lookup == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 589;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = var_lookup;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        CHECK_OBJECT(var_sym_name);
        tmp_tuple_element_1 = var_sym_name;
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 589;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_visit_key);
        tmp_assign_source_8 = var_visit_key;
        {
            PyObject *old = tmp_assign_unpack_1__assign_source;
            tmp_assign_unpack_1__assign_source = tmp_assign_source_8;
            Py_INCREF(tmp_assign_unpack_1__assign_source);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
        if (var_lookup == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 590;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_1 = var_lookup;
        CHECK_OBJECT(var_sym);
        tmp_ass_subscript_1 = var_sym;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_2 = tmp_assign_unpack_1__assign_source;
        if (var_lookup == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 590;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_2 = var_lookup;
        CHECK_OBJECT(var_sym_name);
        tmp_ass_subscript_2 = var_sym_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooooo";
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

    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 584;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0138ac5916cca247c1ef9064ee33de54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0138ac5916cca247c1ef9064ee33de54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0138ac5916cca247c1ef9064ee33de54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0138ac5916cca247c1ef9064ee33de54,
        type_description_1,
        var_lookup,
        var_sym,
        var_key,
        var_visit_key,
        var_sym_name
    );


    // Release cached frame if used for exception.
    if (frame_0138ac5916cca247c1ef9064ee33de54 == cache_frame_0138ac5916cca247c1ef9064ee33de54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0138ac5916cca247c1ef9064ee33de54);
        cache_frame_0138ac5916cca247c1ef9064ee33de54 = NULL;
    }

    assertFrameObject(frame_0138ac5916cca247c1ef9064ee33de54);

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
    Py_XDECREF(var_lookup);
    var_lookup = NULL;
    Py_XDECREF(var_sym);
    var_sym = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_visit_key);
    var_visit_key = NULL;
    Py_XDECREF(var_sym_name);
    var_sym_name = NULL;
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

    Py_XDECREF(var_lookup);
    var_lookup = NULL;
    Py_XDECREF(var_sym);
    var_sym = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_visit_key);
    var_visit_key = NULL;
    Py_XDECREF(var_sym_name);
    var_sym_name = NULL;
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


static PyObject *impl_sqlalchemy$sql$visitors$$$function__15__clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kw = python_pars[1];
    struct Nuitka_FrameObject *frame_3ca816185e6f45932cb2616f8f238dd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ca816185e6f45932cb2616f8f238dd0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ca816185e6f45932cb2616f8f238dd0)) {
        Py_XDECREF(cache_frame_3ca816185e6f45932cb2616f8f238dd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ca816185e6f45932cb2616f8f238dd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ca816185e6f45932cb2616f8f238dd0 = MAKE_FUNCTION_FRAME(codeobj_3ca816185e6f45932cb2616f8f238dd0, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ca816185e6f45932cb2616f8f238dd0->m_type_description == NULL);
    frame_3ca816185e6f45932cb2616f8f238dd0 = cache_frame_3ca816185e6f45932cb2616f8f238dd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ca816185e6f45932cb2616f8f238dd0);
    assert(Py_REFCNT(frame_3ca816185e6f45932cb2616f8f238dd0) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_3ca816185e6f45932cb2616f8f238dd0->m_frame.f_lineno = 614;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 614;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ca816185e6f45932cb2616f8f238dd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ca816185e6f45932cb2616f8f238dd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ca816185e6f45932cb2616f8f238dd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ca816185e6f45932cb2616f8f238dd0,
        type_description_1,
        par_self,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_3ca816185e6f45932cb2616f8f238dd0 == cache_frame_3ca816185e6f45932cb2616f8f238dd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ca816185e6f45932cb2616f8f238dd0);
        cache_frame_3ca816185e6f45932cb2616f8f238dd0 = NULL;
    }

    assertFrameObject(frame_3ca816185e6f45932cb2616f8f238dd0);

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
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__16__copy_internals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_omit_attrs = python_pars[1];
    PyObject *par_kw = python_pars[2];
    struct Nuitka_FrameObject *frame_d9e1c95c666d942ebee34085c9ade54a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9e1c95c666d942ebee34085c9ade54a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9e1c95c666d942ebee34085c9ade54a)) {
        Py_XDECREF(cache_frame_d9e1c95c666d942ebee34085c9ade54a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9e1c95c666d942ebee34085c9ade54a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9e1c95c666d942ebee34085c9ade54a = MAKE_FUNCTION_FRAME(codeobj_d9e1c95c666d942ebee34085c9ade54a, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9e1c95c666d942ebee34085c9ade54a->m_type_description == NULL);
    frame_d9e1c95c666d942ebee34085c9ade54a = cache_frame_d9e1c95c666d942ebee34085c9ade54a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9e1c95c666d942ebee34085c9ade54a);
    assert(Py_REFCNT(frame_d9e1c95c666d942ebee34085c9ade54a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d9e1c95c666d942ebee34085c9ade54a->m_frame.f_lineno = 629;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 629;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9e1c95c666d942ebee34085c9ade54a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9e1c95c666d942ebee34085c9ade54a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9e1c95c666d942ebee34085c9ade54a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9e1c95c666d942ebee34085c9ade54a,
        type_description_1,
        par_self,
        par_omit_attrs,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_d9e1c95c666d942ebee34085c9ade54a == cache_frame_d9e1c95c666d942ebee34085c9ade54a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9e1c95c666d942ebee34085c9ade54a);
        cache_frame_d9e1c95c666d942ebee34085c9ade54a = NULL;
    }

    assertFrameObject(frame_d9e1c95c666d942ebee34085c9ade54a);

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
    CHECK_OBJECT(par_omit_attrs);
    Py_DECREF(par_omit_attrs);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__19_traverse_single(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_v = NULL;
    PyObject *var_meth = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_864c01209b36928df9f84af02fc3a5f6;
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
    static struct Nuitka_FrameObject *cache_frame_864c01209b36928df9f84af02fc3a5f6 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_864c01209b36928df9f84af02fc3a5f6)) {
        Py_XDECREF(cache_frame_864c01209b36928df9f84af02fc3a5f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_864c01209b36928df9f84af02fc3a5f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_864c01209b36928df9f84af02fc3a5f6 = MAKE_FUNCTION_FRAME(codeobj_864c01209b36928df9f84af02fc3a5f6, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_864c01209b36928df9f84af02fc3a5f6->m_type_description == NULL);
    frame_864c01209b36928df9f84af02fc3a5f6 = cache_frame_864c01209b36928df9f84af02fc3a5f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_864c01209b36928df9f84af02fc3a5f6);
    assert(Py_REFCNT(frame_864c01209b36928df9f84af02fc3a5f6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 667;
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_3;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_v);
        tmp_getattr_target_1 = var_v;
        tmp_mod_expr_left_1 = mod_consts[12];
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 668;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_obj;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_getattr_attr_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_meth;
            var_meth = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_meth);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_meth);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "ooooo";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_meth);
        tmp_dircall_arg1_1 = var_meth;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 670;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = par_obj;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 667;
        type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_864c01209b36928df9f84af02fc3a5f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_864c01209b36928df9f84af02fc3a5f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_864c01209b36928df9f84af02fc3a5f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_864c01209b36928df9f84af02fc3a5f6,
        type_description_1,
        par_self,
        par_obj,
        par_kw,
        var_v,
        var_meth
    );


    // Release cached frame if used for exception.
    if (frame_864c01209b36928df9f84af02fc3a5f6 == cache_frame_864c01209b36928df9f84af02fc3a5f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_864c01209b36928df9f84af02fc3a5f6);
        cache_frame_864c01209b36928df9f84af02fc3a5f6 = NULL;
    }

    assertFrameObject(frame_864c01209b36928df9f84af02fc3a5f6);

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
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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

    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__20_iterate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_7131b016ee7b7f233cc1a3eb59185382;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7131b016ee7b7f233cc1a3eb59185382 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7131b016ee7b7f233cc1a3eb59185382)) {
        Py_XDECREF(cache_frame_7131b016ee7b7f233cc1a3eb59185382);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7131b016ee7b7f233cc1a3eb59185382 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7131b016ee7b7f233cc1a3eb59185382 = MAKE_FUNCTION_FRAME(codeobj_7131b016ee7b7f233cc1a3eb59185382, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7131b016ee7b7f233cc1a3eb59185382->m_type_description == NULL);
    frame_7131b016ee7b7f233cc1a3eb59185382 = cache_frame_7131b016ee7b7f233cc1a3eb59185382;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7131b016ee7b7f233cc1a3eb59185382);
    assert(Py_REFCNT(frame_7131b016ee7b7f233cc1a3eb59185382) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7131b016ee7b7f233cc1a3eb59185382->m_frame.f_lineno = 679;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
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
        exception_tb = MAKE_TRACEBACK(frame_7131b016ee7b7f233cc1a3eb59185382, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7131b016ee7b7f233cc1a3eb59185382->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7131b016ee7b7f233cc1a3eb59185382, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7131b016ee7b7f233cc1a3eb59185382,
        type_description_1,
        par_self,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_7131b016ee7b7f233cc1a3eb59185382 == cache_frame_7131b016ee7b7f233cc1a3eb59185382) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7131b016ee7b7f233cc1a3eb59185382);
        cache_frame_7131b016ee7b7f233cc1a3eb59185382 = NULL;
    }

    assertFrameObject(frame_7131b016ee7b7f233cc1a3eb59185382);

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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__23_traverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_47d8a0854078a2ddb363bd579a217768;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47d8a0854078a2ddb363bd579a217768 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47d8a0854078a2ddb363bd579a217768)) {
        Py_XDECREF(cache_frame_47d8a0854078a2ddb363bd579a217768);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47d8a0854078a2ddb363bd579a217768 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47d8a0854078a2ddb363bd579a217768 = MAKE_FUNCTION_FRAME(codeobj_47d8a0854078a2ddb363bd579a217768, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47d8a0854078a2ddb363bd579a217768->m_type_description == NULL);
    frame_47d8a0854078a2ddb363bd579a217768 = cache_frame_47d8a0854078a2ddb363bd579a217768;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47d8a0854078a2ddb363bd579a217768);
    assert(Py_REFCNT(frame_47d8a0854078a2ddb363bd579a217768) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 694;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 694;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[73]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 694;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_47d8a0854078a2ddb363bd579a217768->m_frame.f_lineno = 694;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 694;
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
        exception_tb = MAKE_TRACEBACK(frame_47d8a0854078a2ddb363bd579a217768, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47d8a0854078a2ddb363bd579a217768->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47d8a0854078a2ddb363bd579a217768, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47d8a0854078a2ddb363bd579a217768,
        type_description_1,
        par_self,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_47d8a0854078a2ddb363bd579a217768 == cache_frame_47d8a0854078a2ddb363bd579a217768) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47d8a0854078a2ddb363bd579a217768);
        cache_frame_47d8a0854078a2ddb363bd579a217768 = NULL;
    }

    assertFrameObject(frame_47d8a0854078a2ddb363bd579a217768);

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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__24__memoized_attr__visitor_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_visitors = NULL;
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1d38b182a87909068122af0a35f2ead7;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1d38b182a87909068122af0a35f2ead7 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_visitors == NULL);
        var_visitors = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1d38b182a87909068122af0a35f2ead7)) {
        Py_XDECREF(cache_frame_1d38b182a87909068122af0a35f2ead7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d38b182a87909068122af0a35f2ead7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d38b182a87909068122af0a35f2ead7 = MAKE_FUNCTION_FRAME(codeobj_1d38b182a87909068122af0a35f2ead7, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d38b182a87909068122af0a35f2ead7->m_type_description == NULL);
    frame_1d38b182a87909068122af0a35f2ead7 = cache_frame_1d38b182a87909068122af0a35f2ead7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d38b182a87909068122af0a35f2ead7);
    assert(Py_REFCNT(frame_1d38b182a87909068122af0a35f2ead7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dir_arg_1;
        CHECK_OBJECT(par_self);
        tmp_dir_arg_1 = par_self;
        tmp_iter_arg_1 = PyObject_Dir(tmp_dir_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 701;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_4;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_name);
        tmp_expression_value_1 = var_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_1d38b182a87909068122af0a35f2ead7->m_frame.f_lineno = 702;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[75]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 702;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT(var_name);
        tmp_getattr_attr_1 = var_name;
        tmp_ass_subvalue_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (var_visitors == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 703;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_visitors;
        CHECK_OBJECT(var_name);
        tmp_expression_value_2 = var_name;
        tmp_subscript_value_1 = mod_consts[77];
        tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 703;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 701;
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_visitors == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 704;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_visitors;
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
        exception_tb = MAKE_TRACEBACK(frame_1d38b182a87909068122af0a35f2ead7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d38b182a87909068122af0a35f2ead7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d38b182a87909068122af0a35f2ead7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d38b182a87909068122af0a35f2ead7,
        type_description_1,
        par_self,
        var_visitors,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_1d38b182a87909068122af0a35f2ead7 == cache_frame_1d38b182a87909068122af0a35f2ead7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d38b182a87909068122af0a35f2ead7);
        cache_frame_1d38b182a87909068122af0a35f2ead7 = NULL;
    }

    assertFrameObject(frame_1d38b182a87909068122af0a35f2ead7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_visitors);
    var_visitors = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
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

    Py_XDECREF(var_visitors);
    var_visitors = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
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


static PyObject *impl_sqlalchemy$sql$visitors$$$function__25_visitor_iterator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator(tmp_closure_1);

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



struct sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator_locals {
    PyObject *var_v;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};

static PyObject *sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator_locals *generator_heap = (struct sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_v = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_53af19dd9b5731655ede64efa597c7fe, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 710;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        assert(generator_heap->var_v == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->var_v = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[79]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_1 = generator_heap->var_v;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[79]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 712;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = generator_heap->var_v;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 712;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[79]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 713;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = generator_heap->var_v;
        tmp_getattr_attr_1 = mod_consts[80];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 713;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 711;
        generator_heap->type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
            generator->m_closure[0],
            generator_heap->var_v
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
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator_context,
        module_sqlalchemy$sql$visitors,
        mod_consts[67],
#if PYTHON_VERSION >= 0x350
        mod_consts[81],
#endif
        codeobj_53af19dd9b5731655ede64efa597c7fe,
        closure,
        1,
        sizeof(struct sqlalchemy$sql$visitors$$$function__25_visitor_iterator$$$genobj__1_visitor_iterator_locals)
    );
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__26_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visitor = python_pars[1];
    PyObject *var_tail = NULL;
    struct Nuitka_FrameObject *frame_9eb8bf3164c1f08eca0c4a36c9a25135;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135)) {
        Py_XDECREF(cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135 = MAKE_FUNCTION_FRAME(codeobj_9eb8bf3164c1f08eca0c4a36c9a25135, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135->m_type_description == NULL);
    frame_9eb8bf3164c1f08eca0c4a36c9a25135 = cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9eb8bf3164c1f08eca0c4a36c9a25135);
    assert(Py_REFCNT(frame_9eb8bf3164c1f08eca0c4a36c9a25135) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[67]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[82];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_tail == NULL);
        var_tail = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_visitor);
        tmp_assattr_value_1 = par_visitor;
        CHECK_OBJECT(var_tail);
        tmp_assattr_target_1 = var_tail;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9eb8bf3164c1f08eca0c4a36c9a25135, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eb8bf3164c1f08eca0c4a36c9a25135->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eb8bf3164c1f08eca0c4a36c9a25135, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eb8bf3164c1f08eca0c4a36c9a25135,
        type_description_1,
        par_self,
        par_visitor,
        var_tail
    );


    // Release cached frame if used for exception.
    if (frame_9eb8bf3164c1f08eca0c4a36c9a25135 == cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135);
        cache_frame_9eb8bf3164c1f08eca0c4a36c9a25135 = NULL;
    }

    assertFrameObject(frame_9eb8bf3164c1f08eca0c4a36c9a25135);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_tail);
    Py_DECREF(var_tail);
    var_tail = NULL;
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

    Py_XDECREF(var_tail);
    var_tail = NULL;
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
    CHECK_OBJECT(par_visitor);
    Py_DECREF(par_visitor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visitor);
    Py_DECREF(par_visitor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__27_copy_and_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_list_ = python_pars[1];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ca57a73adfd4bf57c5ddb64ec078e702;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_00e3abd37c9e9ce840b19310fabda3e9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ca57a73adfd4bf57c5ddb64ec078e702 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca57a73adfd4bf57c5ddb64ec078e702)) {
        Py_XDECREF(cache_frame_ca57a73adfd4bf57c5ddb64ec078e702);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca57a73adfd4bf57c5ddb64ec078e702 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca57a73adfd4bf57c5ddb64ec078e702 = MAKE_FUNCTION_FRAME(codeobj_ca57a73adfd4bf57c5ddb64ec078e702, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca57a73adfd4bf57c5ddb64ec078e702->m_type_description == NULL);
    frame_ca57a73adfd4bf57c5ddb64ec078e702 = cache_frame_ca57a73adfd4bf57c5ddb64ec078e702;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca57a73adfd4bf57c5ddb64ec078e702);
    assert(Py_REFCNT(frame_ca57a73adfd4bf57c5ddb64ec078e702) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_list_);
        tmp_iter_arg_1 = par_list_;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_1 = "oo";
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
    if (isFrameUnusable(cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2)) {
        Py_XDECREF(cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2 = MAKE_FUNCTION_FRAME(codeobj_00e3abd37c9e9ce840b19310fabda3e9, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2->m_type_description == NULL);
    frame_00e3abd37c9e9ce840b19310fabda3e9_2 = cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00e3abd37c9e9ce840b19310fabda3e9_2);
    assert(Py_REFCNT(frame_00e3abd37c9e9ce840b19310fabda3e9_2) == 2);

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
                exception_lineno = 745;
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
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_4;
            Py_INCREF(outline_0_var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        if (par_self == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 745;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(outline_0_var_x);
        tmp_args_element_value_1 = outline_0_var_x;
        frame_00e3abd37c9e9ce840b19310fabda3e9_2->m_frame.f_lineno = 745;
        tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[72], tmp_args_element_value_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 745;
        type_description_2 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_00e3abd37c9e9ce840b19310fabda3e9_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00e3abd37c9e9ce840b19310fabda3e9_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00e3abd37c9e9ce840b19310fabda3e9_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00e3abd37c9e9ce840b19310fabda3e9_2,
        type_description_2,
        outline_0_var_x,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_00e3abd37c9e9ce840b19310fabda3e9_2 == cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2);
        cache_frame_00e3abd37c9e9ce840b19310fabda3e9_2 = NULL;
    }

    assertFrameObject(frame_00e3abd37c9e9ce840b19310fabda3e9_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
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

    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
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
    exception_lineno = 745;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ca57a73adfd4bf57c5ddb64ec078e702, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca57a73adfd4bf57c5ddb64ec078e702->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca57a73adfd4bf57c5ddb64ec078e702, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca57a73adfd4bf57c5ddb64ec078e702,
        type_description_1,
        par_self,
        par_list_
    );


    // Release cached frame if used for exception.
    if (frame_ca57a73adfd4bf57c5ddb64ec078e702 == cache_frame_ca57a73adfd4bf57c5ddb64ec078e702) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca57a73adfd4bf57c5ddb64ec078e702);
        cache_frame_ca57a73adfd4bf57c5ddb64ec078e702 = NULL;
    }

    assertFrameObject(frame_ca57a73adfd4bf57c5ddb64ec078e702);

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
    CHECK_OBJECT(par_list_);
    Py_DECREF(par_list_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_list_);
    Py_DECREF(par_list_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__30_traverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_bd00c370a4d7abd5c336f202ce979c2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd00c370a4d7abd5c336f202ce979c2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd00c370a4d7abd5c336f202ce979c2c)) {
        Py_XDECREF(cache_frame_bd00c370a4d7abd5c336f202ce979c2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd00c370a4d7abd5c336f202ce979c2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd00c370a4d7abd5c336f202ce979c2c = MAKE_FUNCTION_FRAME(codeobj_bd00c370a4d7abd5c336f202ce979c2c, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd00c370a4d7abd5c336f202ce979c2c->m_type_description == NULL);
    frame_bd00c370a4d7abd5c336f202ce979c2c = cache_frame_bd00c370a4d7abd5c336f202ce979c2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd00c370a4d7abd5c336f202ce979c2c);
    assert(Py_REFCNT(frame_bd00c370a4d7abd5c336f202ce979c2c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[73]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 761;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bd00c370a4d7abd5c336f202ce979c2c->m_frame.f_lineno = 760;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
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
        exception_tb = MAKE_TRACEBACK(frame_bd00c370a4d7abd5c336f202ce979c2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd00c370a4d7abd5c336f202ce979c2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd00c370a4d7abd5c336f202ce979c2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd00c370a4d7abd5c336f202ce979c2c,
        type_description_1,
        par_self,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_bd00c370a4d7abd5c336f202ce979c2c == cache_frame_bd00c370a4d7abd5c336f202ce979c2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd00c370a4d7abd5c336f202ce979c2c);
        cache_frame_bd00c370a4d7abd5c336f202ce979c2c = NULL;
    }

    assertFrameObject(frame_bd00c370a4d7abd5c336f202ce979c2c);

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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__34_traverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_obj = python_pars[1];
    PyObject *var_replace = NULL;
    struct Nuitka_FrameObject *frame_e87fb7fd3f88f0d0604b22b986443577;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e87fb7fd3f88f0d0604b22b986443577 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[86]);

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__34_traverse$$$function__1_replace(tmp_annotations_1, tmp_closure_1);

        assert(var_replace == NULL);
        var_replace = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e87fb7fd3f88f0d0604b22b986443577)) {
        Py_XDECREF(cache_frame_e87fb7fd3f88f0d0604b22b986443577);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e87fb7fd3f88f0d0604b22b986443577 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e87fb7fd3f88f0d0604b22b986443577 = MAKE_FUNCTION_FRAME(codeobj_e87fb7fd3f88f0d0604b22b986443577, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e87fb7fd3f88f0d0604b22b986443577->m_type_description == NULL);
    frame_e87fb7fd3f88f0d0604b22b986443577 = cache_frame_e87fb7fd3f88f0d0604b22b986443577;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e87fb7fd3f88f0d0604b22b986443577);
    assert(Py_REFCNT(frame_e87fb7fd3f88f0d0604b22b986443577) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_replace);
        tmp_args_element_value_3 = var_replace;
        frame_e87fb7fd3f88f0d0604b22b986443577->m_frame.f_lineno = 811;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;
            type_description_1 = "coo";
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
        exception_tb = MAKE_TRACEBACK(frame_e87fb7fd3f88f0d0604b22b986443577, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e87fb7fd3f88f0d0604b22b986443577->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e87fb7fd3f88f0d0604b22b986443577, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e87fb7fd3f88f0d0604b22b986443577,
        type_description_1,
        par_self,
        par_obj,
        var_replace
    );


    // Release cached frame if used for exception.
    if (frame_e87fb7fd3f88f0d0604b22b986443577 == cache_frame_e87fb7fd3f88f0d0604b22b986443577) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e87fb7fd3f88f0d0604b22b986443577);
        cache_frame_e87fb7fd3f88f0d0604b22b986443577 = NULL;
    }

    assertFrameObject(frame_e87fb7fd3f88f0d0604b22b986443577);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_replace);
    Py_DECREF(var_replace);
    var_replace = NULL;
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

    CHECK_OBJECT(var_replace);
    Py_DECREF(var_replace);
    var_replace = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__34_traverse$$$function__1_replace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_v = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6bea1efb51aa54e02b32588088a4ed5a;
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
    static struct Nuitka_FrameObject *cache_frame_6bea1efb51aa54e02b32588088a4ed5a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6bea1efb51aa54e02b32588088a4ed5a)) {
        Py_XDECREF(cache_frame_6bea1efb51aa54e02b32588088a4ed5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6bea1efb51aa54e02b32588088a4ed5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6bea1efb51aa54e02b32588088a4ed5a = MAKE_FUNCTION_FRAME(codeobj_6bea1efb51aa54e02b32588088a4ed5a, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6bea1efb51aa54e02b32588088a4ed5a->m_type_description == NULL);
    frame_6bea1efb51aa54e02b32588088a4ed5a = cache_frame_6bea1efb51aa54e02b32588088a4ed5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6bea1efb51aa54e02b32588088a4ed5a);
    assert(Py_REFCNT(frame_6bea1efb51aa54e02b32588088a4ed5a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 804;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;
            type_description_1 = "ooooc";
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
                type_description_1 = "ooooc";
                exception_lineno = 804;
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_3;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_v);
        tmp_args_element_value_2 = var_v;
        frame_6bea1efb51aa54e02b32588088a4ed5a->m_frame.f_lineno = 805;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        if (par_element == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 805;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_element;
        frame_6bea1efb51aa54e02b32588088a4ed5a->m_frame.f_lineno = 805;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_e);
        tmp_cmp_expr_left_1 = var_e;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_e);
    tmp_return_value = var_e;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 804;
        type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_6bea1efb51aa54e02b32588088a4ed5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6bea1efb51aa54e02b32588088a4ed5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6bea1efb51aa54e02b32588088a4ed5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6bea1efb51aa54e02b32588088a4ed5a,
        type_description_1,
        par_element,
        par_kw,
        var_v,
        var_e,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6bea1efb51aa54e02b32588088a4ed5a == cache_frame_6bea1efb51aa54e02b32588088a4ed5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6bea1efb51aa54e02b32588088a4ed5a);
        cache_frame_6bea1efb51aa54e02b32588088a4ed5a = NULL;
    }

    assertFrameObject(frame_6bea1efb51aa54e02b32588088a4ed5a);

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
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
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

    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__35_iterate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_obj = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_opts = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_obj;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_opts;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate_locals {
    PyObject *var_children;
    PyObject *var_stack;
    PyObject *var_t_iterator;
    PyObject *var_t;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate_locals *generator_heap = (struct sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_children = NULL;
    generator_heap->var_stack = NULL;
    generator_heap->var_t_iterator = NULL;
    generator_heap->var_t = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2c3d0d498460f76d0bd76f88a909770c, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[68]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 846;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[68]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 849;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 849;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[68]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 850;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 850;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[93]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 850;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 850;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_children == NULL);
        generator_heap->var_children = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(generator_heap->var_children);
        tmp_operand_value_1 = generator_heap->var_children;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 852;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 855;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_children);
        tmp_list_element_1 = generator_heap->var_children;
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
        generator->m_frame->m_frame.f_lineno = 855;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 855;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_stack == NULL);
        generator_heap->var_stack = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        if (generator_heap->var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[95]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 856;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = generator_heap->var_stack;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 856;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        if (generator_heap->var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[95]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 857;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = generator_heap->var_stack;
        generator->m_frame->m_frame.f_lineno = 857;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[96]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 857;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_t_iterator;
            generator_heap->var_t_iterator = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->var_t_iterator);
        tmp_iter_arg_1 = generator_heap->var_t_iterator;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 858;
            generator_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
            generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccoooo";
                generator_heap->exception_lineno = 858;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_t;
            generator_heap->var_t = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_t);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_t);
        tmp_expression_value_3 = generator_heap->var_t;
        Py_INCREF(tmp_expression_value_3);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_3;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 859;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_2;
        if (generator_heap->var_stack == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[95]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 860;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = generator_heap->var_stack;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 860;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_t);
        tmp_expression_value_5 = generator_heap->var_t;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[92]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_2);

            generator_heap->exception_lineno = 860;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[93]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 860;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg2_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_args_element_value_2 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_2);

            generator_heap->exception_lineno = 860;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 860;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 860;
            generator_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 858;
        generator_heap->type_description_1 = "ccoooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 856;
        generator_heap->type_description_1 = "ccoooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto try_return_handler_1;

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
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_children,
            generator_heap->var_stack,
            generator_heap->var_t_iterator,
            generator_heap->var_t
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
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(generator_heap->var_children);
    generator_heap->var_children = NULL;
    goto function_return_exit;
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

    Py_XDECREF(generator_heap->var_children);
    generator_heap->var_children = NULL;
    Py_XDECREF(generator_heap->var_stack);
    generator_heap->var_stack = NULL;
    Py_XDECREF(generator_heap->var_t_iterator);
    generator_heap->var_t_iterator = NULL;
    Py_XDECREF(generator_heap->var_t);
    generator_heap->var_t = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->var_children);
    Py_DECREF(generator_heap->var_children);
    generator_heap->var_children = NULL;
    Py_XDECREF(generator_heap->var_stack);
    generator_heap->var_stack = NULL;
    Py_XDECREF(generator_heap->var_t_iterator);
    generator_heap->var_t_iterator = NULL;
    Py_XDECREF(generator_heap->var_t);
    generator_heap->var_t = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate_context,
        module_sqlalchemy$sql$visitors,
        mod_consts[69],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_2c3d0d498460f76d0bd76f88a909770c,
        closure,
        2,
        sizeof(struct sqlalchemy$sql$visitors$$$function__35_iterate$$$genobj__1_iterate_locals)
    );
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__38_traverse_using(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iterator = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_visitors = python_pars[2];
    PyObject *var_target = NULL;
    PyObject *var_meth = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c01dc4f1182ef88deccb237eaef564f4;
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
    static struct Nuitka_FrameObject *cache_frame_c01dc4f1182ef88deccb237eaef564f4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c01dc4f1182ef88deccb237eaef564f4)) {
        Py_XDECREF(cache_frame_c01dc4f1182ef88deccb237eaef564f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c01dc4f1182ef88deccb237eaef564f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c01dc4f1182ef88deccb237eaef564f4 = MAKE_FUNCTION_FRAME(codeobj_c01dc4f1182ef88deccb237eaef564f4, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c01dc4f1182ef88deccb237eaef564f4->m_type_description == NULL);
    frame_c01dc4f1182ef88deccb237eaef564f4 = cache_frame_c01dc4f1182ef88deccb237eaef564f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c01dc4f1182ef88deccb237eaef564f4);
    assert(Py_REFCNT(frame_c01dc4f1182ef88deccb237eaef564f4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_iterator);
        tmp_iter_arg_1 = par_iterator;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 910;
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
            PyObject *old = var_target;
            var_target = tmp_assign_source_3;
            Py_INCREF(var_target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        if (par_visitors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 911;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_visitors;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_target);
        tmp_expression_value_2 = var_target;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 911;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = Py_None;
        frame_c01dc4f1182ef88deccb237eaef564f4->m_frame.f_lineno = 911;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_meth;
            var_meth = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_meth);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_meth);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_meth);
        tmp_called_value_2 = var_meth;
        CHECK_OBJECT(var_target);
        tmp_args_element_value_3 = var_target;
        frame_c01dc4f1182ef88deccb237eaef564f4->m_frame.f_lineno = 913;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 910;
        type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c01dc4f1182ef88deccb237eaef564f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c01dc4f1182ef88deccb237eaef564f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c01dc4f1182ef88deccb237eaef564f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c01dc4f1182ef88deccb237eaef564f4,
        type_description_1,
        par_iterator,
        par_obj,
        par_visitors,
        var_target,
        var_meth
    );


    // Release cached frame if used for exception.
    if (frame_c01dc4f1182ef88deccb237eaef564f4 == cache_frame_c01dc4f1182ef88deccb237eaef564f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c01dc4f1182ef88deccb237eaef564f4);
        cache_frame_c01dc4f1182ef88deccb237eaef564f4 = NULL;
    }

    assertFrameObject(frame_c01dc4f1182ef88deccb237eaef564f4);

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
    CHECK_OBJECT(par_obj);
    tmp_return_value = par_obj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_target);
    var_target = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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

    Py_XDECREF(var_target);
    var_target = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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
    CHECK_OBJECT(par_iterator);
    Py_DECREF(par_iterator);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_visitors);
    Py_DECREF(par_visitors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iterator);
    Py_DECREF(par_iterator);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_visitors);
    Py_DECREF(par_visitors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__41_traverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_opts = python_pars[1];
    PyObject *par_visitors = python_pars[2];
    struct Nuitka_FrameObject *frame_7f78374c1230e27166e77e19e353f9c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f78374c1230e27166e77e19e353f9c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f78374c1230e27166e77e19e353f9c1)) {
        Py_XDECREF(cache_frame_7f78374c1230e27166e77e19e353f9c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f78374c1230e27166e77e19e353f9c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f78374c1230e27166e77e19e353f9c1 = MAKE_FUNCTION_FRAME(codeobj_7f78374c1230e27166e77e19e353f9c1, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f78374c1230e27166e77e19e353f9c1->m_type_description == NULL);
    frame_7f78374c1230e27166e77e19e353f9c1 = cache_frame_7f78374c1230e27166e77e19e353f9c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f78374c1230e27166e77e19e353f9c1);
    assert(Py_REFCNT(frame_7f78374c1230e27166e77e19e353f9c1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        CHECK_OBJECT(par_opts);
        tmp_args_element_value_3 = par_opts;
        frame_7f78374c1230e27166e77e19e353f9c1->m_frame.f_lineno = 969;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_4 = par_obj;
        CHECK_OBJECT(par_visitors);
        tmp_args_element_value_5 = par_visitors;
        frame_7f78374c1230e27166e77e19e353f9c1->m_frame.f_lineno = 969;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;
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
        exception_tb = MAKE_TRACEBACK(frame_7f78374c1230e27166e77e19e353f9c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f78374c1230e27166e77e19e353f9c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f78374c1230e27166e77e19e353f9c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f78374c1230e27166e77e19e353f9c1,
        type_description_1,
        par_obj,
        par_opts,
        par_visitors
    );


    // Release cached frame if used for exception.
    if (frame_7f78374c1230e27166e77e19e353f9c1 == cache_frame_7f78374c1230e27166e77e19e353f9c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f78374c1230e27166e77e19e353f9c1);
        cache_frame_7f78374c1230e27166e77e19e353f9c1 = NULL;
    }

    assertFrameObject(frame_7f78374c1230e27166e77e19e353f9c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);
    CHECK_OBJECT(par_visitors);
    Py_DECREF(par_visitors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);
    CHECK_OBJECT(par_visitors);
    Py_DECREF(par_visitors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_CellObject *par_opts = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_visitors = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *var_cloned = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_stop_on = Nuitka_Cell_Empty();
    PyObject *var_deferred_copy_internals = NULL;
    struct Nuitka_CellObject *var_clone = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_66a90078af0814d09e5a2a28d4e1d970;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_66a90078af0814d09e5a2a28d4e1d970 = NULL;
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
    // Tried code:
    if (isFrameUnusable(cache_frame_66a90078af0814d09e5a2a28d4e1d970)) {
        Py_XDECREF(cache_frame_66a90078af0814d09e5a2a28d4e1d970);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66a90078af0814d09e5a2a28d4e1d970 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66a90078af0814d09e5a2a28d4e1d970 = MAKE_FUNCTION_FRAME(codeobj_66a90078af0814d09e5a2a28d4e1d970, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_66a90078af0814d09e5a2a28d4e1d970->m_type_description == NULL);
    frame_66a90078af0814d09e5a2a28d4e1d970 = cache_frame_66a90078af0814d09e5a2a28d4e1d970;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_66a90078af0814d09e5a2a28d4e1d970);
    assert(Py_REFCNT(frame_66a90078af0814d09e5a2a28d4e1d970) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_opts));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_opts);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;
            type_description_1 = "occccoc";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[101];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        frame_66a90078af0814d09e5a2a28d4e1d970->m_frame.f_lineno = 1040;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_set_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;
            type_description_1 = "occccoc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;
            type_description_1 = "occccoc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_stop_on) == NULL);
        PyCell_SET(var_stop_on, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_annotations_1 = DICT_COPY(mod_consts[102]);

        tmp_closure_1[0] = par_opts;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_visitors;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_3 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__1_deferred_copy_internals(tmp_annotations_1, tmp_closure_1);

        assert(var_deferred_copy_internals == NULL);
        var_deferred_copy_internals = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[4];
        tmp_annotations_2 = DICT_COPY(mod_consts[105]);

        tmp_closure_2[0] = var_clone;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_cloned;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_stop_on;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = par_visitors;
        Py_INCREF(tmp_closure_2[3]);

        tmp_assign_source_4 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__2_clone(tmp_annotations_2, tmp_closure_2);

        assert(Nuitka_Cell_GET(var_clone) == NULL);
        PyCell_SET(var_clone, tmp_assign_source_4);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_cmp_expr_left_1 = par_obj;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_clone));
        tmp_dircall_arg1_1 = Nuitka_Cell_GET(var_clone);
        CHECK_OBJECT(par_obj);
        tmp_tuple_element_1 = par_obj;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[103];
        CHECK_OBJECT(var_deferred_copy_internals);
        tmp_dict_value_1 = var_deferred_copy_internals;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(Nuitka_Cell_GET(par_opts));
        tmp_dircall_arg4_1 = Nuitka_Cell_GET(par_opts);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_5 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1079;
            type_description_1 = "occccoc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_obj;
            assert(old != NULL);
            par_obj = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66a90078af0814d09e5a2a28d4e1d970, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66a90078af0814d09e5a2a28d4e1d970->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66a90078af0814d09e5a2a28d4e1d970, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66a90078af0814d09e5a2a28d4e1d970,
        type_description_1,
        par_obj,
        par_opts,
        par_visitors,
        var_cloned,
        var_stop_on,
        var_deferred_copy_internals,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_66a90078af0814d09e5a2a28d4e1d970 == cache_frame_66a90078af0814d09e5a2a28d4e1d970) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_66a90078af0814d09e5a2a28d4e1d970);
        cache_frame_66a90078af0814d09e5a2a28d4e1d970 = NULL;
    }

    assertFrameObject(frame_66a90078af0814d09e5a2a28d4e1d970);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(var_clone);
            PyCell_SET(var_clone, tmp_assign_source_6);
            Py_INCREF(tmp_assign_source_6);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(par_obj);
    tmp_return_value = par_obj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(var_cloned);
    Py_DECREF(var_cloned);
    var_cloned = NULL;
    CHECK_OBJECT(var_stop_on);
    Py_DECREF(var_stop_on);
    var_stop_on = NULL;
    CHECK_OBJECT(var_deferred_copy_internals);
    Py_DECREF(var_deferred_copy_internals);
    var_deferred_copy_internals = NULL;
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

    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(var_cloned);
    Py_DECREF(var_cloned);
    var_cloned = NULL;
    CHECK_OBJECT(var_stop_on);
    Py_DECREF(var_stop_on);
    var_stop_on = NULL;
    Py_XDECREF(var_deferred_copy_internals);
    var_deferred_copy_internals = NULL;
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
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);
    CHECK_OBJECT(par_visitors);
    Py_DECREF(par_visitors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);
    CHECK_OBJECT(par_visitors);
    Py_DECREF(par_visitors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__1_deferred_copy_internals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_53dfbb782ca9caadeb854f97537a2e97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53dfbb782ca9caadeb854f97537a2e97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53dfbb782ca9caadeb854f97537a2e97)) {
        Py_XDECREF(cache_frame_53dfbb782ca9caadeb854f97537a2e97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53dfbb782ca9caadeb854f97537a2e97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53dfbb782ca9caadeb854f97537a2e97 = MAKE_FUNCTION_FRAME(codeobj_53dfbb782ca9caadeb854f97537a2e97, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53dfbb782ca9caadeb854f97537a2e97->m_type_description == NULL);
    frame_53dfbb782ca9caadeb854f97537a2e97 = cache_frame_53dfbb782ca9caadeb854f97537a2e97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53dfbb782ca9caadeb854f97537a2e97);
    assert(Py_REFCNT(frame_53dfbb782ca9caadeb854f97537a2e97) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1045;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1045;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_53dfbb782ca9caadeb854f97537a2e97->m_frame.f_lineno = 1045;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;
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
        exception_tb = MAKE_TRACEBACK(frame_53dfbb782ca9caadeb854f97537a2e97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53dfbb782ca9caadeb854f97537a2e97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53dfbb782ca9caadeb854f97537a2e97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53dfbb782ca9caadeb854f97537a2e97,
        type_description_1,
        par_obj,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_53dfbb782ca9caadeb854f97537a2e97 == cache_frame_53dfbb782ca9caadeb854f97537a2e97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53dfbb782ca9caadeb854f97537a2e97);
        cache_frame_53dfbb782ca9caadeb854f97537a2e97 = NULL;
    }

    assertFrameObject(frame_53dfbb782ca9caadeb854f97537a2e97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__2_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_elem = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_newelem = NULL;
    PyObject *var_meth = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_39fdd2693491dbd1c3001bc0de094e8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_39fdd2693491dbd1c3001bc0de094e8c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39fdd2693491dbd1c3001bc0de094e8c)) {
        Py_XDECREF(cache_frame_39fdd2693491dbd1c3001bc0de094e8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39fdd2693491dbd1c3001bc0de094e8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39fdd2693491dbd1c3001bc0de094e8c = MAKE_FUNCTION_FRAME(codeobj_39fdd2693491dbd1c3001bc0de094e8c, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39fdd2693491dbd1c3001bc0de094e8c->m_type_description == NULL);
    frame_39fdd2693491dbd1c3001bc0de094e8c = cache_frame_39fdd2693491dbd1c3001bc0de094e8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_39fdd2693491dbd1c3001bc0de094e8c);
    assert(Py_REFCNT(frame_39fdd2693491dbd1c3001bc0de094e8c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_elem);
        tmp_cmp_expr_left_1 = par_elem;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1048;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;
            type_description_1 = "oooocccc";
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
    CHECK_OBJECT(par_elem);
    tmp_return_value = par_elem;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(par_elem);
        tmp_id_arg_1 = par_elem;
        tmp_cmp_expr_left_2 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_cmp_expr_left_2 == NULL));
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1051;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;
            type_description_1 = "oooocccc";
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
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[61];
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_1 = par_kw;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_2 = par_kw;
        tmp_key_value_2 = mod_consts[61];
        tmp_called_value_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 1055;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_elem);
        tmp_args_element_value_3 = par_elem;
        frame_39fdd2693491dbd1c3001bc0de094e8c->m_frame.f_lineno = 1055;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 1055;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        frame_39fdd2693491dbd1c3001bc0de094e8c->m_frame.f_lineno = 1054;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_newelem == NULL);
        var_newelem = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_newelem);
        tmp_cmp_expr_left_3 = var_newelem;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_id_arg_2;
        CHECK_OBJECT(var_newelem);
        tmp_ass_subvalue_1 = var_newelem;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1058;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_elem);
        tmp_id_arg_2 = par_elem;
        tmp_ass_subscript_1 = PyLong_FromVoidPtr(tmp_id_arg_2);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1058;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_newelem);
    tmp_return_value = var_newelem;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1066;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_elem;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[113]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = mod_consts[106];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1066;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
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


            exception_lineno = 1066;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_id_arg_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_2 = tmp_assign_unpack_1__assign_source;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1066;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_2 = Nuitka_Cell_GET(self->m_closure[1]);
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1066;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_id_arg_3 = par_elem;
        tmp_ass_subscript_2 = PyLong_FromVoidPtr(tmp_id_arg_3);
        assert(!(tmp_ass_subscript_2 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;
            type_description_1 = "oooocccc";
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_3 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_newelem;
            var_newelem = tmp_assign_source_3;
            Py_INCREF(var_newelem);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_newelem);
        tmp_expression_value_3 = var_newelem;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[114]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1067;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[106];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1067;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dircall_arg2_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_2 = par_kw;
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_call_result_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1067;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1072;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_elem;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[115]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1073;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[97]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1073;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newelem);
        tmp_expression_value_6 = var_newelem;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 1073;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = Py_None;
        frame_39fdd2693491dbd1c3001bc0de094e8c->m_frame.f_lineno = 1073;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1073;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_meth == NULL);
        var_meth = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_meth);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_meth);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1074;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_meth);
        tmp_called_value_4 = var_meth;
        CHECK_OBJECT(var_newelem);
        tmp_args_element_value_6 = var_newelem;
        frame_39fdd2693491dbd1c3001bc0de094e8c->m_frame.f_lineno = 1075;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    branch_no_5:;
    branch_no_2:;
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_id_arg_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1076;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[1]);
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1076;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_id_arg_4 = par_elem;
        tmp_subscript_value_2 = PyLong_FromVoidPtr(tmp_id_arg_4);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;
            type_description_1 = "oooocccc";
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
        exception_tb = MAKE_TRACEBACK(frame_39fdd2693491dbd1c3001bc0de094e8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39fdd2693491dbd1c3001bc0de094e8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39fdd2693491dbd1c3001bc0de094e8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39fdd2693491dbd1c3001bc0de094e8c,
        type_description_1,
        par_elem,
        par_kw,
        var_newelem,
        var_meth,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_39fdd2693491dbd1c3001bc0de094e8c == cache_frame_39fdd2693491dbd1c3001bc0de094e8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39fdd2693491dbd1c3001bc0de094e8c);
        cache_frame_39fdd2693491dbd1c3001bc0de094e8c = NULL;
    }

    assertFrameObject(frame_39fdd2693491dbd1c3001bc0de094e8c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_newelem);
    var_newelem = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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

    Py_XDECREF(var_newelem);
    var_newelem = NULL;
    Py_XDECREF(var_meth);
    var_meth = NULL;
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


static PyObject *impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_CellObject *par_opts = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_replace = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *var_cloned = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_stop_on = Nuitka_Cell_Empty();
    PyObject *var_deferred_copy_internals = NULL;
    struct Nuitka_CellObject *var_clone = Nuitka_Cell_Empty();
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_setcontraction_1__$0 = NULL;
    PyObject *tmp_setcontraction_1__contraction = NULL;
    PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_022110a24371ac147042486a4d836f98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_6e85fac6793d84977317b242d043188e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6e85fac6793d84977317b242d043188e_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_022110a24371ac147042486a4d836f98 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_cloned) == NULL);
        PyCell_SET(var_cloned, tmp_assign_source_1);

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_022110a24371ac147042486a4d836f98)) {
        Py_XDECREF(cache_frame_022110a24371ac147042486a4d836f98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_022110a24371ac147042486a4d836f98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_022110a24371ac147042486a4d836f98 = MAKE_FUNCTION_FRAME(codeobj_022110a24371ac147042486a4d836f98, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_022110a24371ac147042486a4d836f98->m_type_description == NULL);
    frame_022110a24371ac147042486a4d836f98 = cache_frame_022110a24371ac147042486a4d836f98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_022110a24371ac147042486a4d836f98);
    assert(Py_REFCNT(frame_022110a24371ac147042486a4d836f98) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_call_arg_element_1;
            PyObject *tmp_call_arg_element_2;
            CHECK_OBJECT(Nuitka_Cell_GET(par_opts));
            tmp_expression_value_1 = Nuitka_Cell_GET(par_opts);
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[97]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1142;
                type_description_1 = "occccoc";
                goto try_except_handler_2;
            }
            tmp_call_arg_element_1 = mod_consts[101];
            tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
            frame_022110a24371ac147042486a4d836f98->m_frame.f_lineno = 1142;
            {
                PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_call_arg_element_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1142;
                type_description_1 = "occccoc";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1142;
                type_description_1 = "occccoc";
                goto try_except_handler_2;
            }
            assert(tmp_setcontraction_1__$0 == NULL);
            tmp_setcontraction_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PySet_New(NULL);
            assert(tmp_setcontraction_1__contraction == NULL);
            tmp_setcontraction_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_6e85fac6793d84977317b242d043188e_2)) {
            Py_XDECREF(cache_frame_6e85fac6793d84977317b242d043188e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6e85fac6793d84977317b242d043188e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6e85fac6793d84977317b242d043188e_2 = MAKE_FUNCTION_FRAME(codeobj_6e85fac6793d84977317b242d043188e, module_sqlalchemy$sql$visitors, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_6e85fac6793d84977317b242d043188e_2->m_type_description == NULL);
        frame_6e85fac6793d84977317b242d043188e_2 = cache_frame_6e85fac6793d84977317b242d043188e_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6e85fac6793d84977317b242d043188e_2);
        assert(Py_REFCNT(frame_6e85fac6793d84977317b242d043188e_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_setcontraction_1__$0);
            tmp_next_source_1 = tmp_setcontraction_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 1142;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_setcontraction_1__iter_value_0;
                tmp_setcontraction_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
            tmp_assign_source_6 = tmp_setcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_6;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_add_set_1;
            PyObject *tmp_add_value_1;
            PyObject *tmp_id_arg_1;
            CHECK_OBJECT(tmp_setcontraction_1__contraction);
            tmp_add_set_1 = tmp_setcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_id_arg_1 = outline_0_var_x;
            tmp_add_value_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
            assert(!(tmp_add_value_1 == NULL));
            assert(PySet_Check(tmp_add_set_1));
            tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
            Py_DECREF(tmp_add_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1142;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        tmp_assign_source_2 = tmp_setcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
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
            exception_tb = MAKE_TRACEBACK(frame_6e85fac6793d84977317b242d043188e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6e85fac6793d84977317b242d043188e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6e85fac6793d84977317b242d043188e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6e85fac6793d84977317b242d043188e_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_6e85fac6793d84977317b242d043188e_2 == cache_frame_6e85fac6793d84977317b242d043188e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_6e85fac6793d84977317b242d043188e_2);
            cache_frame_6e85fac6793d84977317b242d043188e_2 = NULL;
        }

        assertFrameObject(frame_6e85fac6793d84977317b242d043188e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "occccoc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 1142;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(Nuitka_Cell_GET(var_stop_on) == NULL);
        PyCell_SET(var_stop_on, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_annotations_1 = DICT_COPY(mod_consts[102]);

        tmp_closure_1[0] = par_opts;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_replace;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_7 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__1_deferred_copy_internals(tmp_annotations_1, tmp_closure_1);

        assert(var_deferred_copy_internals == NULL);
        var_deferred_copy_internals = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_annotations_2;
        struct Nuitka_CellObject *tmp_closure_2[4];
        tmp_annotations_2 = DICT_COPY(mod_consts[105]);

        tmp_closure_2[0] = var_clone;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_cloned;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = par_replace;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = var_stop_on;
        Py_INCREF(tmp_closure_2[3]);

        tmp_assign_source_8 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__2_clone(tmp_annotations_2, tmp_closure_2);

        assert(Nuitka_Cell_GET(var_clone) == NULL);
        PyCell_SET(var_clone, tmp_assign_source_8);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_cmp_expr_left_1 = par_obj;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_clone));
        tmp_dircall_arg1_1 = Nuitka_Cell_GET(var_clone);
        CHECK_OBJECT(par_obj);
        tmp_tuple_element_1 = par_obj;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[103];
        CHECK_OBJECT(var_deferred_copy_internals);
        tmp_dict_value_1 = var_deferred_copy_internals;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(Nuitka_Cell_GET(par_opts));
        tmp_dircall_arg4_1 = Nuitka_Cell_GET(par_opts);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_9 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1177;
            type_description_1 = "occccoc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_obj;
            assert(old != NULL);
            par_obj = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_022110a24371ac147042486a4d836f98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_022110a24371ac147042486a4d836f98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_022110a24371ac147042486a4d836f98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_022110a24371ac147042486a4d836f98,
        type_description_1,
        par_obj,
        par_opts,
        par_replace,
        var_cloned,
        var_stop_on,
        var_deferred_copy_internals,
        var_clone
    );


    // Release cached frame if used for exception.
    if (frame_022110a24371ac147042486a4d836f98 == cache_frame_022110a24371ac147042486a4d836f98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_022110a24371ac147042486a4d836f98);
        cache_frame_022110a24371ac147042486a4d836f98 = NULL;
    }

    assertFrameObject(frame_022110a24371ac147042486a4d836f98);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(var_clone);
            PyCell_SET(var_clone, tmp_assign_source_10);
            Py_INCREF(tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(par_obj);
    tmp_return_value = par_obj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(var_cloned);
    Py_DECREF(var_cloned);
    var_cloned = NULL;
    CHECK_OBJECT(var_stop_on);
    Py_DECREF(var_stop_on);
    var_stop_on = NULL;
    CHECK_OBJECT(var_deferred_copy_internals);
    Py_DECREF(var_deferred_copy_internals);
    var_deferred_copy_internals = NULL;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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

    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;
    CHECK_OBJECT(var_cloned);
    Py_DECREF(var_cloned);
    var_cloned = NULL;
    CHECK_OBJECT(var_stop_on);
    Py_DECREF(var_stop_on);
    var_stop_on = NULL;
    Py_XDECREF(var_deferred_copy_internals);
    var_deferred_copy_internals = NULL;
    CHECK_OBJECT(var_clone);
    Py_DECREF(var_clone);
    var_clone = NULL;
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
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);
    CHECK_OBJECT(par_replace);
    Py_DECREF(par_replace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_opts);
    Py_DECREF(par_opts);
    CHECK_OBJECT(par_replace);
    Py_DECREF(par_replace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__1_deferred_copy_internals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_c64c520fdf14d6b3dfe8df2dd99a4321;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321)) {
        Py_XDECREF(cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321 = MAKE_FUNCTION_FRAME(codeobj_c64c520fdf14d6b3dfe8df2dd99a4321, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321->m_type_description == NULL);
    frame_c64c520fdf14d6b3dfe8df2dd99a4321 = cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c64c520fdf14d6b3dfe8df2dd99a4321);
    assert(Py_REFCNT(frame_c64c520fdf14d6b3dfe8df2dd99a4321) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1147;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1147;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_c64c520fdf14d6b3dfe8df2dd99a4321->m_frame.f_lineno = 1147;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;
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
        exception_tb = MAKE_TRACEBACK(frame_c64c520fdf14d6b3dfe8df2dd99a4321, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c64c520fdf14d6b3dfe8df2dd99a4321->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c64c520fdf14d6b3dfe8df2dd99a4321, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c64c520fdf14d6b3dfe8df2dd99a4321,
        type_description_1,
        par_obj,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_c64c520fdf14d6b3dfe8df2dd99a4321 == cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321);
        cache_frame_c64c520fdf14d6b3dfe8df2dd99a4321 = NULL;
    }

    assertFrameObject(frame_c64c520fdf14d6b3dfe8df2dd99a4321);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__2_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_elem = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_newelem = NULL;
    PyObject *var_id_elem = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_08c1344e1fac9e65010a1cb6ad4d580d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_08c1344e1fac9e65010a1cb6ad4d580d = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_08c1344e1fac9e65010a1cb6ad4d580d)) {
        Py_XDECREF(cache_frame_08c1344e1fac9e65010a1cb6ad4d580d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08c1344e1fac9e65010a1cb6ad4d580d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08c1344e1fac9e65010a1cb6ad4d580d = MAKE_FUNCTION_FRAME(codeobj_08c1344e1fac9e65010a1cb6ad4d580d, module_sqlalchemy$sql$visitors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08c1344e1fac9e65010a1cb6ad4d580d->m_type_description == NULL);
    frame_08c1344e1fac9e65010a1cb6ad4d580d = cache_frame_08c1344e1fac9e65010a1cb6ad4d580d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08c1344e1fac9e65010a1cb6ad4d580d);
    assert(Py_REFCNT(frame_08c1344e1fac9e65010a1cb6ad4d580d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_id_arg_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_elem);
        tmp_id_arg_1 = par_elem;
        tmp_cmp_expr_left_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1151;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_cmp_expr_left_2 = mod_consts[119];
        CHECK_OBJECT(par_elem);
        tmp_expression_value_1 = par_elem;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[120]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    if (par_elem == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 1154;
        type_description_1 = "oooocccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_elem;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1156;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1156;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_elem;
        frame_08c1344e1fac9e65010a1cb6ad4d580d->m_frame.f_lineno = 1156;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        assert(var_newelem == NULL);
        var_newelem = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_newelem);
        tmp_cmp_expr_left_3 = var_newelem;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_id_arg_2;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1158;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(var_newelem);
        tmp_id_arg_2 = var_newelem;
        tmp_args_element_value_2 = PyLong_FromVoidPtr(tmp_id_arg_2);
        assert(!(tmp_args_element_value_2 == NULL));
        frame_08c1344e1fac9e65010a1cb6ad4d580d->m_frame.f_lineno = 1158;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[121], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(var_newelem);
    tmp_return_value = var_newelem;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_id_arg_3;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1164;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_id_arg_3 = par_elem;
        tmp_assign_source_2 = PyLong_FromVoidPtr(tmp_id_arg_3);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_id_elem == NULL);
        var_id_elem = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_id_elem);
        tmp_cmp_expr_left_4 = var_id_elem;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1165;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;
            type_description_1 = "oooocccc";
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
        bool tmp_condition_result_4;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[61];
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_1 = par_kw;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_2 = par_kw;
        tmp_key_value_2 = mod_consts[61];
        tmp_called_value_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1167;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        if (par_elem == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1167;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_elem;
        frame_08c1344e1fac9e65010a1cb6ad4d580d->m_frame.f_lineno = 1167;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1167;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_newelem;
            assert(old != NULL);
            var_newelem = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_newelem);
        tmp_cmp_expr_left_5 = var_newelem;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_newelem);
        tmp_ass_subvalue_1 = var_newelem;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1169;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_id_elem);
        tmp_ass_subscript_1 = var_id_elem;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1169;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_newelem);
    tmp_return_value = var_newelem;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        if (par_elem == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1172;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_elem;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[113]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg2_1 = par_kw;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_4 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_2 = tmp_assign_unpack_1__assign_source;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1172;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_2 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_id_elem);
        tmp_ass_subscript_2 = var_id_elem;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooocccc";
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_newelem;
            assert(old != NULL);
            var_newelem = tmp_assign_source_5;
            Py_INCREF(var_newelem);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_newelem);
        tmp_expression_value_3 = var_newelem;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[114]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1173;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[106];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1173;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dircall_arg2_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_call_result_2 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1173;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 1174;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_id_elem);
        tmp_subscript_value_1 = var_id_elem;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1174;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_08c1344e1fac9e65010a1cb6ad4d580d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08c1344e1fac9e65010a1cb6ad4d580d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08c1344e1fac9e65010a1cb6ad4d580d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08c1344e1fac9e65010a1cb6ad4d580d,
        type_description_1,
        par_elem,
        par_kw,
        var_newelem,
        var_id_elem,
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_08c1344e1fac9e65010a1cb6ad4d580d == cache_frame_08c1344e1fac9e65010a1cb6ad4d580d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08c1344e1fac9e65010a1cb6ad4d580d);
        cache_frame_08c1344e1fac9e65010a1cb6ad4d580d = NULL;
    }

    assertFrameObject(frame_08c1344e1fac9e65010a1cb6ad4d580d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_newelem);
    var_newelem = NULL;
    Py_XDECREF(var_id_elem);
    var_id_elem = NULL;
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

    Py_XDECREF(var_newelem);
    var_newelem = NULL;
    Py_XDECREF(var_id_elem);
    var_id_elem = NULL;
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



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__10_generate_dispatch(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__10_generate_dispatch,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[297],
#endif
        codeobj_f1bb30aa91a0661c2c70f2ebd309486a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[299],
#endif
        codeobj_959971bacb64b7c3ec646ee5e6a11380,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__12__generate_traversal_dispatch(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__12__generate_traversal_dispatch,
        mod_consts[301],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0138ac5916cca247c1ef9064ee33de54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__15__clone(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__15__clone,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[305],
#endif
        codeobj_3ca816185e6f45932cb2616f8f238dd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__16__copy_internals(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__16__copy_internals,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[307],
#endif
        codeobj_d9e1c95c666d942ebee34085c9ade54a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__17___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[316],
#endif
        codeobj_a205cd41b801b93c02c3607a299d73b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__18___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[319],
#endif
        codeobj_14a1816ceaf5c91bcb7da88fe3154991,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__19_traverse_single(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__19_traverse_single,
        mod_consts[329],
#if PYTHON_VERSION >= 0x300
        mod_consts[330],
#endif
        codeobj_864c01209b36928df9f84af02fc3a5f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__1___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_8cb64567d22609bf43dc2c4a6725650c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__20_iterate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__20_iterate,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[332],
#endif
        codeobj_7131b016ee7b7f233cc1a3eb59185382,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__21_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_e5c71a2c7366c19508512d169ea7ca1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__22_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_b781d31fb1be010d48bd77140c852686,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__23_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__23_traverse,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_47d8a0854078a2ddb363bd579a217768,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__24__memoized_attr__visitor_dict(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__24__memoized_attr__visitor_dict,
        mod_consts[337],
#if PYTHON_VERSION >= 0x300
        mod_consts[338],
#endif
        codeobj_1d38b182a87909068122af0a35f2ead7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__25_visitor_iterator(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__25_visitor_iterator,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_53af19dd9b5731655ede64efa597c7fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__26_chain(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__26_chain,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[342],
#endif
        codeobj_9eb8bf3164c1f08eca0c4a36c9a25135,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__27_copy_and_process(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__27_copy_and_process,
        mod_consts[346],
#if PYTHON_VERSION >= 0x300
        mod_consts[347],
#endif
        codeobj_ca57a73adfd4bf57c5ddb64ec078e702,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__28_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[348],
#endif
        codeobj_67afadf855e1fea82997d38a97305067,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__29_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[348],
#endif
        codeobj_6e0f2b35bd4a1f2374aca7c7b9f9e0aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__30_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__30_traverse,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[348],
#endif
        codeobj_bd00c370a4d7abd5c336f202ce979c2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__31_replace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[352],
#endif
        codeobj_7f613ec19e6b424a6a62ef8a67f8dcc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[351],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__32_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[353],
#endif
        codeobj_7d2d4fae6c0cfa77396577982c0011c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__33_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[353],
#endif
        codeobj_b204c40fc2bda59b66c035d77f99dc12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__34_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__34_traverse,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[353],
#endif
        codeobj_e87fb7fd3f88f0d0604b22b986443577,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__34_traverse$$$function__1_replace(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__34_traverse$$$function__1_replace,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_6bea1efb51aa54e02b32588088a4ed5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__35_iterate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__35_iterate,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c3d0d498460f76d0bd76f88a909770c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__36_traverse_using(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_85c48f8aa6ebf2ab380e21401a1d7e94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__37_traverse_using(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0bb345f47e83ba90bd40d336fb31e2d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__38_traverse_using(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__38_traverse_using,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c01dc4f1182ef88deccb237eaef564f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[98],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__39_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1cde627b1eb2bb0454f268773d05994,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__3___init_subclass__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__3___init_subclass__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_6208a17f5fd93fbe3f2fb60236eab36e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__40_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d15c87ce5a23dbd50a65734f24855074,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__41_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__41_traverse,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f78374c1230e27166e77e19e353f9c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[100],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__42_cloned_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_318f5f42d2c8681687b38c547a7ad99d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__43_cloned_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_58b48860e48dcfa15005f3ed64a4cb56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_66a90078af0814d09e5a2a28d4e1d970,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__1_deferred_copy_internals(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__1_deferred_copy_internals,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_53dfbb782ca9caadeb854f97537a2e97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__2_clone(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__2_clone,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_39fdd2693491dbd1c3001bc0de094e8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__45_replacement_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_defe1859f5e60181f93cacf1d419e956,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__46_replacement_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc3e33bbc0a732b98be69bdb200eeb7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__47_replacement_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9c15eadc0532ff30db1c43eb72e5a34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_022110a24371ac147042486a4d836f98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__1_deferred_copy_internals(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__1_deferred_copy_internals,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_c64c520fdf14d6b3dfe8df2dd99a4321,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__2_clone(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__2_clone,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_08c1344e1fac9e65010a1cb6ad4d580d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_4190ff645ae851e4c68167354bf09fc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch$$$function__1__compiler_dispatch(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch$$$function__1__compiler_dispatch,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_cb1e879a242e02565164af240813ce1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[16],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__5___class_getitem__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__5___class_getitem__,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_ca1d63bf70bdb728357b6d9aac96bd47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__6_get_children(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__6_get_children,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[286],
#endif
        codeobj_fc4bce2e76eaaded557b1bc0de6a6c94,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__7___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        codeobj_45bf5f49209b4ddc6f216c49641ea425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__8_dispatch(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__8_dispatch,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_c1f4e3861cadc72d315d82b89ee9b70d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__9_run_generated_dispatch(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$visitors$$$function__9_run_generated_dispatch,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[295],
#endif
        codeobj_c1832f3eac9011532183c7879c2e1adf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$visitors,
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

function_impl_code functable_sqlalchemy$sql$visitors[] = {
    impl_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch$$$function__1__compiler_dispatch,
    impl_sqlalchemy$sql$visitors$$$function__34_traverse$$$function__1_replace,
    impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__1_deferred_copy_internals,
    impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse$$$function__2_clone,
    impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__1_deferred_copy_internals,
    impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse$$$function__2_clone,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__3___init_subclass__,
    impl_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch,
    impl_sqlalchemy$sql$visitors$$$function__5___class_getitem__,
    impl_sqlalchemy$sql$visitors$$$function__6_get_children,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__8_dispatch,
    impl_sqlalchemy$sql$visitors$$$function__9_run_generated_dispatch,
    impl_sqlalchemy$sql$visitors$$$function__10_generate_dispatch,
    impl_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher,
    impl_sqlalchemy$sql$visitors$$$function__12__generate_traversal_dispatch,
    impl_sqlalchemy$sql$visitors$$$function__15__clone,
    impl_sqlalchemy$sql$visitors$$$function__16__copy_internals,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__19_traverse_single,
    impl_sqlalchemy$sql$visitors$$$function__20_iterate,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__23_traverse,
    impl_sqlalchemy$sql$visitors$$$function__24__memoized_attr__visitor_dict,
    impl_sqlalchemy$sql$visitors$$$function__25_visitor_iterator,
    impl_sqlalchemy$sql$visitors$$$function__26_chain,
    impl_sqlalchemy$sql$visitors$$$function__27_copy_and_process,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__30_traverse,
    NULL,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__34_traverse,
    impl_sqlalchemy$sql$visitors$$$function__35_iterate,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__38_traverse_using,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__41_traverse,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__44_cloned_traverse,
    NULL,
    NULL,
    NULL,
    impl_sqlalchemy$sql$visitors$$$function__48_replacement_traverse,
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

    function_impl_code *current = functable_sqlalchemy$sql$visitors;
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

    if (offset > sizeof(functable_sqlalchemy$sql$visitors) || offset < 0) {
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
        functable_sqlalchemy$sql$visitors[offset],
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
        module_sqlalchemy$sql$visitors,
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
PyObject *modulecode_sqlalchemy$sql$visitors(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.sql.visitors");

    // Store the module for future use.
    module_sqlalchemy$sql$visitors = module;

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
        PRINT_STRING("sqlalchemy.sql.visitors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql.visitors: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.sql.visitors: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$sql$visitors\n");

    moduledict_sqlalchemy$sql$visitors = MODULE_DICT(module_sqlalchemy$sql$visitors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$sql$visitors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$visitors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[10]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$visitors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$visitors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$visitors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$sql$visitors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$sql$visitors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
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
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_a832f16d85d65ceb0361dd7db9de8182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e4a78be2c27f82dd3c500b27b430a910_2;
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
    PyObject *locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79 = NULL;
    struct Nuitka_FrameObject *frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3;
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
    PyObject *locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154 = NULL;
    struct Nuitka_FrameObject *frame_965e6186ce5d2efb739633ef71a4e955_4;
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
    PyObject *locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442 = NULL;
    struct Nuitka_FrameObject *frame_a6230041da4aaac4777ef79439c0606c_5;
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
    PyObject *locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494 = NULL;
    struct Nuitka_FrameObject *frame_11f35fa77e2ba11ff9e755228f32d0b3_6;
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
    PyObject *locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499 = NULL;
    struct Nuitka_FrameObject *frame_c1887de59b76e7fae9566375743d5135_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597 = NULL;
    struct Nuitka_FrameObject *frame_c2e71453ef2f2247fe3981d373b47787_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639 = NULL;
    struct Nuitka_FrameObject *frame_ddb53996904d442f405bda6bbc83ffca_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644 = NULL;
    struct Nuitka_FrameObject *frame_f6128e76ca9c0de123886cec0be4835d_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652 = NULL;
    struct Nuitka_FrameObject *frame_adc29990789673a5994d0c1b6a30b395_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726 = NULL;
    struct Nuitka_FrameObject *frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765 = NULL;
    struct Nuitka_FrameObject *frame_aa5e5628154e8e8d821b63ceafc144d3_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_2);
    }
    frame_a832f16d85d65ceb0361dd7db9de8182 = MAKE_MODULE_FRAME(codeobj_a832f16d85d65ceb0361dd7db9de8182, module_sqlalchemy$sql$visitors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a832f16d85d65ceb0361dd7db9de8182);
    assert(Py_REFCNT(frame_a832f16d85d65ceb0361dd7db9de8182) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[126], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[127], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[129]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[130];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[131];
        tmp_level_value_1 = mod_consts[132];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 15;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[94],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[133];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[134];
        tmp_level_value_2 = mod_consts[132];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 16;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[135],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[27];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[132];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 17;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[13];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[132];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 18;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[137],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[137]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[138],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[138]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[51],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[51]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[139],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[139]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[140],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[140]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[141],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[141]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[142],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[142]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        tmp_import_name_from_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_10 == NULL));
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[143],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[143]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        tmp_import_name_from_11 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_11 == NULL));
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[144],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[144]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        tmp_import_name_from_12 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_12 == NULL));
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[110],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[110]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        tmp_import_name_from_13 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_13 == NULL));
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[145],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[145]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        tmp_import_name_from_14 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_14 == NULL));
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[146],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[146]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        tmp_import_name_from_15 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_15 == NULL));
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[147],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[147]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        tmp_import_name_from_16 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_16 == NULL));
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[149],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[149]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        tmp_import_name_from_17 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_17 == NULL));
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[150],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[150]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[10];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[151];
        tmp_level_value_5 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 37;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[6],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[10];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[153];
        tmp_level_value_6 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 38;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[21],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[21];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[154];
        tmp_level_value_7 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 39;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[53],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[155];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[156];
        tmp_level_value_8 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 40;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[157],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[157]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[158];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[159];
        tmp_level_value_9 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 41;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[160],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[160]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[158];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[161];
        tmp_level_value_10 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 42;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[162],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[162]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[158];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[163];
        tmp_level_value_11 = mod_consts[152];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 43;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[164],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[164]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_32);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[165];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[166];
        tmp_level_value_12 = mod_consts[167];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 50;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[168],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[168]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[165];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[169];
        tmp_level_value_13 = mod_consts[167];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 51;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[170],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[170]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_34);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[172];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[166];
        tmp_level_value_14 = mod_consts[132];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 53;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[168],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[168]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[172];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$sql$visitors;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[169];
        tmp_level_value_15 = mod_consts[132];
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 56;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_sqlalchemy$sql$visitors,
                mod_consts[170],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[170]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_36);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_LIST9(mod_consts[173]);
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_37);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_39 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[132];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_41 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[175]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[175]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[176];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 74;
        tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[177]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[9];
        tmp_getattr_default_1 = mod_consts[179];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

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


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 74;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_43;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[176];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        frame_e4a78be2c27f82dd3c500b27b430a910_2 = MAKE_CLASS_FRAME(codeobj_e4a78be2c27f82dd3c500b27b430a910, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e4a78be2c27f82dd3c500b27b430a910_2);
        assert(Py_REFCNT(frame_e4a78be2c27f82dd3c500b27b430a910_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[183]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__1___call__(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e4a78be2c27f82dd3c500b27b430a910_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e4a78be2c27f82dd3c500b27b430a910_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e4a78be2c27f82dd3c500b27b430a910_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e4a78be2c27f82dd3c500b27b430a910_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_e4a78be2c27f82dd3c500b27b430a910_2);

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


                exception_lineno = 74;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[176];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 74;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_44 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74);
        locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74);
        locals_sqlalchemy$sql$visitors$$$class__1__CompilerDispatchType_74 = NULL;
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
        exception_lineno = 74;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_44);
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
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[187];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[123], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[188];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[182], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[191], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3 = MAKE_CLASS_FRAME(codeobj_ef3ab4ffe32db64b90fa6cbdc1efa0bf, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3);
        assert(Py_REFCNT(frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[192];
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[0];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = mod_consts[176];
            tmp_ass_subscribed_2 = DICT_GET_ITEM0(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[5];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ef3ab4ffe32db64b90fa6cbdc1efa0bf_3);

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
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_annotations_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_annotations_2 = DICT_COPY(mod_consts[193]);

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_classmethod_arg_1 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__3___init_subclass__(tmp_annotations_2, tmp_closure_1);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[193]);


            tmp_classmethod_arg_2 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__4__generate_compiler_dispatch(tmp_annotations_3);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_3;
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[196]);


            tmp_classmethod_arg_3 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__5___class_getitem__(tmp_annotations_4);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[188];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[190];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 79;
            tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_49);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_48 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79);
        locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79);
        locals_sqlalchemy$sql$visitors$$$class__2_Visitable_79 = NULL;
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
        exception_lineno = 79;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_48);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        tmp_assign_source_50 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_51 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_6 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[132];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_53;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_7 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[175]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_8 = tmp_class_creation_3__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[175]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = mod_consts[57];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 154;
        tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_9 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[177]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
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
        tmp_mod_expr_left_2 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_2 = mod_consts[9];
        tmp_getattr_default_2 = mod_consts[179];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[9]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 154;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_55;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_9;
        }
        frame_965e6186ce5d2efb739633ef71a4e955_4 = MAKE_CLASS_FRAME(codeobj_965e6186ce5d2efb739633ef71a4e955, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_965e6186ce5d2efb739633ef71a4e955_4);
        assert(Py_REFCNT(frame_965e6186ce5d2efb739633ef71a4e955_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[200];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[202];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[204];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[205], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[206];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[207], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[208];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[209], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[210];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[212];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[213], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[214];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[215], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[217], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[218];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[219], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[220];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[221], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[222];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[224];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[225], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[226];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[227], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[228];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[229], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[230];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[233], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[234];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[235], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[236];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[237], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[238];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[239], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[240];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[241], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[242];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[243], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[244];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[245], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[248];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[249], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[251], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[252];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[253], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[254];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[255], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[256];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[258];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[259], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[260];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[261], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[262];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[263], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[264];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[265], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[266];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[267], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[268];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[269], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[270];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[271], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[272];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[273], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[274];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[275], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[276];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[277], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_965e6186ce5d2efb739633ef71a4e955_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_965e6186ce5d2efb739633ef71a4e955_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_965e6186ce5d2efb739633ef71a4e955_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_965e6186ce5d2efb739633ef71a4e955_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_965e6186ce5d2efb739633ef71a4e955_4);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_9;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_5 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[57];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 154;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_56 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_56);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154);
        locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154);
        locals_sqlalchemy$sql$visitors$$$class__3_InternalTraversal_154 = NULL;
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
        exception_lineno = 154;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_56);
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
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_10;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_10);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_60;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[279];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[123], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[280];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[182], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[191], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a6230041da4aaac4777ef79439c0606c_5 = MAKE_CLASS_FRAME(codeobj_a6230041da4aaac4777ef79439c0606c, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a6230041da4aaac4777ef79439c0606c_5);
        assert(Py_REFCNT(frame_a6230041da4aaac4777ef79439c0606c_5) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = mod_consts[278];
            tmp_ass_subscribed_3 = DICT_GET_ITEM0(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_3 = mod_consts[24];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = mod_consts[281];
            tmp_ass_subscribed_4 = DICT_GET_ITEM0(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_4 = mod_consts[115];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_5;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_a6230041da4aaac4777ef79439c0606c_5->m_frame.f_lineno = 459;
            tmp_called_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[282],
                PyTuple_GET_ITEM(mod_consts[283], 0)
            );

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[284]);
            tmp_annotations_5 = DICT_COPY(mod_consts[285]);


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__6_get_children(tmp_kw_defaults_1, tmp_annotations_5);

            frame_a6230041da4aaac4777ef79439c0606c_5->m_frame.f_lineno = 459;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a6230041da4aaac4777ef79439c0606c_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a6230041da4aaac4777ef79439c0606c_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a6230041da4aaac4777ef79439c0606c_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a6230041da4aaac4777ef79439c0606c_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_a6230041da4aaac4777ef79439c0606c_5);

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
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[280];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[190];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 442;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_61 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442);
        locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442);
        locals_sqlalchemy$sql$visitors$$$class__4_HasTraverseInternals_442 = NULL;
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
        exception_lineno = 442;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_61);
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

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        tmp_assign_source_63 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_64 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_13 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[132];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_5, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_3 = tmp_class_creation_5__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_66;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_14 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[175]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_15 = tmp_class_creation_5__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[175]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        tmp_tuple_element_13 = mod_consts[52];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_13 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 494;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_16 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[177]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
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
        tmp_mod_expr_left_3 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_3 = mod_consts[9];
        tmp_getattr_default_3 = mod_consts[179];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_6 = tmp_class_creation_5__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[9]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 494;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_68;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_15;
        }
        frame_11f35fa77e2ba11ff9e755228f32d0b3_6 = MAKE_CLASS_FRAME(codeobj_11f35fa77e2ba11ff9e755228f32d0b3, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_11f35fa77e2ba11ff9e755228f32d0b3_6);
        assert(Py_REFCNT(frame_11f35fa77e2ba11ff9e755228f32d0b3_6) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[287]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__7___call__(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_11f35fa77e2ba11ff9e755228f32d0b3_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_11f35fa77e2ba11ff9e755228f32d0b3_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_11f35fa77e2ba11ff9e755228f32d0b3_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_11f35fa77e2ba11ff9e755228f32d0b3_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_11f35fa77e2ba11ff9e755228f32d0b3_6);

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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto try_except_handler_15;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_9 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = mod_consts[52];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 494;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_69 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494);
        locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494 = NULL;
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

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494);
        locals_sqlalchemy$sql$visitors$$$class__5__InternalTraversalDispatchType_494 = NULL;
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
        exception_lineno = 494;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_69);
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
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_72;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[289];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[123], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[290];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[182], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[191], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_c1887de59b76e7fae9566375743d5135_7 = MAKE_CLASS_FRAME(codeobj_c1887de59b76e7fae9566375743d5135, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c1887de59b76e7fae9566375743d5135_7);
        assert(Py_REFCNT(frame_c1887de59b76e7fae9566375743d5135_7) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = mod_consts[291];
            tmp_ass_subscribed_5 = DICT_GET_ITEM0(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 508;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_5 = mod_consts[37];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c1887de59b76e7fae9566375743d5135_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c1887de59b76e7fae9566375743d5135_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c1887de59b76e7fae9566375743d5135_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c1887de59b76e7fae9566375743d5135_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_c1887de59b76e7fae9566375743d5135_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[292]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__8_dispatch(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[294]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__9_run_generated_dispatch(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[296]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__10_generate_dispatch(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[298]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__11__generate_dispatcher(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_16 = mod_consts[290];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[190];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_6__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 499;
            tmp_assign_source_74 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_73 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499);
        locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499);
        locals_sqlalchemy$sql$visitors$$$class__6_HasTraversalDispatch_499 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 499;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_73);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assign_source_75 == NULL)) {
            tmp_assign_source_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_11;
        tmp_annotations_11 = DICT_COPY(mod_consts[193]);


        tmp_assign_source_76 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__12__generate_traversal_dispatch(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[290]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
        }

        assert(!(tmp_expression_value_18 == NULL));
        tmp_assign_source_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[37]);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_77);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_1;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[301]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 594;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[280]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[280]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        tmp_assign_source_78 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_78, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_78, 1, tmp_tuple_element_17);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_78);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_79 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_19 = tmp_class_creation_7__bases;
        tmp_subscript_value_6 = mod_consts[132];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_6, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_4 = tmp_class_creation_7__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_81;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_20 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[175]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_21 = tmp_class_creation_7__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[175]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        tmp_tuple_element_18 = mod_consts[111];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_18 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_7__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 597;
        tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_22 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[177]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
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
        tmp_mod_expr_left_4 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_4 = mod_consts[9];
        tmp_getattr_default_4 = mod_consts[179];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_8 = tmp_class_creation_7__prepared;
            tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[9]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 597;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_83;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_84;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_21;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_21;
        }
        frame_c2e71453ef2f2247fe3981d373b47787_8 = MAKE_CLASS_FRAME(codeobj_c2e71453ef2f2247fe3981d373b47787, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c2e71453ef2f2247fe3981d373b47787_8);
        assert(Py_REFCNT(frame_c2e71453ef2f2247fe3981d373b47787_8) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[191], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_expression_value_24;
            tmp_expression_value_24 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[21]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 600;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[302]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = mod_consts[303];
            tmp_ass_subscribed_6 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_6 = mod_consts[120];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[304]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__15__clone(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_13;
            tmp_kw_defaults_2 = DICT_COPY(mod_consts[284]);
            tmp_annotations_13 = DICT_COPY(mod_consts[306]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__16__copy_internals(tmp_kw_defaults_2, tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c2e71453ef2f2247fe3981d373b47787_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c2e71453ef2f2247fe3981d373b47787_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c2e71453ef2f2247fe3981d373b47787_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c2e71453ef2f2247fe3981d373b47787_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_c2e71453ef2f2247fe3981d373b47787_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_21;
        }
        branch_no_13:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_13 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_20 = mod_consts[111];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_20 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_7__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 597;
            tmp_assign_source_85 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_85;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_84 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597);
        locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597);
        locals_sqlalchemy$sql$visitors$$$class__7_ExternallyTraversible_597 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 597;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_84);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;

            goto frame_exception_exit_1;
        }
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 632;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_14, mod_consts[308], kw_values, mod_consts[309]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 634;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[311], 0), mod_consts[309]);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_list_element_1;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[310]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[310]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_21 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_tuple_element_21, 0, tmp_list_element_1);
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_21);
        tmp_tuple_element_21 = Py_None;
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_21);
        tmp_assign_source_88 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_88);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_tuple_element_22;
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        tmp_assign_source_89 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_89, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_90 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_26 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[132];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_8, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_5 = tmp_class_creation_8__bases;
        tmp_assign_source_92 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_92;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_27 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[175]);
        tmp_condition_result_19 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_12;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_28 = tmp_class_creation_8__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[175]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        tmp_tuple_element_23 = mod_consts[314];
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_23 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_12 = tmp_class_creation_8__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 639;
        tmp_assign_source_93 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_12);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_93;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_29 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[177]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
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
        tmp_mod_expr_left_5 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_5 = mod_consts[9];
        tmp_getattr_default_5 = mod_consts[179];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_10 = tmp_class_creation_8__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[9]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 639;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_94;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_95;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[314];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_24;
        }
        frame_ddb53996904d442f405bda6bbc83ffca_9 = MAKE_CLASS_FRAME(codeobj_ddb53996904d442f405bda6bbc83ffca, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ddb53996904d442f405bda6bbc83ffca_9);
        assert(Py_REFCNT(frame_ddb53996904d442f405bda6bbc83ffca_9) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[315]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__17___call__(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ddb53996904d442f405bda6bbc83ffca_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ddb53996904d442f405bda6bbc83ffca_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ddb53996904d442f405bda6bbc83ffca_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ddb53996904d442f405bda6bbc83ffca_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_ddb53996904d442f405bda6bbc83ffca_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_24;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_17 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_25 = mod_consts[314];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_25 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_8__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 639;
            tmp_assign_source_96 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_96;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_95 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_95);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639);
        locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639);
        locals_sqlalchemy$sql$visitors$$$class__8__CloneCallableType_639 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 639;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_95);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
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
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[310]);

        if (unlikely(tmp_subscript_value_9 == NULL)) {
            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[310]);
        }

        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_9);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_assign_source_97 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_97, 0, tmp_tuple_element_26);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_98 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_32 = tmp_class_creation_9__bases;
        tmp_subscript_value_10 = mod_consts[132];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_10, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_6 = tmp_class_creation_9__bases;
        tmp_assign_source_100 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_100;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_33 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[175]);
        tmp_condition_result_23 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_14;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_kwargs_value_14;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_34 = tmp_class_creation_9__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[175]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_tuple_element_27 = mod_consts[317];
        tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_27 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_14 = tmp_class_creation_9__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 644;
        tmp_assign_source_101 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_14, tmp_kwargs_value_14);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_14);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_101;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_35 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[177]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_6 = mod_consts[9];
        tmp_getattr_default_6 = mod_consts[179];
        tmp_tuple_element_28 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_12 = tmp_class_creation_9__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[9]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 644;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_102;
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_103;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[317];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_27;
        }
        frame_f6128e76ca9c0de123886cec0be4835d_10 = MAKE_CLASS_FRAME(codeobj_f6128e76ca9c0de123886cec0be4835d, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f6128e76ca9c0de123886cec0be4835d_10);
        assert(Py_REFCNT(frame_f6128e76ca9c0de123886cec0be4835d_10) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[318]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__18___call__(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 645;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f6128e76ca9c0de123886cec0be4835d_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f6128e76ca9c0de123886cec0be4835d_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f6128e76ca9c0de123886cec0be4835d_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f6128e76ca9c0de123886cec0be4835d_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_f6128e76ca9c0de123886cec0be4835d_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_27;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;

            goto try_except_handler_27;
        }
        branch_no_19:;
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_19 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_29 = mod_consts[317];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_29 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_15 = tmp_class_creation_9__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 644;
            tmp_assign_source_104 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 644;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_104;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_103 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_103);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644);
        locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644);
        locals_sqlalchemy$sql$visitors$$$class__9__TraverseTransformCallableType_644 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 644;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_103);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;

            goto frame_exception_exit_1;
        }
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 649;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[320], 0), mod_consts[309]);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_105);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[322]);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_assign_source_106 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_106, 0, tmp_tuple_element_30);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_107 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_condition_result_26 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_38 = tmp_class_creation_10__bases;
        tmp_subscript_value_11 = mod_consts[132];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_38, tmp_subscript_value_11, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_7 = tmp_class_creation_10__bases;
        tmp_assign_source_109 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_109;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_39 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[175]);
        tmp_condition_result_27 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_value_16;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_value_16;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_40 = tmp_class_creation_10__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[175]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_tuple_element_31 = mod_consts[323];
        tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_31 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_16 = tmp_class_creation_10__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 652;
        tmp_assign_source_110 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_16, tmp_kwargs_value_16);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_16);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_110;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_41 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_41, mod_consts[177]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_7 = mod_consts[9];
        tmp_getattr_default_7 = mod_consts[179];
        tmp_tuple_element_32 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_14 = tmp_class_creation_10__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[9]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 652;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 652;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_21:;
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_111;
    }
    branch_end_20:;
    {
        PyObject *tmp_assign_source_112;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[324];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[323];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_30;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_30;
        }
        frame_adc29990789673a5994d0c1b6a30b395_11 = MAKE_CLASS_FRAME(codeobj_adc29990789673a5994d0c1b6a30b395, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_adc29990789673a5994d0c1b6a30b395_11);
        assert(Py_REFCNT(frame_adc29990789673a5994d0c1b6a30b395_11) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[325];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[191], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = mod_consts[326];
            tmp_ass_subscribed_7 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 663;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 663;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_7 = mod_consts[70];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 663;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = mod_consts[327];
            tmp_ass_subscribed_8 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[189]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 664;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 664;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_8 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 664;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[328]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__19_traverse_single(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[329], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[331]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__20_iterate(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_18;
            tmp_called_value_22 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[145]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 681;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_annotations_18 = DICT_COPY(mod_consts[333]);


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__21_traverse(tmp_annotations_18);

            frame_adc29990789673a5994d0c1b6a30b395_11->m_frame.f_lineno = 681;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 681;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 681;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_19;
            tmp_called_value_23 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[145]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 685;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_annotations_19 = DICT_COPY(mod_consts[102]);


            tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__22_traverse(tmp_annotations_19);

            frame_adc29990789673a5994d0c1b6a30b395_11->m_frame.f_lineno = 685;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_20;
            tmp_annotations_20 = DICT_COPY(mod_consts[335]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__23_traverse(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 689;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_21;
            tmp_annotations_21 = DICT_COPY(mod_consts[336]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__24__memoized_attr__visitor_dict(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[337], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_22;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_23;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[339]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_condition_result_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_24 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[339]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[339]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_annotations_22 = DICT_COPY(mod_consts[340]);


            tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__25_visitor_iterator(tmp_annotations_22);

            frame_adc29990789673a5994d0c1b6a30b395_11->m_frame.f_lineno = 706;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;
            tmp_annotations_23 = DICT_COPY(mod_consts[340]);


            tmp_args_element_value_5 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__25_visitor_iterator(tmp_annotations_23);

            frame_adc29990789673a5994d0c1b6a30b395_11->m_frame.f_lineno = 706;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_24;
            tmp_annotations_24 = DICT_COPY(mod_consts[341]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__26_chain(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 715;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_adc29990789673a5994d0c1b6a30b395_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_adc29990789673a5994d0c1b6a30b395_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_adc29990789673a5994d0c1b6a30b395_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_adc29990789673a5994d0c1b6a30b395_11,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_adc29990789673a5994d0c1b6a30b395_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_30;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 652;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto try_except_handler_30;
        }
        branch_no_22:;
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_26 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_33 = mod_consts[323];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_33 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_17 = tmp_class_creation_10__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 652;
            tmp_assign_source_113 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 652;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_113;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_112 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_112);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652);
        locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652);
        locals_sqlalchemy$sql$visitors$$$class__10_ExternalTraversal_652 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 652;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_112);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_tuple_element_34;
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[323]);

        if (unlikely(tmp_tuple_element_34 == NULL)) {
            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[323]);
        }

        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        tmp_assign_source_114 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_114, 0, tmp_tuple_element_34);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_115 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_31;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        tmp_condition_result_31 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_43 = tmp_class_creation_11__bases;
        tmp_subscript_value_12 = mod_consts[132];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_43, tmp_subscript_value_12, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_8 = tmp_class_creation_11__bases;
        tmp_assign_source_117 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_117;
    }
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_44 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[175]);
        tmp_condition_result_32 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_18;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_kwargs_value_18;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_45 = tmp_class_creation_11__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[175]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        tmp_tuple_element_35 = mod_consts[343];
        tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_35 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_18 = tmp_class_creation_11__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 726;
        tmp_assign_source_118 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_18, tmp_kwargs_value_18);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_18);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_118;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_46 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[177]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        tmp_condition_result_33 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_8 = mod_consts[9];
        tmp_getattr_default_8 = mod_consts[179];
        tmp_tuple_element_36 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_47;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_16 = tmp_class_creation_11__prepared;
            tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_47 == NULL));
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[9]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 726;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_24:;
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_119;
    }
    branch_end_23:;
    {
        PyObject *tmp_assign_source_120;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[344];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[343];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_33;
        }
        frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12 = MAKE_CLASS_FRAME(codeobj_08f72d29ea13ed6ed9e6eb6bcd9d53f1, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12);
        assert(Py_REFCNT(frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[191], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(mod_consts[345]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__27_copy_and_process(tmp_annotations_25);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[346], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 738;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_26;
            tmp_called_value_28 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[145]);

            if (tmp_called_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 747;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_value_28);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_annotations_26 = DICT_COPY(mod_consts[333]);


            tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__28_traverse(tmp_annotations_26);

            frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12->m_frame.f_lineno = 747;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 747;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 747;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_27;
            tmp_called_value_29 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[145]);

            if (tmp_called_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 751;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_value_29);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_annotations_27 = DICT_COPY(mod_consts[102]);


            tmp_args_element_value_7 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__29_traverse(tmp_annotations_27);

            frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12->m_frame.f_lineno = 751;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 751;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 751;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_annotations_28;
            tmp_annotations_28 = DICT_COPY(mod_consts[335]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__30_traverse(tmp_annotations_28);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_08f72d29ea13ed6ed9e6eb6bcd9d53f1_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_33;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
        }
        branch_yes_25:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;

            goto try_except_handler_33;
        }
        branch_no_25:;
        {
            PyObject *tmp_assign_source_121;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_30 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_37 = mod_consts[343];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_37 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_11__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 726;
            tmp_assign_source_121 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_121;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_120 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_120);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726);
        locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726);
        locals_sqlalchemy$sql$visitors$$$class__11_CloningExternalTraversal_726 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 726;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_120);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_tuple_element_38;
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_tuple_element_38 == NULL)) {
            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        tmp_assign_source_122 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_122, 0, tmp_tuple_element_38);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_123 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_35;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        tmp_condition_result_35 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_48 = tmp_class_creation_12__bases;
        tmp_subscript_value_13 = mod_consts[132];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_48, tmp_subscript_value_13, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_9 = tmp_class_creation_12__bases;
        tmp_assign_source_125 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_125;
    }
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_49 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_49, mod_consts[175]);
        tmp_condition_result_36 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_value_20;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_kwargs_value_20;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_50 = tmp_class_creation_12__metaclass;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[175]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        tmp_tuple_element_39 = mod_consts[89];
        tmp_args_value_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_39 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_20 = tmp_class_creation_12__class_decl_dict;
        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 765;
        tmp_assign_source_126 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_20, tmp_kwargs_value_20);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_20);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_126;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_51 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_51, mod_consts[177]);
        tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        tmp_condition_result_37 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_9 = mod_consts[9];
        tmp_getattr_default_9 = mod_consts[179];
        tmp_tuple_element_40 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_18 = tmp_class_creation_12__prepared;
            tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_52 == NULL));
            tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[9]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 765;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_127;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_128;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[349];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_36;
        }
        frame_aa5e5628154e8e8d821b63ceafc144d3_13 = MAKE_CLASS_FRAME(codeobj_aa5e5628154e8e8d821b63ceafc144d3, module_sqlalchemy$sql$visitors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_aa5e5628154e8e8d821b63ceafc144d3_13);
        assert(Py_REFCNT(frame_aa5e5628154e8e8d821b63ceafc144d3_13) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[191], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_2 = "o";
            goto frame_exception_exit_13;
        }
        {
            PyObject *tmp_annotations_29;
            tmp_annotations_29 = DICT_COPY(mod_consts[350]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__31_replace(tmp_annotations_29);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 776;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_30;
            tmp_called_value_32 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[145]);

            if (tmp_called_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_called_value_32 == NULL)) {
                        tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_called_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 787;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_32);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_annotations_30 = DICT_COPY(mod_consts[333]);


            tmp_args_element_value_8 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__32_traverse(tmp_annotations_30);

            frame_aa5e5628154e8e8d821b63ceafc144d3_13->m_frame.f_lineno = 787;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 787;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 787;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_31;
            tmp_called_value_33 = PyObject_GetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[145]);

            if (tmp_called_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_called_value_33 == NULL)) {
                        tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_called_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 791;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_33);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_annotations_31 = DICT_COPY(mod_consts[102]);


            tmp_args_element_value_9 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__33_traverse(tmp_annotations_31);

            frame_aa5e5628154e8e8d821b63ceafc144d3_13->m_frame.f_lineno = 791;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_annotations_32;
            tmp_annotations_32 = DICT_COPY(mod_consts[335]);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__34_traverse(tmp_annotations_32);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 795;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aa5e5628154e8e8d821b63ceafc144d3_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aa5e5628154e8e8d821b63ceafc144d3_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aa5e5628154e8e8d821b63ceafc144d3_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aa5e5628154e8e8d821b63ceafc144d3_13,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_aa5e5628154e8e8d821b63ceafc144d3_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_36;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;

                goto try_except_handler_36;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto try_except_handler_36;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_129;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_34 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_41 = mod_consts[89];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_41 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765;
            PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_21 = tmp_class_creation_12__class_decl_dict;
            frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 765;
            tmp_assign_source_129 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;

                goto try_except_handler_36;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_129;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_128 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_128);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765);
        locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765);
        locals_sqlalchemy$sql$visitors$$$class__12_ReplacingExternalTraversal_765 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 765;
        goto try_except_handler_34;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_128);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assign_source_130 == NULL)) {
            tmp_assign_source_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[323]);

        if (unlikely(tmp_assign_source_131 == NULL)) {
            tmp_assign_source_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[323]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_assign_source_132 == NULL)) {
            tmp_assign_source_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_133 == NULL)) {
            tmp_assign_source_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_annotations_33;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[302]);
        if (tmp_tuple_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_42);
        tmp_annotations_33 = DICT_COPY(mod_consts[358]);


        tmp_assign_source_134 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__35_iterate(tmp_defaults_1, tmp_annotations_33);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_annotations_34;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 863;

            goto frame_exception_exit_1;
        }
        tmp_annotations_34 = DICT_COPY(mod_consts[359]);


        tmp_args_element_value_10 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__36_traverse_using(tmp_annotations_34);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 863;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 863;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_annotations_35;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;

            goto frame_exception_exit_1;
        }
        tmp_annotations_35 = DICT_COPY(mod_consts[360]);


        tmp_args_element_value_11 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__37_traverse_using(tmp_annotations_35);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 872;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_annotations_36;
        tmp_annotations_36 = DICT_COPY(mod_consts[361]);


        tmp_assign_source_137 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__38_traverse_using(tmp_annotations_36);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_annotations_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;

            goto frame_exception_exit_1;
        }
        tmp_annotations_37 = DICT_COPY(mod_consts[362]);


        tmp_args_element_value_12 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__39_traverse(tmp_annotations_37);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 917;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_annotations_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;

            goto frame_exception_exit_1;
        }
        tmp_annotations_38 = DICT_COPY(mod_consts[363]);


        tmp_args_element_value_13 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__40_traverse(tmp_annotations_38);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 926;
        tmp_assign_source_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_annotations_39;
        tmp_annotations_39 = DICT_COPY(mod_consts[364]);


        tmp_assign_source_140 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__41_traverse(tmp_annotations_39);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_annotations_40;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto frame_exception_exit_1;
        }
        tmp_annotations_40 = DICT_COPY(mod_consts[362]);


        tmp_args_element_value_14 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__42_cloned_traverse(tmp_annotations_40);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 972;
        tmp_assign_source_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_annotations_41;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 985;

            goto frame_exception_exit_1;
        }
        tmp_annotations_41 = DICT_COPY(mod_consts[365]);


        tmp_args_element_value_15 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__43_cloned_traverse(tmp_annotations_41);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 985;
        tmp_assign_source_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 985;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_annotations_42;
        tmp_annotations_42 = DICT_COPY(mod_consts[364]);


        tmp_assign_source_143 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__44_cloned_traverse(tmp_annotations_42);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_annotations_43;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1086;

            goto frame_exception_exit_1;
        }
        tmp_annotations_43 = DICT_COPY(mod_consts[366]);


        tmp_args_element_value_16 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__45_replacement_traverse(tmp_annotations_43);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 1086;
        tmp_assign_source_144 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1086;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_annotations_44;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1095;

            goto frame_exception_exit_1;
        }
        tmp_annotations_44 = DICT_COPY(mod_consts[367]);


        tmp_args_element_value_17 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__46_replacement_traverse(tmp_annotations_44);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 1095;
        tmp_assign_source_145 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1095;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_annotations_45;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        tmp_annotations_45 = DICT_COPY(mod_consts[368]);


        tmp_args_element_value_18 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__47_replacement_traverse(tmp_annotations_45);

        frame_a832f16d85d65ceb0361dd7db9de8182->m_frame.f_lineno = 1104;
        tmp_assign_source_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_146);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_13;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a832f16d85d65ceb0361dd7db9de8182, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a832f16d85d65ceb0361dd7db9de8182->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a832f16d85d65ceb0361dd7db9de8182, exception_lineno);
    }



    assertFrameObject(frame_a832f16d85d65ceb0361dd7db9de8182);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_13:;
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_annotations_46;
        tmp_annotations_46 = DICT_COPY(mod_consts[369]);


        tmp_assign_source_147 = MAKE_FUNCTION_sqlalchemy$sql$visitors$$$function__48_replacement_traverse(tmp_annotations_46);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_147);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.sql.visitors", false);

    Py_INCREF(module_sqlalchemy$sql$visitors);
    return module_sqlalchemy$sql$visitors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$visitors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$sql$visitors", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
