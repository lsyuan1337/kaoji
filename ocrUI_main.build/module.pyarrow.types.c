/* Generated code for Python module 'pyarrow.types'
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

/* The "module_pyarrow$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyarrow$types;
PyDictObject *moduledict_pyarrow$types;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[155];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[155];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyarrow.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 155; i++) {
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
void checkModuleConstants_pyarrow$types(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 155; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_15ef2ab3d85fe25eb06e78474e1c0f13;
static PyCodeObject *codeobj_76d9f97251426853f2efad72aa9e30fb;
static PyCodeObject *codeobj_908b01bf7f8b767c5d4d0404433c9ffe;
static PyCodeObject *codeobj_4f19f73a0ebcb53af047a9dc9ab24731;
static PyCodeObject *codeobj_398500e4456522df880cf06f4b8c0dad;
static PyCodeObject *codeobj_dfe504037b799c4b9c793fe189a5141b;
static PyCodeObject *codeobj_3918aa2a436247f9c7f73779306814df;
static PyCodeObject *codeobj_10304bf162bc4e59ef5743f7891434d6;
static PyCodeObject *codeobj_ec32eda2af009cd3883731fff83c847e;
static PyCodeObject *codeobj_168f7e35eb9b43db71787ccfb7b52c1a;
static PyCodeObject *codeobj_a7b1ec5198692469e32e85e44abc10c1;
static PyCodeObject *codeobj_9c69cfa08f9754d1070a5c59d7473cee;
static PyCodeObject *codeobj_ca5fe9c30ed04d255dc853004f073d5d;
static PyCodeObject *codeobj_51e8aaaba864658b352b4aa39e06cf55;
static PyCodeObject *codeobj_ae71920d9fd52d7c4e28040f6351980d;
static PyCodeObject *codeobj_1f9217e493fcb74392b41a70247ecb9b;
static PyCodeObject *codeobj_ac4c64ff725782364130af610e4bdfcb;
static PyCodeObject *codeobj_610b58fc627b76af4f0a71859c80f6c5;
static PyCodeObject *codeobj_8c2eb1ca8f9931fe9e3abaec77cf5236;
static PyCodeObject *codeobj_b147c071aa428817ab890e2f55988130;
static PyCodeObject *codeobj_7682884720251632f72f34cc7a59035f;
static PyCodeObject *codeobj_6960093f8367969085e186aca178a463;
static PyCodeObject *codeobj_2ba50199574fff03c09ba6fc75291b43;
static PyCodeObject *codeobj_2b425936a92d9777d143e80637d4abaa;
static PyCodeObject *codeobj_d550dafc37dbdc0ca2fc0d14ac001005;
static PyCodeObject *codeobj_8a8fe54407fe85ce9f7decc7167f0e36;
static PyCodeObject *codeobj_ebc8bbad15d58080b76256be19b4f90a;
static PyCodeObject *codeobj_1aab69249b0342b29b1d700779881858;
static PyCodeObject *codeobj_741350d74238629e7692e86b2190ca8c;
static PyCodeObject *codeobj_7a49dc5fd9b8e3be8dc8a16651ec2caa;
static PyCodeObject *codeobj_dd284e14c8880659eae97a97d5480ad5;
static PyCodeObject *codeobj_31901981ed8d82b2303ede7758601ec0;
static PyCodeObject *codeobj_a6bb66c9692b4719887bba0e46da7892;
static PyCodeObject *codeobj_74ce9b6d343a1cbe736d831648e60624;
static PyCodeObject *codeobj_2c82e23890a0753427cbb5d89d2d0c85;
static PyCodeObject *codeobj_741cf27ea39791b98b841b8077658855;
static PyCodeObject *codeobj_fa8a96e01f90563e796280a1190db63c;
static PyCodeObject *codeobj_433875ea2e7bc4b83c129942dab4172e;
static PyCodeObject *codeobj_96bfbe52e29a415cd0c6650eeadccc12;
static PyCodeObject *codeobj_32b29e678f66e73539e859d470b3971b;
static PyCodeObject *codeobj_55f780d2360f74dfd31f21d8265584ef;
static PyCodeObject *codeobj_30fc988b0766bc3fb57270fa50f8722b;
static PyCodeObject *codeobj_6433284a6519e27bba813d7d085e623c;
static PyCodeObject *codeobj_47f9acfd775047c98c39f23a596d0752;
static PyCodeObject *codeobj_d2c9ab2a2b34f2c16983a76e912dea66;
static PyCodeObject *codeobj_09fa39df796c3b9afa8d45bb5155c7d1;
static PyCodeObject *codeobj_1cf1e1d902329cfe98de5006b69121cb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[151]); CHECK_OBJECT(module_filename_obj);
    codeobj_15ef2ab3d85fe25eb06e78474e1c0f13 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_76d9f97251426853f2efad72aa9e30fb = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[153], NULL, 1, 0, 0);
    codeobj_908b01bf7f8b767c5d4d0404433c9ffe = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[153], NULL, 1, 0, 0);
    codeobj_4f19f73a0ebcb53af047a9dc9ab24731 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[153], NULL, 1, 0, 0);
    codeobj_398500e4456522df880cf06f4b8c0dad = MAKE_CODE_OBJECT(module_filename_obj, 454, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[153], NULL, 1, 0, 0);
    codeobj_dfe504037b799c4b9c793fe189a5141b = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[153], NULL, 1, 0, 0);
    codeobj_3918aa2a436247f9c7f73779306814df = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[153], NULL, 1, 0, 0);
    codeobj_10304bf162bc4e59ef5743f7891434d6 = MAKE_CODE_OBJECT(module_filename_obj, 498, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[153], NULL, 1, 0, 0);
    codeobj_ec32eda2af009cd3883731fff83c847e = MAKE_CODE_OBJECT(module_filename_obj, 509, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[153], NULL, 1, 0, 0);
    codeobj_168f7e35eb9b43db71787ccfb7b52c1a = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[153], NULL, 1, 0, 0);
    codeobj_a7b1ec5198692469e32e85e44abc10c1 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[153], NULL, 1, 0, 0);
    codeobj_9c69cfa08f9754d1070a5c59d7473cee = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[153], NULL, 1, 0, 0);
    codeobj_ca5fe9c30ed04d255dc853004f073d5d = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[153], NULL, 1, 0, 0);
    codeobj_51e8aaaba864658b352b4aa39e06cf55 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[153], NULL, 1, 0, 0);
    codeobj_ae71920d9fd52d7c4e28040f6351980d = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[153], NULL, 1, 0, 0);
    codeobj_1f9217e493fcb74392b41a70247ecb9b = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[153], NULL, 1, 0, 0);
    codeobj_ac4c64ff725782364130af610e4bdfcb = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[153], NULL, 1, 0, 0);
    codeobj_610b58fc627b76af4f0a71859c80f6c5 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[153], NULL, 1, 0, 0);
    codeobj_8c2eb1ca8f9931fe9e3abaec77cf5236 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[153], NULL, 1, 0, 0);
    codeobj_b147c071aa428817ab890e2f55988130 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[153], NULL, 1, 0, 0);
    codeobj_7682884720251632f72f34cc7a59035f = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[153], NULL, 1, 0, 0);
    codeobj_6960093f8367969085e186aca178a463 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[153], NULL, 1, 0, 0);
    codeobj_2ba50199574fff03c09ba6fc75291b43 = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[153], NULL, 1, 0, 0);
    codeobj_2b425936a92d9777d143e80637d4abaa = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[153], NULL, 1, 0, 0);
    codeobj_d550dafc37dbdc0ca2fc0d14ac001005 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[153], NULL, 1, 0, 0);
    codeobj_8a8fe54407fe85ce9f7decc7167f0e36 = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[153], NULL, 1, 0, 0);
    codeobj_ebc8bbad15d58080b76256be19b4f90a = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[153], NULL, 1, 0, 0);
    codeobj_1aab69249b0342b29b1d700779881858 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[153], NULL, 1, 0, 0);
    codeobj_741350d74238629e7692e86b2190ca8c = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[153], NULL, 1, 0, 0);
    codeobj_7a49dc5fd9b8e3be8dc8a16651ec2caa = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[153], NULL, 1, 0, 0);
    codeobj_dd284e14c8880659eae97a97d5480ad5 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[153], NULL, 1, 0, 0);
    codeobj_31901981ed8d82b2303ede7758601ec0 = MAKE_CODE_OBJECT(module_filename_obj, 542, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[153], NULL, 1, 0, 0);
    codeobj_a6bb66c9692b4719887bba0e46da7892 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[153], NULL, 1, 0, 0);
    codeobj_74ce9b6d343a1cbe736d831648e60624 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[153], NULL, 1, 0, 0);
    codeobj_2c82e23890a0753427cbb5d89d2d0c85 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[153], NULL, 1, 0, 0);
    codeobj_741cf27ea39791b98b841b8077658855 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[153], NULL, 1, 0, 0);
    codeobj_fa8a96e01f90563e796280a1190db63c = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[153], NULL, 1, 0, 0);
    codeobj_433875ea2e7bc4b83c129942dab4172e = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[153], NULL, 1, 0, 0);
    codeobj_96bfbe52e29a415cd0c6650eeadccc12 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[153], NULL, 1, 0, 0);
    codeobj_32b29e678f66e73539e859d470b3971b = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[153], NULL, 1, 0, 0);
    codeobj_55f780d2360f74dfd31f21d8265584ef = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[153], NULL, 1, 0, 0);
    codeobj_30fc988b0766bc3fb57270fa50f8722b = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[153], NULL, 1, 0, 0);
    codeobj_6433284a6519e27bba813d7d085e623c = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[153], NULL, 1, 0, 0);
    codeobj_47f9acfd775047c98c39f23a596d0752 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[153], NULL, 1, 0, 0);
    codeobj_d2c9ab2a2b34f2c16983a76e912dea66 = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[153], NULL, 1, 0, 0);
    codeobj_09fa39df796c3b9afa8d45bb5155c7d1 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[153], NULL, 1, 0, 0);
    codeobj_1cf1e1d902329cfe98de5006b69121cb = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[153], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__10_is_uint8();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__11_is_uint16();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__12_is_uint32();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__13_is_uint64();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__14_is_floating();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__15_is_float16();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__16_is_float32();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__17_is_float64();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__18_is_list();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__19_is_large_list();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__1_is_null();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__20_is_fixed_size_list();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__21_is_struct();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__22_is_union();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__23_is_nested();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__24_is_temporal();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__25_is_timestamp();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__26_is_duration();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__27_is_time();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__28_is_time32();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__29_is_time64();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__2_is_boolean();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__30_is_binary();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__31_is_large_binary();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__32_is_unicode();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__33_is_string();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__34_is_large_unicode();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__35_is_large_string();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__36_is_fixed_size_binary();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__37_is_date();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__38_is_date32();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__39_is_date64();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__3_is_integer();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__40_is_map();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__41_is_decimal();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__42_is_decimal128();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__43_is_decimal256();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__44_is_dictionary();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__45_is_interval();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__46_is_primitive();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__4_is_signed_integer();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__5_is_unsigned_integer();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__6_is_int8();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__7_is_int16();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__8_is_int32();


static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__9_is_int64();


// The module function definitions.
static PyObject *impl_pyarrow$types$$$function__1_is_null(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_dd284e14c8880659eae97a97d5480ad5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd284e14c8880659eae97a97d5480ad5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd284e14c8880659eae97a97d5480ad5)) {
        Py_XDECREF(cache_frame_dd284e14c8880659eae97a97d5480ad5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd284e14c8880659eae97a97d5480ad5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd284e14c8880659eae97a97d5480ad5 = MAKE_FUNCTION_FRAME(codeobj_dd284e14c8880659eae97a97d5480ad5, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd284e14c8880659eae97a97d5480ad5->m_type_description == NULL);
    frame_dd284e14c8880659eae97a97d5480ad5 = cache_frame_dd284e14c8880659eae97a97d5480ad5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd284e14c8880659eae97a97d5480ad5);
    assert(Py_REFCNT(frame_dd284e14c8880659eae97a97d5480ad5) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
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
        exception_tb = MAKE_TRACEBACK(frame_dd284e14c8880659eae97a97d5480ad5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd284e14c8880659eae97a97d5480ad5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd284e14c8880659eae97a97d5480ad5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd284e14c8880659eae97a97d5480ad5,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_dd284e14c8880659eae97a97d5480ad5 == cache_frame_dd284e14c8880659eae97a97d5480ad5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd284e14c8880659eae97a97d5480ad5);
        cache_frame_dd284e14c8880659eae97a97d5480ad5 = NULL;
    }

    assertFrameObject(frame_dd284e14c8880659eae97a97d5480ad5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__2_is_boolean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_908b01bf7f8b767c5d4d0404433c9ffe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_908b01bf7f8b767c5d4d0404433c9ffe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_908b01bf7f8b767c5d4d0404433c9ffe)) {
        Py_XDECREF(cache_frame_908b01bf7f8b767c5d4d0404433c9ffe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_908b01bf7f8b767c5d4d0404433c9ffe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_908b01bf7f8b767c5d4d0404433c9ffe = MAKE_FUNCTION_FRAME(codeobj_908b01bf7f8b767c5d4d0404433c9ffe, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_908b01bf7f8b767c5d4d0404433c9ffe->m_type_description == NULL);
    frame_908b01bf7f8b767c5d4d0404433c9ffe = cache_frame_908b01bf7f8b767c5d4d0404433c9ffe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_908b01bf7f8b767c5d4d0404433c9ffe);
    assert(Py_REFCNT(frame_908b01bf7f8b767c5d4d0404433c9ffe) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
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
        exception_tb = MAKE_TRACEBACK(frame_908b01bf7f8b767c5d4d0404433c9ffe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_908b01bf7f8b767c5d4d0404433c9ffe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_908b01bf7f8b767c5d4d0404433c9ffe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_908b01bf7f8b767c5d4d0404433c9ffe,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_908b01bf7f8b767c5d4d0404433c9ffe == cache_frame_908b01bf7f8b767c5d4d0404433c9ffe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_908b01bf7f8b767c5d4d0404433c9ffe);
        cache_frame_908b01bf7f8b767c5d4d0404433c9ffe = NULL;
    }

    assertFrameObject(frame_908b01bf7f8b767c5d4d0404433c9ffe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__3_is_integer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_6960093f8367969085e186aca178a463;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6960093f8367969085e186aca178a463 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6960093f8367969085e186aca178a463)) {
        Py_XDECREF(cache_frame_6960093f8367969085e186aca178a463);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6960093f8367969085e186aca178a463 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6960093f8367969085e186aca178a463 = MAKE_FUNCTION_FRAME(codeobj_6960093f8367969085e186aca178a463, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6960093f8367969085e186aca178a463->m_type_description == NULL);
    frame_6960093f8367969085e186aca178a463 = cache_frame_6960093f8367969085e186aca178a463;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6960093f8367969085e186aca178a463);
    assert(Py_REFCNT(frame_6960093f8367969085e186aca178a463) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_6960093f8367969085e186aca178a463, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6960093f8367969085e186aca178a463->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6960093f8367969085e186aca178a463, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6960093f8367969085e186aca178a463,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_6960093f8367969085e186aca178a463 == cache_frame_6960093f8367969085e186aca178a463) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6960093f8367969085e186aca178a463);
        cache_frame_6960093f8367969085e186aca178a463 = NULL;
    }

    assertFrameObject(frame_6960093f8367969085e186aca178a463);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__4_is_signed_integer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_a6bb66c9692b4719887bba0e46da7892;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a6bb66c9692b4719887bba0e46da7892 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a6bb66c9692b4719887bba0e46da7892)) {
        Py_XDECREF(cache_frame_a6bb66c9692b4719887bba0e46da7892);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6bb66c9692b4719887bba0e46da7892 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6bb66c9692b4719887bba0e46da7892 = MAKE_FUNCTION_FRAME(codeobj_a6bb66c9692b4719887bba0e46da7892, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a6bb66c9692b4719887bba0e46da7892->m_type_description == NULL);
    frame_a6bb66c9692b4719887bba0e46da7892 = cache_frame_a6bb66c9692b4719887bba0e46da7892;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a6bb66c9692b4719887bba0e46da7892);
    assert(Py_REFCNT(frame_a6bb66c9692b4719887bba0e46da7892) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_a6bb66c9692b4719887bba0e46da7892, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6bb66c9692b4719887bba0e46da7892->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6bb66c9692b4719887bba0e46da7892, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6bb66c9692b4719887bba0e46da7892,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_a6bb66c9692b4719887bba0e46da7892 == cache_frame_a6bb66c9692b4719887bba0e46da7892) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a6bb66c9692b4719887bba0e46da7892);
        cache_frame_a6bb66c9692b4719887bba0e46da7892 = NULL;
    }

    assertFrameObject(frame_a6bb66c9692b4719887bba0e46da7892);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__5_is_unsigned_integer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_1cf1e1d902329cfe98de5006b69121cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1cf1e1d902329cfe98de5006b69121cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1cf1e1d902329cfe98de5006b69121cb)) {
        Py_XDECREF(cache_frame_1cf1e1d902329cfe98de5006b69121cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cf1e1d902329cfe98de5006b69121cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cf1e1d902329cfe98de5006b69121cb = MAKE_FUNCTION_FRAME(codeobj_1cf1e1d902329cfe98de5006b69121cb, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1cf1e1d902329cfe98de5006b69121cb->m_type_description == NULL);
    frame_1cf1e1d902329cfe98de5006b69121cb = cache_frame_1cf1e1d902329cfe98de5006b69121cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1cf1e1d902329cfe98de5006b69121cb);
    assert(Py_REFCNT(frame_1cf1e1d902329cfe98de5006b69121cb) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_1cf1e1d902329cfe98de5006b69121cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cf1e1d902329cfe98de5006b69121cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cf1e1d902329cfe98de5006b69121cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cf1e1d902329cfe98de5006b69121cb,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_1cf1e1d902329cfe98de5006b69121cb == cache_frame_1cf1e1d902329cfe98de5006b69121cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1cf1e1d902329cfe98de5006b69121cb);
        cache_frame_1cf1e1d902329cfe98de5006b69121cb = NULL;
    }

    assertFrameObject(frame_1cf1e1d902329cfe98de5006b69121cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__6_is_int8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_7682884720251632f72f34cc7a59035f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7682884720251632f72f34cc7a59035f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7682884720251632f72f34cc7a59035f)) {
        Py_XDECREF(cache_frame_7682884720251632f72f34cc7a59035f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7682884720251632f72f34cc7a59035f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7682884720251632f72f34cc7a59035f = MAKE_FUNCTION_FRAME(codeobj_7682884720251632f72f34cc7a59035f, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7682884720251632f72f34cc7a59035f->m_type_description == NULL);
    frame_7682884720251632f72f34cc7a59035f = cache_frame_7682884720251632f72f34cc7a59035f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7682884720251632f72f34cc7a59035f);
    assert(Py_REFCNT(frame_7682884720251632f72f34cc7a59035f) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
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
        exception_tb = MAKE_TRACEBACK(frame_7682884720251632f72f34cc7a59035f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7682884720251632f72f34cc7a59035f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7682884720251632f72f34cc7a59035f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7682884720251632f72f34cc7a59035f,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_7682884720251632f72f34cc7a59035f == cache_frame_7682884720251632f72f34cc7a59035f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7682884720251632f72f34cc7a59035f);
        cache_frame_7682884720251632f72f34cc7a59035f = NULL;
    }

    assertFrameObject(frame_7682884720251632f72f34cc7a59035f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__7_is_int16(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_610b58fc627b76af4f0a71859c80f6c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_610b58fc627b76af4f0a71859c80f6c5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_610b58fc627b76af4f0a71859c80f6c5)) {
        Py_XDECREF(cache_frame_610b58fc627b76af4f0a71859c80f6c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_610b58fc627b76af4f0a71859c80f6c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_610b58fc627b76af4f0a71859c80f6c5 = MAKE_FUNCTION_FRAME(codeobj_610b58fc627b76af4f0a71859c80f6c5, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_610b58fc627b76af4f0a71859c80f6c5->m_type_description == NULL);
    frame_610b58fc627b76af4f0a71859c80f6c5 = cache_frame_610b58fc627b76af4f0a71859c80f6c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_610b58fc627b76af4f0a71859c80f6c5);
    assert(Py_REFCNT(frame_610b58fc627b76af4f0a71859c80f6c5) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_610b58fc627b76af4f0a71859c80f6c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_610b58fc627b76af4f0a71859c80f6c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_610b58fc627b76af4f0a71859c80f6c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_610b58fc627b76af4f0a71859c80f6c5,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_610b58fc627b76af4f0a71859c80f6c5 == cache_frame_610b58fc627b76af4f0a71859c80f6c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_610b58fc627b76af4f0a71859c80f6c5);
        cache_frame_610b58fc627b76af4f0a71859c80f6c5 = NULL;
    }

    assertFrameObject(frame_610b58fc627b76af4f0a71859c80f6c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__8_is_int32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_8c2eb1ca8f9931fe9e3abaec77cf5236;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236)) {
        Py_XDECREF(cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236 = MAKE_FUNCTION_FRAME(codeobj_8c2eb1ca8f9931fe9e3abaec77cf5236, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236->m_type_description == NULL);
    frame_8c2eb1ca8f9931fe9e3abaec77cf5236 = cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c2eb1ca8f9931fe9e3abaec77cf5236);
    assert(Py_REFCNT(frame_8c2eb1ca8f9931fe9e3abaec77cf5236) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_8c2eb1ca8f9931fe9e3abaec77cf5236, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c2eb1ca8f9931fe9e3abaec77cf5236->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c2eb1ca8f9931fe9e3abaec77cf5236, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c2eb1ca8f9931fe9e3abaec77cf5236,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_8c2eb1ca8f9931fe9e3abaec77cf5236 == cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236);
        cache_frame_8c2eb1ca8f9931fe9e3abaec77cf5236 = NULL;
    }

    assertFrameObject(frame_8c2eb1ca8f9931fe9e3abaec77cf5236);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__9_is_int64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_b147c071aa428817ab890e2f55988130;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b147c071aa428817ab890e2f55988130 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b147c071aa428817ab890e2f55988130)) {
        Py_XDECREF(cache_frame_b147c071aa428817ab890e2f55988130);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b147c071aa428817ab890e2f55988130 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b147c071aa428817ab890e2f55988130 = MAKE_FUNCTION_FRAME(codeobj_b147c071aa428817ab890e2f55988130, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b147c071aa428817ab890e2f55988130->m_type_description == NULL);
    frame_b147c071aa428817ab890e2f55988130 = cache_frame_b147c071aa428817ab890e2f55988130;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b147c071aa428817ab890e2f55988130);
    assert(Py_REFCNT(frame_b147c071aa428817ab890e2f55988130) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_b147c071aa428817ab890e2f55988130, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b147c071aa428817ab890e2f55988130->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b147c071aa428817ab890e2f55988130, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b147c071aa428817ab890e2f55988130,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_b147c071aa428817ab890e2f55988130 == cache_frame_b147c071aa428817ab890e2f55988130) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b147c071aa428817ab890e2f55988130);
        cache_frame_b147c071aa428817ab890e2f55988130 = NULL;
    }

    assertFrameObject(frame_b147c071aa428817ab890e2f55988130);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__10_is_uint8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_47f9acfd775047c98c39f23a596d0752;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47f9acfd775047c98c39f23a596d0752 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47f9acfd775047c98c39f23a596d0752)) {
        Py_XDECREF(cache_frame_47f9acfd775047c98c39f23a596d0752);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47f9acfd775047c98c39f23a596d0752 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47f9acfd775047c98c39f23a596d0752 = MAKE_FUNCTION_FRAME(codeobj_47f9acfd775047c98c39f23a596d0752, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47f9acfd775047c98c39f23a596d0752->m_type_description == NULL);
    frame_47f9acfd775047c98c39f23a596d0752 = cache_frame_47f9acfd775047c98c39f23a596d0752;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47f9acfd775047c98c39f23a596d0752);
    assert(Py_REFCNT(frame_47f9acfd775047c98c39f23a596d0752) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_47f9acfd775047c98c39f23a596d0752, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47f9acfd775047c98c39f23a596d0752->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47f9acfd775047c98c39f23a596d0752, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47f9acfd775047c98c39f23a596d0752,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_47f9acfd775047c98c39f23a596d0752 == cache_frame_47f9acfd775047c98c39f23a596d0752) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47f9acfd775047c98c39f23a596d0752);
        cache_frame_47f9acfd775047c98c39f23a596d0752 = NULL;
    }

    assertFrameObject(frame_47f9acfd775047c98c39f23a596d0752);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__11_is_uint16(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_55f780d2360f74dfd31f21d8265584ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55f780d2360f74dfd31f21d8265584ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55f780d2360f74dfd31f21d8265584ef)) {
        Py_XDECREF(cache_frame_55f780d2360f74dfd31f21d8265584ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55f780d2360f74dfd31f21d8265584ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55f780d2360f74dfd31f21d8265584ef = MAKE_FUNCTION_FRAME(codeobj_55f780d2360f74dfd31f21d8265584ef, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55f780d2360f74dfd31f21d8265584ef->m_type_description == NULL);
    frame_55f780d2360f74dfd31f21d8265584ef = cache_frame_55f780d2360f74dfd31f21d8265584ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_55f780d2360f74dfd31f21d8265584ef);
    assert(Py_REFCNT(frame_55f780d2360f74dfd31f21d8265584ef) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_55f780d2360f74dfd31f21d8265584ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55f780d2360f74dfd31f21d8265584ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55f780d2360f74dfd31f21d8265584ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55f780d2360f74dfd31f21d8265584ef,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_55f780d2360f74dfd31f21d8265584ef == cache_frame_55f780d2360f74dfd31f21d8265584ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55f780d2360f74dfd31f21d8265584ef);
        cache_frame_55f780d2360f74dfd31f21d8265584ef = NULL;
    }

    assertFrameObject(frame_55f780d2360f74dfd31f21d8265584ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__12_is_uint32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_30fc988b0766bc3fb57270fa50f8722b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30fc988b0766bc3fb57270fa50f8722b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30fc988b0766bc3fb57270fa50f8722b)) {
        Py_XDECREF(cache_frame_30fc988b0766bc3fb57270fa50f8722b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30fc988b0766bc3fb57270fa50f8722b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30fc988b0766bc3fb57270fa50f8722b = MAKE_FUNCTION_FRAME(codeobj_30fc988b0766bc3fb57270fa50f8722b, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30fc988b0766bc3fb57270fa50f8722b->m_type_description == NULL);
    frame_30fc988b0766bc3fb57270fa50f8722b = cache_frame_30fc988b0766bc3fb57270fa50f8722b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30fc988b0766bc3fb57270fa50f8722b);
    assert(Py_REFCNT(frame_30fc988b0766bc3fb57270fa50f8722b) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
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
        exception_tb = MAKE_TRACEBACK(frame_30fc988b0766bc3fb57270fa50f8722b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30fc988b0766bc3fb57270fa50f8722b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30fc988b0766bc3fb57270fa50f8722b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30fc988b0766bc3fb57270fa50f8722b,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_30fc988b0766bc3fb57270fa50f8722b == cache_frame_30fc988b0766bc3fb57270fa50f8722b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30fc988b0766bc3fb57270fa50f8722b);
        cache_frame_30fc988b0766bc3fb57270fa50f8722b = NULL;
    }

    assertFrameObject(frame_30fc988b0766bc3fb57270fa50f8722b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__13_is_uint64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_6433284a6519e27bba813d7d085e623c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6433284a6519e27bba813d7d085e623c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6433284a6519e27bba813d7d085e623c)) {
        Py_XDECREF(cache_frame_6433284a6519e27bba813d7d085e623c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6433284a6519e27bba813d7d085e623c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6433284a6519e27bba813d7d085e623c = MAKE_FUNCTION_FRAME(codeobj_6433284a6519e27bba813d7d085e623c, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6433284a6519e27bba813d7d085e623c->m_type_description == NULL);
    frame_6433284a6519e27bba813d7d085e623c = cache_frame_6433284a6519e27bba813d7d085e623c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6433284a6519e27bba813d7d085e623c);
    assert(Py_REFCNT(frame_6433284a6519e27bba813d7d085e623c) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_6433284a6519e27bba813d7d085e623c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6433284a6519e27bba813d7d085e623c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6433284a6519e27bba813d7d085e623c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6433284a6519e27bba813d7d085e623c,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_6433284a6519e27bba813d7d085e623c == cache_frame_6433284a6519e27bba813d7d085e623c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6433284a6519e27bba813d7d085e623c);
        cache_frame_6433284a6519e27bba813d7d085e623c = NULL;
    }

    assertFrameObject(frame_6433284a6519e27bba813d7d085e623c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__14_is_floating(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_ac4c64ff725782364130af610e4bdfcb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ac4c64ff725782364130af610e4bdfcb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac4c64ff725782364130af610e4bdfcb)) {
        Py_XDECREF(cache_frame_ac4c64ff725782364130af610e4bdfcb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac4c64ff725782364130af610e4bdfcb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac4c64ff725782364130af610e4bdfcb = MAKE_FUNCTION_FRAME(codeobj_ac4c64ff725782364130af610e4bdfcb, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac4c64ff725782364130af610e4bdfcb->m_type_description == NULL);
    frame_ac4c64ff725782364130af610e4bdfcb = cache_frame_ac4c64ff725782364130af610e4bdfcb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac4c64ff725782364130af610e4bdfcb);
    assert(Py_REFCNT(frame_ac4c64ff725782364130af610e4bdfcb) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_ac4c64ff725782364130af610e4bdfcb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac4c64ff725782364130af610e4bdfcb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac4c64ff725782364130af610e4bdfcb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac4c64ff725782364130af610e4bdfcb,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_ac4c64ff725782364130af610e4bdfcb == cache_frame_ac4c64ff725782364130af610e4bdfcb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac4c64ff725782364130af610e4bdfcb);
        cache_frame_ac4c64ff725782364130af610e4bdfcb = NULL;
    }

    assertFrameObject(frame_ac4c64ff725782364130af610e4bdfcb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__15_is_float16(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_51e8aaaba864658b352b4aa39e06cf55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51e8aaaba864658b352b4aa39e06cf55 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51e8aaaba864658b352b4aa39e06cf55)) {
        Py_XDECREF(cache_frame_51e8aaaba864658b352b4aa39e06cf55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51e8aaaba864658b352b4aa39e06cf55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51e8aaaba864658b352b4aa39e06cf55 = MAKE_FUNCTION_FRAME(codeobj_51e8aaaba864658b352b4aa39e06cf55, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51e8aaaba864658b352b4aa39e06cf55->m_type_description == NULL);
    frame_51e8aaaba864658b352b4aa39e06cf55 = cache_frame_51e8aaaba864658b352b4aa39e06cf55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51e8aaaba864658b352b4aa39e06cf55);
    assert(Py_REFCNT(frame_51e8aaaba864658b352b4aa39e06cf55) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 208;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 208;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
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
        exception_tb = MAKE_TRACEBACK(frame_51e8aaaba864658b352b4aa39e06cf55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51e8aaaba864658b352b4aa39e06cf55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51e8aaaba864658b352b4aa39e06cf55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51e8aaaba864658b352b4aa39e06cf55,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_51e8aaaba864658b352b4aa39e06cf55 == cache_frame_51e8aaaba864658b352b4aa39e06cf55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51e8aaaba864658b352b4aa39e06cf55);
        cache_frame_51e8aaaba864658b352b4aa39e06cf55 = NULL;
    }

    assertFrameObject(frame_51e8aaaba864658b352b4aa39e06cf55);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__16_is_float32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_ae71920d9fd52d7c4e28040f6351980d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae71920d9fd52d7c4e28040f6351980d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae71920d9fd52d7c4e28040f6351980d)) {
        Py_XDECREF(cache_frame_ae71920d9fd52d7c4e28040f6351980d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae71920d9fd52d7c4e28040f6351980d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae71920d9fd52d7c4e28040f6351980d = MAKE_FUNCTION_FRAME(codeobj_ae71920d9fd52d7c4e28040f6351980d, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae71920d9fd52d7c4e28040f6351980d->m_type_description == NULL);
    frame_ae71920d9fd52d7c4e28040f6351980d = cache_frame_ae71920d9fd52d7c4e28040f6351980d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ae71920d9fd52d7c4e28040f6351980d);
    assert(Py_REFCNT(frame_ae71920d9fd52d7c4e28040f6351980d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_ae71920d9fd52d7c4e28040f6351980d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae71920d9fd52d7c4e28040f6351980d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae71920d9fd52d7c4e28040f6351980d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae71920d9fd52d7c4e28040f6351980d,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_ae71920d9fd52d7c4e28040f6351980d == cache_frame_ae71920d9fd52d7c4e28040f6351980d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae71920d9fd52d7c4e28040f6351980d);
        cache_frame_ae71920d9fd52d7c4e28040f6351980d = NULL;
    }

    assertFrameObject(frame_ae71920d9fd52d7c4e28040f6351980d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__17_is_float64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_1f9217e493fcb74392b41a70247ecb9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f9217e493fcb74392b41a70247ecb9b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1f9217e493fcb74392b41a70247ecb9b)) {
        Py_XDECREF(cache_frame_1f9217e493fcb74392b41a70247ecb9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1f9217e493fcb74392b41a70247ecb9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1f9217e493fcb74392b41a70247ecb9b = MAKE_FUNCTION_FRAME(codeobj_1f9217e493fcb74392b41a70247ecb9b, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1f9217e493fcb74392b41a70247ecb9b->m_type_description == NULL);
    frame_1f9217e493fcb74392b41a70247ecb9b = cache_frame_1f9217e493fcb74392b41a70247ecb9b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1f9217e493fcb74392b41a70247ecb9b);
    assert(Py_REFCNT(frame_1f9217e493fcb74392b41a70247ecb9b) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
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
        exception_tb = MAKE_TRACEBACK(frame_1f9217e493fcb74392b41a70247ecb9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f9217e493fcb74392b41a70247ecb9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f9217e493fcb74392b41a70247ecb9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1f9217e493fcb74392b41a70247ecb9b,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_1f9217e493fcb74392b41a70247ecb9b == cache_frame_1f9217e493fcb74392b41a70247ecb9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1f9217e493fcb74392b41a70247ecb9b);
        cache_frame_1f9217e493fcb74392b41a70247ecb9b = NULL;
    }

    assertFrameObject(frame_1f9217e493fcb74392b41a70247ecb9b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__18_is_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_1aab69249b0342b29b1d700779881858;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1aab69249b0342b29b1d700779881858 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1aab69249b0342b29b1d700779881858)) {
        Py_XDECREF(cache_frame_1aab69249b0342b29b1d700779881858);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1aab69249b0342b29b1d700779881858 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1aab69249b0342b29b1d700779881858 = MAKE_FUNCTION_FRAME(codeobj_1aab69249b0342b29b1d700779881858, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1aab69249b0342b29b1d700779881858->m_type_description == NULL);
    frame_1aab69249b0342b29b1d700779881858 = cache_frame_1aab69249b0342b29b1d700779881858;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1aab69249b0342b29b1d700779881858);
    assert(Py_REFCNT(frame_1aab69249b0342b29b1d700779881858) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_1aab69249b0342b29b1d700779881858, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1aab69249b0342b29b1d700779881858->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1aab69249b0342b29b1d700779881858, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1aab69249b0342b29b1d700779881858,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_1aab69249b0342b29b1d700779881858 == cache_frame_1aab69249b0342b29b1d700779881858) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1aab69249b0342b29b1d700779881858);
        cache_frame_1aab69249b0342b29b1d700779881858 = NULL;
    }

    assertFrameObject(frame_1aab69249b0342b29b1d700779881858);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__19_is_large_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_d550dafc37dbdc0ca2fc0d14ac001005;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d550dafc37dbdc0ca2fc0d14ac001005 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d550dafc37dbdc0ca2fc0d14ac001005)) {
        Py_XDECREF(cache_frame_d550dafc37dbdc0ca2fc0d14ac001005);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d550dafc37dbdc0ca2fc0d14ac001005 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d550dafc37dbdc0ca2fc0d14ac001005 = MAKE_FUNCTION_FRAME(codeobj_d550dafc37dbdc0ca2fc0d14ac001005, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d550dafc37dbdc0ca2fc0d14ac001005->m_type_description == NULL);
    frame_d550dafc37dbdc0ca2fc0d14ac001005 = cache_frame_d550dafc37dbdc0ca2fc0d14ac001005;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d550dafc37dbdc0ca2fc0d14ac001005);
    assert(Py_REFCNT(frame_d550dafc37dbdc0ca2fc0d14ac001005) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[38]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_d550dafc37dbdc0ca2fc0d14ac001005, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d550dafc37dbdc0ca2fc0d14ac001005->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d550dafc37dbdc0ca2fc0d14ac001005, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d550dafc37dbdc0ca2fc0d14ac001005,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_d550dafc37dbdc0ca2fc0d14ac001005 == cache_frame_d550dafc37dbdc0ca2fc0d14ac001005) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d550dafc37dbdc0ca2fc0d14ac001005);
        cache_frame_d550dafc37dbdc0ca2fc0d14ac001005 = NULL;
    }

    assertFrameObject(frame_d550dafc37dbdc0ca2fc0d14ac001005);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__20_is_fixed_size_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_ca5fe9c30ed04d255dc853004f073d5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca5fe9c30ed04d255dc853004f073d5d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca5fe9c30ed04d255dc853004f073d5d)) {
        Py_XDECREF(cache_frame_ca5fe9c30ed04d255dc853004f073d5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca5fe9c30ed04d255dc853004f073d5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca5fe9c30ed04d255dc853004f073d5d = MAKE_FUNCTION_FRAME(codeobj_ca5fe9c30ed04d255dc853004f073d5d, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca5fe9c30ed04d255dc853004f073d5d->m_type_description == NULL);
    frame_ca5fe9c30ed04d255dc853004f073d5d = cache_frame_ca5fe9c30ed04d255dc853004f073d5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca5fe9c30ed04d255dc853004f073d5d);
    assert(Py_REFCNT(frame_ca5fe9c30ed04d255dc853004f073d5d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
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
        exception_tb = MAKE_TRACEBACK(frame_ca5fe9c30ed04d255dc853004f073d5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca5fe9c30ed04d255dc853004f073d5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca5fe9c30ed04d255dc853004f073d5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca5fe9c30ed04d255dc853004f073d5d,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_ca5fe9c30ed04d255dc853004f073d5d == cache_frame_ca5fe9c30ed04d255dc853004f073d5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca5fe9c30ed04d255dc853004f073d5d);
        cache_frame_ca5fe9c30ed04d255dc853004f073d5d = NULL;
    }

    assertFrameObject(frame_ca5fe9c30ed04d255dc853004f073d5d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__21_is_struct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_2c82e23890a0753427cbb5d89d2d0c85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c82e23890a0753427cbb5d89d2d0c85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c82e23890a0753427cbb5d89d2d0c85)) {
        Py_XDECREF(cache_frame_2c82e23890a0753427cbb5d89d2d0c85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c82e23890a0753427cbb5d89d2d0c85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c82e23890a0753427cbb5d89d2d0c85 = MAKE_FUNCTION_FRAME(codeobj_2c82e23890a0753427cbb5d89d2d0c85, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c82e23890a0753427cbb5d89d2d0c85->m_type_description == NULL);
    frame_2c82e23890a0753427cbb5d89d2d0c85 = cache_frame_2c82e23890a0753427cbb5d89d2d0c85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c82e23890a0753427cbb5d89d2d0c85);
    assert(Py_REFCNT(frame_2c82e23890a0753427cbb5d89d2d0c85) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
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
        exception_tb = MAKE_TRACEBACK(frame_2c82e23890a0753427cbb5d89d2d0c85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c82e23890a0753427cbb5d89d2d0c85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c82e23890a0753427cbb5d89d2d0c85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c82e23890a0753427cbb5d89d2d0c85,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_2c82e23890a0753427cbb5d89d2d0c85 == cache_frame_2c82e23890a0753427cbb5d89d2d0c85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c82e23890a0753427cbb5d89d2d0c85);
        cache_frame_2c82e23890a0753427cbb5d89d2d0c85 = NULL;
    }

    assertFrameObject(frame_2c82e23890a0753427cbb5d89d2d0c85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__22_is_union(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_09fa39df796c3b9afa8d45bb5155c7d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_09fa39df796c3b9afa8d45bb5155c7d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09fa39df796c3b9afa8d45bb5155c7d1)) {
        Py_XDECREF(cache_frame_09fa39df796c3b9afa8d45bb5155c7d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09fa39df796c3b9afa8d45bb5155c7d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09fa39df796c3b9afa8d45bb5155c7d1 = MAKE_FUNCTION_FRAME(codeobj_09fa39df796c3b9afa8d45bb5155c7d1, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09fa39df796c3b9afa8d45bb5155c7d1->m_type_description == NULL);
    frame_09fa39df796c3b9afa8d45bb5155c7d1 = cache_frame_09fa39df796c3b9afa8d45bb5155c7d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09fa39df796c3b9afa8d45bb5155c7d1);
    assert(Py_REFCNT(frame_09fa39df796c3b9afa8d45bb5155c7d1) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_09fa39df796c3b9afa8d45bb5155c7d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09fa39df796c3b9afa8d45bb5155c7d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09fa39df796c3b9afa8d45bb5155c7d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09fa39df796c3b9afa8d45bb5155c7d1,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_09fa39df796c3b9afa8d45bb5155c7d1 == cache_frame_09fa39df796c3b9afa8d45bb5155c7d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09fa39df796c3b9afa8d45bb5155c7d1);
        cache_frame_09fa39df796c3b9afa8d45bb5155c7d1 = NULL;
    }

    assertFrameObject(frame_09fa39df796c3b9afa8d45bb5155c7d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__23_is_nested(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_7a49dc5fd9b8e3be8dc8a16651ec2caa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa)) {
        Py_XDECREF(cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa = MAKE_FUNCTION_FRAME(codeobj_7a49dc5fd9b8e3be8dc8a16651ec2caa, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa->m_type_description == NULL);
    frame_7a49dc5fd9b8e3be8dc8a16651ec2caa = cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a49dc5fd9b8e3be8dc8a16651ec2caa);
    assert(Py_REFCNT(frame_7a49dc5fd9b8e3be8dc8a16651ec2caa) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_7a49dc5fd9b8e3be8dc8a16651ec2caa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a49dc5fd9b8e3be8dc8a16651ec2caa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a49dc5fd9b8e3be8dc8a16651ec2caa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a49dc5fd9b8e3be8dc8a16651ec2caa,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_7a49dc5fd9b8e3be8dc8a16651ec2caa == cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa);
        cache_frame_7a49dc5fd9b8e3be8dc8a16651ec2caa = NULL;
    }

    assertFrameObject(frame_7a49dc5fd9b8e3be8dc8a16651ec2caa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__24_is_temporal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_741cf27ea39791b98b841b8077658855;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_741cf27ea39791b98b841b8077658855 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_741cf27ea39791b98b841b8077658855)) {
        Py_XDECREF(cache_frame_741cf27ea39791b98b841b8077658855);

#if _DEBUG_REFCOUNTS
        if (cache_frame_741cf27ea39791b98b841b8077658855 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_741cf27ea39791b98b841b8077658855 = MAKE_FUNCTION_FRAME(codeobj_741cf27ea39791b98b841b8077658855, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_741cf27ea39791b98b841b8077658855->m_type_description == NULL);
    frame_741cf27ea39791b98b841b8077658855 = cache_frame_741cf27ea39791b98b841b8077658855;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_741cf27ea39791b98b841b8077658855);
    assert(Py_REFCNT(frame_741cf27ea39791b98b841b8077658855) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_741cf27ea39791b98b841b8077658855, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_741cf27ea39791b98b841b8077658855->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_741cf27ea39791b98b841b8077658855, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_741cf27ea39791b98b841b8077658855,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_741cf27ea39791b98b841b8077658855 == cache_frame_741cf27ea39791b98b841b8077658855) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_741cf27ea39791b98b841b8077658855);
        cache_frame_741cf27ea39791b98b841b8077658855 = NULL;
    }

    assertFrameObject(frame_741cf27ea39791b98b841b8077658855);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__25_is_timestamp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_32b29e678f66e73539e859d470b3971b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32b29e678f66e73539e859d470b3971b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32b29e678f66e73539e859d470b3971b)) {
        Py_XDECREF(cache_frame_32b29e678f66e73539e859d470b3971b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32b29e678f66e73539e859d470b3971b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32b29e678f66e73539e859d470b3971b = MAKE_FUNCTION_FRAME(codeobj_32b29e678f66e73539e859d470b3971b, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32b29e678f66e73539e859d470b3971b->m_type_description == NULL);
    frame_32b29e678f66e73539e859d470b3971b = cache_frame_32b29e678f66e73539e859d470b3971b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32b29e678f66e73539e859d470b3971b);
    assert(Py_REFCNT(frame_32b29e678f66e73539e859d470b3971b) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[50]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_32b29e678f66e73539e859d470b3971b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32b29e678f66e73539e859d470b3971b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32b29e678f66e73539e859d470b3971b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32b29e678f66e73539e859d470b3971b,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_32b29e678f66e73539e859d470b3971b == cache_frame_32b29e678f66e73539e859d470b3971b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32b29e678f66e73539e859d470b3971b);
        cache_frame_32b29e678f66e73539e859d470b3971b = NULL;
    }

    assertFrameObject(frame_32b29e678f66e73539e859d470b3971b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__26_is_duration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_a7b1ec5198692469e32e85e44abc10c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7b1ec5198692469e32e85e44abc10c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7b1ec5198692469e32e85e44abc10c1)) {
        Py_XDECREF(cache_frame_a7b1ec5198692469e32e85e44abc10c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7b1ec5198692469e32e85e44abc10c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7b1ec5198692469e32e85e44abc10c1 = MAKE_FUNCTION_FRAME(codeobj_a7b1ec5198692469e32e85e44abc10c1, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7b1ec5198692469e32e85e44abc10c1->m_type_description == NULL);
    frame_a7b1ec5198692469e32e85e44abc10c1 = cache_frame_a7b1ec5198692469e32e85e44abc10c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a7b1ec5198692469e32e85e44abc10c1);
    assert(Py_REFCNT(frame_a7b1ec5198692469e32e85e44abc10c1) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
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
        exception_tb = MAKE_TRACEBACK(frame_a7b1ec5198692469e32e85e44abc10c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7b1ec5198692469e32e85e44abc10c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7b1ec5198692469e32e85e44abc10c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7b1ec5198692469e32e85e44abc10c1,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_a7b1ec5198692469e32e85e44abc10c1 == cache_frame_a7b1ec5198692469e32e85e44abc10c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7b1ec5198692469e32e85e44abc10c1);
        cache_frame_a7b1ec5198692469e32e85e44abc10c1 = NULL;
    }

    assertFrameObject(frame_a7b1ec5198692469e32e85e44abc10c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__27_is_time(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_fa8a96e01f90563e796280a1190db63c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fa8a96e01f90563e796280a1190db63c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa8a96e01f90563e796280a1190db63c)) {
        Py_XDECREF(cache_frame_fa8a96e01f90563e796280a1190db63c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa8a96e01f90563e796280a1190db63c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa8a96e01f90563e796280a1190db63c = MAKE_FUNCTION_FRAME(codeobj_fa8a96e01f90563e796280a1190db63c, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa8a96e01f90563e796280a1190db63c->m_type_description == NULL);
    frame_fa8a96e01f90563e796280a1190db63c = cache_frame_fa8a96e01f90563e796280a1190db63c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa8a96e01f90563e796280a1190db63c);
    assert(Py_REFCNT(frame_fa8a96e01f90563e796280a1190db63c) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 340;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_fa8a96e01f90563e796280a1190db63c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa8a96e01f90563e796280a1190db63c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa8a96e01f90563e796280a1190db63c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa8a96e01f90563e796280a1190db63c,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_fa8a96e01f90563e796280a1190db63c == cache_frame_fa8a96e01f90563e796280a1190db63c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa8a96e01f90563e796280a1190db63c);
        cache_frame_fa8a96e01f90563e796280a1190db63c = NULL;
    }

    assertFrameObject(frame_fa8a96e01f90563e796280a1190db63c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__28_is_time32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_433875ea2e7bc4b83c129942dab4172e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_433875ea2e7bc4b83c129942dab4172e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_433875ea2e7bc4b83c129942dab4172e)) {
        Py_XDECREF(cache_frame_433875ea2e7bc4b83c129942dab4172e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_433875ea2e7bc4b83c129942dab4172e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_433875ea2e7bc4b83c129942dab4172e = MAKE_FUNCTION_FRAME(codeobj_433875ea2e7bc4b83c129942dab4172e, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_433875ea2e7bc4b83c129942dab4172e->m_type_description == NULL);
    frame_433875ea2e7bc4b83c129942dab4172e = cache_frame_433875ea2e7bc4b83c129942dab4172e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_433875ea2e7bc4b83c129942dab4172e);
    assert(Py_REFCNT(frame_433875ea2e7bc4b83c129942dab4172e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[56]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_433875ea2e7bc4b83c129942dab4172e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_433875ea2e7bc4b83c129942dab4172e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_433875ea2e7bc4b83c129942dab4172e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_433875ea2e7bc4b83c129942dab4172e,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_433875ea2e7bc4b83c129942dab4172e == cache_frame_433875ea2e7bc4b83c129942dab4172e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_433875ea2e7bc4b83c129942dab4172e);
        cache_frame_433875ea2e7bc4b83c129942dab4172e = NULL;
    }

    assertFrameObject(frame_433875ea2e7bc4b83c129942dab4172e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__29_is_time64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_96bfbe52e29a415cd0c6650eeadccc12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96bfbe52e29a415cd0c6650eeadccc12 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96bfbe52e29a415cd0c6650eeadccc12)) {
        Py_XDECREF(cache_frame_96bfbe52e29a415cd0c6650eeadccc12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96bfbe52e29a415cd0c6650eeadccc12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96bfbe52e29a415cd0c6650eeadccc12 = MAKE_FUNCTION_FRAME(codeobj_96bfbe52e29a415cd0c6650eeadccc12, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96bfbe52e29a415cd0c6650eeadccc12->m_type_description == NULL);
    frame_96bfbe52e29a415cd0c6650eeadccc12 = cache_frame_96bfbe52e29a415cd0c6650eeadccc12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96bfbe52e29a415cd0c6650eeadccc12);
    assert(Py_REFCNT(frame_96bfbe52e29a415cd0c6650eeadccc12) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
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
        exception_tb = MAKE_TRACEBACK(frame_96bfbe52e29a415cd0c6650eeadccc12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96bfbe52e29a415cd0c6650eeadccc12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96bfbe52e29a415cd0c6650eeadccc12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96bfbe52e29a415cd0c6650eeadccc12,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_96bfbe52e29a415cd0c6650eeadccc12 == cache_frame_96bfbe52e29a415cd0c6650eeadccc12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96bfbe52e29a415cd0c6650eeadccc12);
        cache_frame_96bfbe52e29a415cd0c6650eeadccc12 = NULL;
    }

    assertFrameObject(frame_96bfbe52e29a415cd0c6650eeadccc12);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__30_is_binary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_76d9f97251426853f2efad72aa9e30fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76d9f97251426853f2efad72aa9e30fb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76d9f97251426853f2efad72aa9e30fb)) {
        Py_XDECREF(cache_frame_76d9f97251426853f2efad72aa9e30fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76d9f97251426853f2efad72aa9e30fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76d9f97251426853f2efad72aa9e30fb = MAKE_FUNCTION_FRAME(codeobj_76d9f97251426853f2efad72aa9e30fb, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76d9f97251426853f2efad72aa9e30fb->m_type_description == NULL);
    frame_76d9f97251426853f2efad72aa9e30fb = cache_frame_76d9f97251426853f2efad72aa9e30fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76d9f97251426853f2efad72aa9e30fb);
    assert(Py_REFCNT(frame_76d9f97251426853f2efad72aa9e30fb) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 373;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[60]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 373;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
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
        exception_tb = MAKE_TRACEBACK(frame_76d9f97251426853f2efad72aa9e30fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76d9f97251426853f2efad72aa9e30fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76d9f97251426853f2efad72aa9e30fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76d9f97251426853f2efad72aa9e30fb,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_76d9f97251426853f2efad72aa9e30fb == cache_frame_76d9f97251426853f2efad72aa9e30fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76d9f97251426853f2efad72aa9e30fb);
        cache_frame_76d9f97251426853f2efad72aa9e30fb = NULL;
    }

    assertFrameObject(frame_76d9f97251426853f2efad72aa9e30fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__31_is_large_binary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_2b425936a92d9777d143e80637d4abaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b425936a92d9777d143e80637d4abaa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b425936a92d9777d143e80637d4abaa)) {
        Py_XDECREF(cache_frame_2b425936a92d9777d143e80637d4abaa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b425936a92d9777d143e80637d4abaa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b425936a92d9777d143e80637d4abaa = MAKE_FUNCTION_FRAME(codeobj_2b425936a92d9777d143e80637d4abaa, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b425936a92d9777d143e80637d4abaa->m_type_description == NULL);
    frame_2b425936a92d9777d143e80637d4abaa = cache_frame_2b425936a92d9777d143e80637d4abaa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b425936a92d9777d143e80637d4abaa);
    assert(Py_REFCNT(frame_2b425936a92d9777d143e80637d4abaa) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
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
        exception_tb = MAKE_TRACEBACK(frame_2b425936a92d9777d143e80637d4abaa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b425936a92d9777d143e80637d4abaa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b425936a92d9777d143e80637d4abaa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b425936a92d9777d143e80637d4abaa,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_2b425936a92d9777d143e80637d4abaa == cache_frame_2b425936a92d9777d143e80637d4abaa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b425936a92d9777d143e80637d4abaa);
        cache_frame_2b425936a92d9777d143e80637d4abaa = NULL;
    }

    assertFrameObject(frame_2b425936a92d9777d143e80637d4abaa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__32_is_unicode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_d2c9ab2a2b34f2c16983a76e912dea66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2c9ab2a2b34f2c16983a76e912dea66 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d2c9ab2a2b34f2c16983a76e912dea66)) {
        Py_XDECREF(cache_frame_d2c9ab2a2b34f2c16983a76e912dea66);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2c9ab2a2b34f2c16983a76e912dea66 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2c9ab2a2b34f2c16983a76e912dea66 = MAKE_FUNCTION_FRAME(codeobj_d2c9ab2a2b34f2c16983a76e912dea66, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d2c9ab2a2b34f2c16983a76e912dea66->m_type_description == NULL);
    frame_d2c9ab2a2b34f2c16983a76e912dea66 = cache_frame_d2c9ab2a2b34f2c16983a76e912dea66;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d2c9ab2a2b34f2c16983a76e912dea66);
    assert(Py_REFCNT(frame_d2c9ab2a2b34f2c16983a76e912dea66) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_args_element_value_1 = par_t;
        frame_d2c9ab2a2b34f2c16983a76e912dea66->m_frame.f_lineno = 396;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
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
        exception_tb = MAKE_TRACEBACK(frame_d2c9ab2a2b34f2c16983a76e912dea66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2c9ab2a2b34f2c16983a76e912dea66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2c9ab2a2b34f2c16983a76e912dea66, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2c9ab2a2b34f2c16983a76e912dea66,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_d2c9ab2a2b34f2c16983a76e912dea66 == cache_frame_d2c9ab2a2b34f2c16983a76e912dea66) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d2c9ab2a2b34f2c16983a76e912dea66);
        cache_frame_d2c9ab2a2b34f2c16983a76e912dea66 = NULL;
    }

    assertFrameObject(frame_d2c9ab2a2b34f2c16983a76e912dea66);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__33_is_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_74ce9b6d343a1cbe736d831648e60624;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74ce9b6d343a1cbe736d831648e60624 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74ce9b6d343a1cbe736d831648e60624)) {
        Py_XDECREF(cache_frame_74ce9b6d343a1cbe736d831648e60624);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74ce9b6d343a1cbe736d831648e60624 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74ce9b6d343a1cbe736d831648e60624 = MAKE_FUNCTION_FRAME(codeobj_74ce9b6d343a1cbe736d831648e60624, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74ce9b6d343a1cbe736d831648e60624->m_type_description == NULL);
    frame_74ce9b6d343a1cbe736d831648e60624 = cache_frame_74ce9b6d343a1cbe736d831648e60624;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_74ce9b6d343a1cbe736d831648e60624);
    assert(Py_REFCNT(frame_74ce9b6d343a1cbe736d831648e60624) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
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
        exception_tb = MAKE_TRACEBACK(frame_74ce9b6d343a1cbe736d831648e60624, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74ce9b6d343a1cbe736d831648e60624->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74ce9b6d343a1cbe736d831648e60624, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74ce9b6d343a1cbe736d831648e60624,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_74ce9b6d343a1cbe736d831648e60624 == cache_frame_74ce9b6d343a1cbe736d831648e60624) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74ce9b6d343a1cbe736d831648e60624);
        cache_frame_74ce9b6d343a1cbe736d831648e60624 = NULL;
    }

    assertFrameObject(frame_74ce9b6d343a1cbe736d831648e60624);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__34_is_large_unicode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_ebc8bbad15d58080b76256be19b4f90a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ebc8bbad15d58080b76256be19b4f90a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ebc8bbad15d58080b76256be19b4f90a)) {
        Py_XDECREF(cache_frame_ebc8bbad15d58080b76256be19b4f90a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebc8bbad15d58080b76256be19b4f90a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebc8bbad15d58080b76256be19b4f90a = MAKE_FUNCTION_FRAME(codeobj_ebc8bbad15d58080b76256be19b4f90a, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebc8bbad15d58080b76256be19b4f90a->m_type_description == NULL);
    frame_ebc8bbad15d58080b76256be19b4f90a = cache_frame_ebc8bbad15d58080b76256be19b4f90a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebc8bbad15d58080b76256be19b4f90a);
    assert(Py_REFCNT(frame_ebc8bbad15d58080b76256be19b4f90a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_args_element_value_1 = par_t;
        frame_ebc8bbad15d58080b76256be19b4f90a->m_frame.f_lineno = 418;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
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
        exception_tb = MAKE_TRACEBACK(frame_ebc8bbad15d58080b76256be19b4f90a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebc8bbad15d58080b76256be19b4f90a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebc8bbad15d58080b76256be19b4f90a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebc8bbad15d58080b76256be19b4f90a,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_ebc8bbad15d58080b76256be19b4f90a == cache_frame_ebc8bbad15d58080b76256be19b4f90a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebc8bbad15d58080b76256be19b4f90a);
        cache_frame_ebc8bbad15d58080b76256be19b4f90a = NULL;
    }

    assertFrameObject(frame_ebc8bbad15d58080b76256be19b4f90a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__35_is_large_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_8a8fe54407fe85ce9f7decc7167f0e36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a8fe54407fe85ce9f7decc7167f0e36 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a8fe54407fe85ce9f7decc7167f0e36)) {
        Py_XDECREF(cache_frame_8a8fe54407fe85ce9f7decc7167f0e36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a8fe54407fe85ce9f7decc7167f0e36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a8fe54407fe85ce9f7decc7167f0e36 = MAKE_FUNCTION_FRAME(codeobj_8a8fe54407fe85ce9f7decc7167f0e36, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a8fe54407fe85ce9f7decc7167f0e36->m_type_description == NULL);
    frame_8a8fe54407fe85ce9f7decc7167f0e36 = cache_frame_8a8fe54407fe85ce9f7decc7167f0e36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a8fe54407fe85ce9f7decc7167f0e36);
    assert(Py_REFCNT(frame_8a8fe54407fe85ce9f7decc7167f0e36) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 429;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[70]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 429;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
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
        exception_tb = MAKE_TRACEBACK(frame_8a8fe54407fe85ce9f7decc7167f0e36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a8fe54407fe85ce9f7decc7167f0e36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a8fe54407fe85ce9f7decc7167f0e36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a8fe54407fe85ce9f7decc7167f0e36,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_8a8fe54407fe85ce9f7decc7167f0e36 == cache_frame_8a8fe54407fe85ce9f7decc7167f0e36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a8fe54407fe85ce9f7decc7167f0e36);
        cache_frame_8a8fe54407fe85ce9f7decc7167f0e36 = NULL;
    }

    assertFrameObject(frame_8a8fe54407fe85ce9f7decc7167f0e36);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__36_is_fixed_size_binary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_9c69cfa08f9754d1070a5c59d7473cee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c69cfa08f9754d1070a5c59d7473cee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c69cfa08f9754d1070a5c59d7473cee)) {
        Py_XDECREF(cache_frame_9c69cfa08f9754d1070a5c59d7473cee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c69cfa08f9754d1070a5c59d7473cee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c69cfa08f9754d1070a5c59d7473cee = MAKE_FUNCTION_FRAME(codeobj_9c69cfa08f9754d1070a5c59d7473cee, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c69cfa08f9754d1070a5c59d7473cee->m_type_description == NULL);
    frame_9c69cfa08f9754d1070a5c59d7473cee = cache_frame_9c69cfa08f9754d1070a5c59d7473cee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c69cfa08f9754d1070a5c59d7473cee);
    assert(Py_REFCNT(frame_9c69cfa08f9754d1070a5c59d7473cee) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 440;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[72]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 440;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
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
        exception_tb = MAKE_TRACEBACK(frame_9c69cfa08f9754d1070a5c59d7473cee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c69cfa08f9754d1070a5c59d7473cee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c69cfa08f9754d1070a5c59d7473cee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c69cfa08f9754d1070a5c59d7473cee,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_9c69cfa08f9754d1070a5c59d7473cee == cache_frame_9c69cfa08f9754d1070a5c59d7473cee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c69cfa08f9754d1070a5c59d7473cee);
        cache_frame_9c69cfa08f9754d1070a5c59d7473cee = NULL;
    }

    assertFrameObject(frame_9c69cfa08f9754d1070a5c59d7473cee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__37_is_date(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_4f19f73a0ebcb53af047a9dc9ab24731;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4f19f73a0ebcb53af047a9dc9ab24731 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f19f73a0ebcb53af047a9dc9ab24731)) {
        Py_XDECREF(cache_frame_4f19f73a0ebcb53af047a9dc9ab24731);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f19f73a0ebcb53af047a9dc9ab24731 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f19f73a0ebcb53af047a9dc9ab24731 = MAKE_FUNCTION_FRAME(codeobj_4f19f73a0ebcb53af047a9dc9ab24731, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f19f73a0ebcb53af047a9dc9ab24731->m_type_description == NULL);
    frame_4f19f73a0ebcb53af047a9dc9ab24731 = cache_frame_4f19f73a0ebcb53af047a9dc9ab24731;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f19f73a0ebcb53af047a9dc9ab24731);
    assert(Py_REFCNT(frame_4f19f73a0ebcb53af047a9dc9ab24731) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 451;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_4f19f73a0ebcb53af047a9dc9ab24731, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f19f73a0ebcb53af047a9dc9ab24731->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f19f73a0ebcb53af047a9dc9ab24731, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f19f73a0ebcb53af047a9dc9ab24731,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_4f19f73a0ebcb53af047a9dc9ab24731 == cache_frame_4f19f73a0ebcb53af047a9dc9ab24731) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f19f73a0ebcb53af047a9dc9ab24731);
        cache_frame_4f19f73a0ebcb53af047a9dc9ab24731 = NULL;
    }

    assertFrameObject(frame_4f19f73a0ebcb53af047a9dc9ab24731);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__38_is_date32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_398500e4456522df880cf06f4b8c0dad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_398500e4456522df880cf06f4b8c0dad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_398500e4456522df880cf06f4b8c0dad)) {
        Py_XDECREF(cache_frame_398500e4456522df880cf06f4b8c0dad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_398500e4456522df880cf06f4b8c0dad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_398500e4456522df880cf06f4b8c0dad = MAKE_FUNCTION_FRAME(codeobj_398500e4456522df880cf06f4b8c0dad, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_398500e4456522df880cf06f4b8c0dad->m_type_description == NULL);
    frame_398500e4456522df880cf06f4b8c0dad = cache_frame_398500e4456522df880cf06f4b8c0dad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_398500e4456522df880cf06f4b8c0dad);
    assert(Py_REFCNT(frame_398500e4456522df880cf06f4b8c0dad) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[76]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
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
        exception_tb = MAKE_TRACEBACK(frame_398500e4456522df880cf06f4b8c0dad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_398500e4456522df880cf06f4b8c0dad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_398500e4456522df880cf06f4b8c0dad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_398500e4456522df880cf06f4b8c0dad,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_398500e4456522df880cf06f4b8c0dad == cache_frame_398500e4456522df880cf06f4b8c0dad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_398500e4456522df880cf06f4b8c0dad);
        cache_frame_398500e4456522df880cf06f4b8c0dad = NULL;
    }

    assertFrameObject(frame_398500e4456522df880cf06f4b8c0dad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__39_is_date64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_dfe504037b799c4b9c793fe189a5141b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dfe504037b799c4b9c793fe189a5141b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dfe504037b799c4b9c793fe189a5141b)) {
        Py_XDECREF(cache_frame_dfe504037b799c4b9c793fe189a5141b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dfe504037b799c4b9c793fe189a5141b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dfe504037b799c4b9c793fe189a5141b = MAKE_FUNCTION_FRAME(codeobj_dfe504037b799c4b9c793fe189a5141b, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dfe504037b799c4b9c793fe189a5141b->m_type_description == NULL);
    frame_dfe504037b799c4b9c793fe189a5141b = cache_frame_dfe504037b799c4b9c793fe189a5141b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dfe504037b799c4b9c793fe189a5141b);
    assert(Py_REFCNT(frame_dfe504037b799c4b9c793fe189a5141b) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 473;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 473;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
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
        exception_tb = MAKE_TRACEBACK(frame_dfe504037b799c4b9c793fe189a5141b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfe504037b799c4b9c793fe189a5141b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfe504037b799c4b9c793fe189a5141b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dfe504037b799c4b9c793fe189a5141b,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_dfe504037b799c4b9c793fe189a5141b == cache_frame_dfe504037b799c4b9c793fe189a5141b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dfe504037b799c4b9c793fe189a5141b);
        cache_frame_dfe504037b799c4b9c793fe189a5141b = NULL;
    }

    assertFrameObject(frame_dfe504037b799c4b9c793fe189a5141b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__40_is_map(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_741350d74238629e7692e86b2190ca8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_741350d74238629e7692e86b2190ca8c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_741350d74238629e7692e86b2190ca8c)) {
        Py_XDECREF(cache_frame_741350d74238629e7692e86b2190ca8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_741350d74238629e7692e86b2190ca8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_741350d74238629e7692e86b2190ca8c = MAKE_FUNCTION_FRAME(codeobj_741350d74238629e7692e86b2190ca8c, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_741350d74238629e7692e86b2190ca8c->m_type_description == NULL);
    frame_741350d74238629e7692e86b2190ca8c = cache_frame_741350d74238629e7692e86b2190ca8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_741350d74238629e7692e86b2190ca8c);
    assert(Py_REFCNT(frame_741350d74238629e7692e86b2190ca8c) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 484;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[80]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 484;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
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
        exception_tb = MAKE_TRACEBACK(frame_741350d74238629e7692e86b2190ca8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_741350d74238629e7692e86b2190ca8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_741350d74238629e7692e86b2190ca8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_741350d74238629e7692e86b2190ca8c,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_741350d74238629e7692e86b2190ca8c == cache_frame_741350d74238629e7692e86b2190ca8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_741350d74238629e7692e86b2190ca8c);
        cache_frame_741350d74238629e7692e86b2190ca8c = NULL;
    }

    assertFrameObject(frame_741350d74238629e7692e86b2190ca8c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__41_is_decimal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_3918aa2a436247f9c7f73779306814df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3918aa2a436247f9c7f73779306814df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3918aa2a436247f9c7f73779306814df)) {
        Py_XDECREF(cache_frame_3918aa2a436247f9c7f73779306814df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3918aa2a436247f9c7f73779306814df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3918aa2a436247f9c7f73779306814df = MAKE_FUNCTION_FRAME(codeobj_3918aa2a436247f9c7f73779306814df, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3918aa2a436247f9c7f73779306814df->m_type_description == NULL);
    frame_3918aa2a436247f9c7f73779306814df = cache_frame_3918aa2a436247f9c7f73779306814df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3918aa2a436247f9c7f73779306814df);
    assert(Py_REFCNT(frame_3918aa2a436247f9c7f73779306814df) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 495;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_3918aa2a436247f9c7f73779306814df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3918aa2a436247f9c7f73779306814df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3918aa2a436247f9c7f73779306814df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3918aa2a436247f9c7f73779306814df,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_3918aa2a436247f9c7f73779306814df == cache_frame_3918aa2a436247f9c7f73779306814df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3918aa2a436247f9c7f73779306814df);
        cache_frame_3918aa2a436247f9c7f73779306814df = NULL;
    }

    assertFrameObject(frame_3918aa2a436247f9c7f73779306814df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__42_is_decimal128(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_10304bf162bc4e59ef5743f7891434d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10304bf162bc4e59ef5743f7891434d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10304bf162bc4e59ef5743f7891434d6)) {
        Py_XDECREF(cache_frame_10304bf162bc4e59ef5743f7891434d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10304bf162bc4e59ef5743f7891434d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10304bf162bc4e59ef5743f7891434d6 = MAKE_FUNCTION_FRAME(codeobj_10304bf162bc4e59ef5743f7891434d6, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10304bf162bc4e59ef5743f7891434d6->m_type_description == NULL);
    frame_10304bf162bc4e59ef5743f7891434d6 = cache_frame_10304bf162bc4e59ef5743f7891434d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_10304bf162bc4e59ef5743f7891434d6);
    assert(Py_REFCNT(frame_10304bf162bc4e59ef5743f7891434d6) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
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
        exception_tb = MAKE_TRACEBACK(frame_10304bf162bc4e59ef5743f7891434d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10304bf162bc4e59ef5743f7891434d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10304bf162bc4e59ef5743f7891434d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10304bf162bc4e59ef5743f7891434d6,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_10304bf162bc4e59ef5743f7891434d6 == cache_frame_10304bf162bc4e59ef5743f7891434d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10304bf162bc4e59ef5743f7891434d6);
        cache_frame_10304bf162bc4e59ef5743f7891434d6 = NULL;
    }

    assertFrameObject(frame_10304bf162bc4e59ef5743f7891434d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__43_is_decimal256(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_ec32eda2af009cd3883731fff83c847e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec32eda2af009cd3883731fff83c847e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec32eda2af009cd3883731fff83c847e)) {
        Py_XDECREF(cache_frame_ec32eda2af009cd3883731fff83c847e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec32eda2af009cd3883731fff83c847e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec32eda2af009cd3883731fff83c847e = MAKE_FUNCTION_FRAME(codeobj_ec32eda2af009cd3883731fff83c847e, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec32eda2af009cd3883731fff83c847e->m_type_description == NULL);
    frame_ec32eda2af009cd3883731fff83c847e = cache_frame_ec32eda2af009cd3883731fff83c847e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec32eda2af009cd3883731fff83c847e);
    assert(Py_REFCNT(frame_ec32eda2af009cd3883731fff83c847e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[85]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
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
        exception_tb = MAKE_TRACEBACK(frame_ec32eda2af009cd3883731fff83c847e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec32eda2af009cd3883731fff83c847e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec32eda2af009cd3883731fff83c847e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec32eda2af009cd3883731fff83c847e,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_ec32eda2af009cd3883731fff83c847e == cache_frame_ec32eda2af009cd3883731fff83c847e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec32eda2af009cd3883731fff83c847e);
        cache_frame_ec32eda2af009cd3883731fff83c847e = NULL;
    }

    assertFrameObject(frame_ec32eda2af009cd3883731fff83c847e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__44_is_dictionary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_168f7e35eb9b43db71787ccfb7b52c1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_168f7e35eb9b43db71787ccfb7b52c1a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_168f7e35eb9b43db71787ccfb7b52c1a)) {
        Py_XDECREF(cache_frame_168f7e35eb9b43db71787ccfb7b52c1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_168f7e35eb9b43db71787ccfb7b52c1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_168f7e35eb9b43db71787ccfb7b52c1a = MAKE_FUNCTION_FRAME(codeobj_168f7e35eb9b43db71787ccfb7b52c1a, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_168f7e35eb9b43db71787ccfb7b52c1a->m_type_description == NULL);
    frame_168f7e35eb9b43db71787ccfb7b52c1a = cache_frame_168f7e35eb9b43db71787ccfb7b52c1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_168f7e35eb9b43db71787ccfb7b52c1a);
    assert(Py_REFCNT(frame_168f7e35eb9b43db71787ccfb7b52c1a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[86]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
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
        exception_tb = MAKE_TRACEBACK(frame_168f7e35eb9b43db71787ccfb7b52c1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_168f7e35eb9b43db71787ccfb7b52c1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_168f7e35eb9b43db71787ccfb7b52c1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_168f7e35eb9b43db71787ccfb7b52c1a,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_168f7e35eb9b43db71787ccfb7b52c1a == cache_frame_168f7e35eb9b43db71787ccfb7b52c1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_168f7e35eb9b43db71787ccfb7b52c1a);
        cache_frame_168f7e35eb9b43db71787ccfb7b52c1a = NULL;
    }

    assertFrameObject(frame_168f7e35eb9b43db71787ccfb7b52c1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__45_is_interval(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_2ba50199574fff03c09ba6fc75291b43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2ba50199574fff03c09ba6fc75291b43 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2ba50199574fff03c09ba6fc75291b43)) {
        Py_XDECREF(cache_frame_2ba50199574fff03c09ba6fc75291b43);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ba50199574fff03c09ba6fc75291b43 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ba50199574fff03c09ba6fc75291b43 = MAKE_FUNCTION_FRAME(codeobj_2ba50199574fff03c09ba6fc75291b43, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ba50199574fff03c09ba6fc75291b43->m_type_description == NULL);
    frame_2ba50199574fff03c09ba6fc75291b43 = cache_frame_2ba50199574fff03c09ba6fc75291b43;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ba50199574fff03c09ba6fc75291b43);
    assert(Py_REFCNT(frame_2ba50199574fff03c09ba6fc75291b43) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[88]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
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
        exception_tb = MAKE_TRACEBACK(frame_2ba50199574fff03c09ba6fc75291b43, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ba50199574fff03c09ba6fc75291b43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ba50199574fff03c09ba6fc75291b43, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ba50199574fff03c09ba6fc75291b43,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_2ba50199574fff03c09ba6fc75291b43 == cache_frame_2ba50199574fff03c09ba6fc75291b43) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ba50199574fff03c09ba6fc75291b43);
        cache_frame_2ba50199574fff03c09ba6fc75291b43 = NULL;
    }

    assertFrameObject(frame_2ba50199574fff03c09ba6fc75291b43);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$types$$$function__46_is_primitive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_31901981ed8d82b2303ede7758601ec0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_31901981ed8d82b2303ede7758601ec0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31901981ed8d82b2303ede7758601ec0)) {
        Py_XDECREF(cache_frame_31901981ed8d82b2303ede7758601ec0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31901981ed8d82b2303ede7758601ec0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31901981ed8d82b2303ede7758601ec0 = MAKE_FUNCTION_FRAME(codeobj_31901981ed8d82b2303ede7758601ec0, module_pyarrow$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31901981ed8d82b2303ede7758601ec0->m_type_description == NULL);
    frame_31901981ed8d82b2303ede7758601ec0 = cache_frame_31901981ed8d82b2303ede7758601ec0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31901981ed8d82b2303ede7758601ec0);
    assert(Py_REFCNT(frame_31901981ed8d82b2303ede7758601ec0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_t);
        tmp_expression_value_2 = par_t;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 550;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_31901981ed8d82b2303ede7758601ec0->m_frame.f_lineno = 550;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
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
        exception_tb = MAKE_TRACEBACK(frame_31901981ed8d82b2303ede7758601ec0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31901981ed8d82b2303ede7758601ec0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31901981ed8d82b2303ede7758601ec0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31901981ed8d82b2303ede7758601ec0,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_31901981ed8d82b2303ede7758601ec0 == cache_frame_31901981ed8d82b2303ede7758601ec0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31901981ed8d82b2303ede7758601ec0);
        cache_frame_31901981ed8d82b2303ede7758601ec0 = NULL;
    }

    assertFrameObject(frame_31901981ed8d82b2303ede7758601ec0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__10_is_uint8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__10_is_uint8,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_47f9acfd775047c98c39f23a596d0752,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__11_is_uint16() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__11_is_uint16,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_55f780d2360f74dfd31f21d8265584ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__12_is_uint32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__12_is_uint32,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_30fc988b0766bc3fb57270fa50f8722b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__13_is_uint64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__13_is_uint64,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6433284a6519e27bba813d7d085e623c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__14_is_floating() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__14_is_floating,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac4c64ff725782364130af610e4bdfcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__15_is_float16() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__15_is_float16,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51e8aaaba864658b352b4aa39e06cf55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__16_is_float32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__16_is_float32,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae71920d9fd52d7c4e28040f6351980d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__17_is_float64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__17_is_float64,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f9217e493fcb74392b41a70247ecb9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__18_is_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__18_is_list,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1aab69249b0342b29b1d700779881858,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__19_is_large_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__19_is_large_list,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d550dafc37dbdc0ca2fc0d14ac001005,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__1_is_null() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__1_is_null,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd284e14c8880659eae97a97d5480ad5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__20_is_fixed_size_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__20_is_fixed_size_list,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca5fe9c30ed04d255dc853004f073d5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__21_is_struct() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__21_is_struct,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c82e23890a0753427cbb5d89d2d0c85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__22_is_union() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__22_is_union,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_09fa39df796c3b9afa8d45bb5155c7d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__23_is_nested() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__23_is_nested,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a49dc5fd9b8e3be8dc8a16651ec2caa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__24_is_temporal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__24_is_temporal,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_741cf27ea39791b98b841b8077658855,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__25_is_timestamp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__25_is_timestamp,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32b29e678f66e73539e859d470b3971b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__26_is_duration() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__26_is_duration,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7b1ec5198692469e32e85e44abc10c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__27_is_time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__27_is_time,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa8a96e01f90563e796280a1190db63c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__28_is_time32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__28_is_time32,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_433875ea2e7bc4b83c129942dab4172e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__29_is_time64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__29_is_time64,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96bfbe52e29a415cd0c6650eeadccc12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__2_is_boolean() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__2_is_boolean,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_908b01bf7f8b767c5d4d0404433c9ffe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__30_is_binary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__30_is_binary,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76d9f97251426853f2efad72aa9e30fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__31_is_large_binary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__31_is_large_binary,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2b425936a92d9777d143e80637d4abaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__32_is_unicode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__32_is_unicode,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2c9ab2a2b34f2c16983a76e912dea66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__33_is_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__33_is_string,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74ce9b6d343a1cbe736d831648e60624,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__34_is_large_unicode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__34_is_large_unicode,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ebc8bbad15d58080b76256be19b4f90a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__35_is_large_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__35_is_large_string,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8a8fe54407fe85ce9f7decc7167f0e36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__36_is_fixed_size_binary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__36_is_fixed_size_binary,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9c69cfa08f9754d1070a5c59d7473cee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__37_is_date() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__37_is_date,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f19f73a0ebcb53af047a9dc9ab24731,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__38_is_date32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__38_is_date32,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_398500e4456522df880cf06f4b8c0dad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__39_is_date64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__39_is_date64,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dfe504037b799c4b9c793fe189a5141b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__3_is_integer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__3_is_integer,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6960093f8367969085e186aca178a463,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__40_is_map() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__40_is_map,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_741350d74238629e7692e86b2190ca8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__41_is_decimal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__41_is_decimal,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3918aa2a436247f9c7f73779306814df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__42_is_decimal128() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__42_is_decimal128,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10304bf162bc4e59ef5743f7891434d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__43_is_decimal256() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__43_is_decimal256,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec32eda2af009cd3883731fff83c847e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__44_is_dictionary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__44_is_dictionary,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_168f7e35eb9b43db71787ccfb7b52c1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__45_is_interval() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__45_is_interval,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ba50199574fff03c09ba6fc75291b43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__46_is_primitive() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__46_is_primitive,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_31901981ed8d82b2303ede7758601ec0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__4_is_signed_integer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__4_is_signed_integer,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a6bb66c9692b4719887bba0e46da7892,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__5_is_unsigned_integer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__5_is_unsigned_integer,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1cf1e1d902329cfe98de5006b69121cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__6_is_int8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__6_is_int8,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7682884720251632f72f34cc7a59035f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__7_is_int16() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__7_is_int16,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_610b58fc627b76af4f0a71859c80f6c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__8_is_int32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__8_is_int32,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8c2eb1ca8f9931fe9e3abaec77cf5236,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$types$$$function__9_is_int64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$types$$$function__9_is_int64,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b147c071aa428817ab890e2f55988130,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$types,
        mod_consts[19],
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

function_impl_code functable_pyarrow$types[] = {
    impl_pyarrow$types$$$function__1_is_null,
    impl_pyarrow$types$$$function__2_is_boolean,
    impl_pyarrow$types$$$function__3_is_integer,
    impl_pyarrow$types$$$function__4_is_signed_integer,
    impl_pyarrow$types$$$function__5_is_unsigned_integer,
    impl_pyarrow$types$$$function__6_is_int8,
    impl_pyarrow$types$$$function__7_is_int16,
    impl_pyarrow$types$$$function__8_is_int32,
    impl_pyarrow$types$$$function__9_is_int64,
    impl_pyarrow$types$$$function__10_is_uint8,
    impl_pyarrow$types$$$function__11_is_uint16,
    impl_pyarrow$types$$$function__12_is_uint32,
    impl_pyarrow$types$$$function__13_is_uint64,
    impl_pyarrow$types$$$function__14_is_floating,
    impl_pyarrow$types$$$function__15_is_float16,
    impl_pyarrow$types$$$function__16_is_float32,
    impl_pyarrow$types$$$function__17_is_float64,
    impl_pyarrow$types$$$function__18_is_list,
    impl_pyarrow$types$$$function__19_is_large_list,
    impl_pyarrow$types$$$function__20_is_fixed_size_list,
    impl_pyarrow$types$$$function__21_is_struct,
    impl_pyarrow$types$$$function__22_is_union,
    impl_pyarrow$types$$$function__23_is_nested,
    impl_pyarrow$types$$$function__24_is_temporal,
    impl_pyarrow$types$$$function__25_is_timestamp,
    impl_pyarrow$types$$$function__26_is_duration,
    impl_pyarrow$types$$$function__27_is_time,
    impl_pyarrow$types$$$function__28_is_time32,
    impl_pyarrow$types$$$function__29_is_time64,
    impl_pyarrow$types$$$function__30_is_binary,
    impl_pyarrow$types$$$function__31_is_large_binary,
    impl_pyarrow$types$$$function__32_is_unicode,
    impl_pyarrow$types$$$function__33_is_string,
    impl_pyarrow$types$$$function__34_is_large_unicode,
    impl_pyarrow$types$$$function__35_is_large_string,
    impl_pyarrow$types$$$function__36_is_fixed_size_binary,
    impl_pyarrow$types$$$function__37_is_date,
    impl_pyarrow$types$$$function__38_is_date32,
    impl_pyarrow$types$$$function__39_is_date64,
    impl_pyarrow$types$$$function__40_is_map,
    impl_pyarrow$types$$$function__41_is_decimal,
    impl_pyarrow$types$$$function__42_is_decimal128,
    impl_pyarrow$types$$$function__43_is_decimal256,
    impl_pyarrow$types$$$function__44_is_dictionary,
    impl_pyarrow$types$$$function__45_is_interval,
    impl_pyarrow$types$$$function__46_is_primitive,
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

    function_impl_code *current = functable_pyarrow$types;
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

    if (offset > sizeof(functable_pyarrow$types) || offset < 0) {
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
        functable_pyarrow$types[offset],
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
        module_pyarrow$types,
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
PyObject *modulecode_pyarrow$types(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyarrow.types");

    // Store the module for future use.
    module_pyarrow$types = module;

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
        PRINT_STRING("pyarrow.types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyarrow.types: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyarrow.types: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyarrow$types\n");

    moduledict_pyarrow$types = MODULE_DICT(module_pyarrow$types);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyarrow$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyarrow$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[154]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyarrow$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyarrow$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyarrow$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyarrow$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyarrow$types);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_15ef2ab3d85fe25eb06e78474e1c0f13;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_2);
    }
    frame_15ef2ab3d85fe25eb06e78474e1c0f13 = MAKE_MODULE_FRAME(codeobj_15ef2ab3d85fe25eb06e78474e1c0f13, module_pyarrow$types);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_15ef2ab3d85fe25eb06e78474e1c0f13);
    assert(Py_REFCNT(frame_15ef2ab3d85fe25eb06e78474e1c0f13) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[94]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[94]);

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
        UPDATE_STRING_DICT0(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[98];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow$types;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[99];
        tmp_level_value_1 = mod_consts[100];
        frame_15ef2ab3d85fe25eb06e78474e1c0f13->m_frame.f_lineno = 21;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_pyarrow$types,
                mod_consts[101],
                mod_consts[100]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[101]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyarrow$types,
                mod_consts[102],
                mod_consts[100]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[102]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyarrow$types,
                mod_consts[103],
                mod_consts[100]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[103]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_7);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[98];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyarrow$types;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[100];
        frame_15ef2ab3d85fe25eb06e78474e1c0f13->m_frame.f_lineno = 25;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyarrow$types,
                mod_consts[1],
                mod_consts[100]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_set_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = PySet_New(NULL);
        assert(tmp_assign_source_9);
        tmp_res = PySet_Add(tmp_assign_source_9, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_1);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_9, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_9, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_9, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_set_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = PySet_New(NULL);
        assert(tmp_assign_source_10);
        tmp_res = PySet_Add(tmp_assign_source_10, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_2);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[22]);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_10, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[24]);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_10, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[26]);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_10, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_10);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        tmp_bitor_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_bitor_expr_left_1 == NULL)) {
            tmp_bitor_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_bitor_expr_right_1 == NULL));
        tmp_assign_source_11 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_set_element_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_set_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[30]);
        if (tmp_set_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = PySet_New(NULL);
        assert(tmp_assign_source_12);
        tmp_res = PySet_Add(tmp_assign_source_12, tmp_set_element_3);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_3);
            Py_DECREF(tmp_assign_source_12);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_3);
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_12);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_set_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[32]);
        if (tmp_set_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_12);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_12, tmp_set_element_3);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_12);
            Py_DECREF(tmp_set_element_3);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_3);
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_12);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_set_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[34]);
        if (tmp_set_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_12);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_12, tmp_set_element_3);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_12);
            Py_DECREF(tmp_set_element_3);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_3);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_set_element_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_set_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[84]);
        if (tmp_set_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = PySet_New(NULL);
        assert(tmp_assign_source_13);
        tmp_res = PySet_Add(tmp_assign_source_13, tmp_set_element_4);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_4);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_4);
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_set_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[85]);
        if (tmp_set_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_13, tmp_set_element_4);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);
            Py_DECREF(tmp_set_element_4);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_4);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_set_element_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_set_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[76]);
        if (tmp_set_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = PySet_New(NULL);
        assert(tmp_assign_source_14);
        tmp_res = PySet_Add(tmp_assign_source_14, tmp_set_element_5);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_5);
            Py_DECREF(tmp_assign_source_14);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_5);
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_14);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_set_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[78]);
        if (tmp_set_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_14);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_14, tmp_set_element_5);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_14);
            Py_DECREF(tmp_set_element_5);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_5);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_set_element_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_set_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[56]);
        if (tmp_set_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = PySet_New(NULL);
        assert(tmp_assign_source_15);
        tmp_res = PySet_Add(tmp_assign_source_15, tmp_set_element_6);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_6);
            Py_DECREF(tmp_assign_source_15);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_6);
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_15);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_set_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[58]);
        if (tmp_set_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_15);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_15, tmp_set_element_6);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_15);
            Py_DECREF(tmp_set_element_6);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_6);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_set_element_7;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_set_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[88]);
        if (tmp_set_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = PySet_New(NULL);
        assert(tmp_assign_source_16);
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_7);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_7);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_7);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_set_element_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_set_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[50]);
        if (tmp_set_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_4 = PySet_New(NULL);
        assert(tmp_bitor_expr_left_4);
        tmp_res = PySet_Add(tmp_bitor_expr_left_4, tmp_set_element_8);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_8);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_8);
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_set_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[52]);
        if (tmp_set_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_bitor_expr_left_4, tmp_set_element_8);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);
            Py_DECREF(tmp_set_element_8);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_8);
        tmp_bitor_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_bitor_expr_right_4 == NULL)) {
            tmp_bitor_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_bitor_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_bitor_expr_right_3 == NULL)) {
            tmp_bitor_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_bitor_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_bitor_expr_right_2 == NULL)) {
            tmp_bitor_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_bitor_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_set_element_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_set_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[105]);
        if (tmp_set_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = PySet_New(NULL);
        assert(tmp_assign_source_18);
        tmp_res = PySet_Add(tmp_assign_source_18, tmp_set_element_9);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_9);
            Py_DECREF(tmp_assign_source_18);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_9);
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_18);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_set_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[106]);
        if (tmp_set_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_18);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_18, tmp_set_element_9);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_18);
            Py_DECREF(tmp_set_element_9);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_9);
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_set_element_10;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_set_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[36]);
        if (tmp_set_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_5 = PySet_New(NULL);
        assert(tmp_bitor_expr_left_5);
        tmp_res = PySet_Add(tmp_bitor_expr_left_5, tmp_set_element_10);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_10);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_10);
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_set_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[38]);
        if (tmp_set_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_bitor_expr_left_5, tmp_set_element_10);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);
            Py_DECREF(tmp_set_element_10);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_10);
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_set_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[42]);
        if (tmp_set_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_bitor_expr_left_5, tmp_set_element_10);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);
            Py_DECREF(tmp_set_element_10);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_10);
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_set_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[80]);
        if (tmp_set_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_bitor_expr_left_5, tmp_set_element_10);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);
            Py_DECREF(tmp_set_element_10);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_10);
        tmp_bitor_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_bitor_expr_right_5 == NULL)) {
            tmp_bitor_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_bitor_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_19);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15ef2ab3d85fe25eb06e78474e1c0f13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15ef2ab3d85fe25eb06e78474e1c0f13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15ef2ab3d85fe25eb06e78474e1c0f13, exception_lineno);
    }



    assertFrameObject(frame_15ef2ab3d85fe25eb06e78474e1c0f13);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_pyarrow$types$$$function__1_is_null();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_pyarrow$types$$$function__2_is_boolean();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_pyarrow$types$$$function__3_is_integer();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_pyarrow$types$$$function__4_is_signed_integer();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_pyarrow$types$$$function__5_is_unsigned_integer();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_pyarrow$types$$$function__6_is_int8();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_pyarrow$types$$$function__7_is_int16();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_pyarrow$types$$$function__8_is_int32();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_pyarrow$types$$$function__9_is_int64();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_pyarrow$types$$$function__10_is_uint8();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_pyarrow$types$$$function__11_is_uint16();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_pyarrow$types$$$function__12_is_uint32();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_pyarrow$types$$$function__13_is_uint64();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_pyarrow$types$$$function__14_is_floating();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_pyarrow$types$$$function__15_is_float16();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_pyarrow$types$$$function__16_is_float32();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_pyarrow$types$$$function__17_is_float64();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_pyarrow$types$$$function__18_is_list();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_pyarrow$types$$$function__19_is_large_list();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_pyarrow$types$$$function__20_is_fixed_size_list();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_pyarrow$types$$$function__21_is_struct();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_pyarrow$types$$$function__22_is_union();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_pyarrow$types$$$function__23_is_nested();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_pyarrow$types$$$function__24_is_temporal();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_pyarrow$types$$$function__25_is_timestamp();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_pyarrow$types$$$function__26_is_duration();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_pyarrow$types$$$function__27_is_time();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_pyarrow$types$$$function__28_is_time32();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_pyarrow$types$$$function__29_is_time64();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_pyarrow$types$$$function__30_is_binary();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_pyarrow$types$$$function__31_is_large_binary();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_pyarrow$types$$$function__32_is_unicode();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_pyarrow$types$$$function__33_is_string();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_pyarrow$types$$$function__34_is_large_unicode();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_pyarrow$types$$$function__35_is_large_string();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_pyarrow$types$$$function__36_is_fixed_size_binary();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_pyarrow$types$$$function__37_is_date();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_pyarrow$types$$$function__38_is_date32();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_pyarrow$types$$$function__39_is_date64();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;


        tmp_assign_source_59 = MAKE_FUNCTION_pyarrow$types$$$function__40_is_map();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;


        tmp_assign_source_60 = MAKE_FUNCTION_pyarrow$types$$$function__41_is_decimal();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;


        tmp_assign_source_61 = MAKE_FUNCTION_pyarrow$types$$$function__42_is_decimal128();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;


        tmp_assign_source_62 = MAKE_FUNCTION_pyarrow$types$$$function__43_is_decimal256();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_pyarrow$types$$$function__44_is_dictionary();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;


        tmp_assign_source_64 = MAKE_FUNCTION_pyarrow$types$$$function__45_is_interval();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;


        tmp_assign_source_65 = MAKE_FUNCTION_pyarrow$types$$$function__46_is_primitive();

        UPDATE_STRING_DICT1(moduledict_pyarrow$types, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_65);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyarrow.types", false);

    Py_INCREF(module_pyarrow$types);
    return module_pyarrow$types;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyarrow$types", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
