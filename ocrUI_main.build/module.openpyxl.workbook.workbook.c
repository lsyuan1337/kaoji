/* Generated code for Python module 'openpyxl.workbook.workbook'
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

/* The "module_openpyxl$workbook$workbook" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openpyxl$workbook$workbook;
PyDictObject *moduledict_openpyxl$workbook$workbook;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[325];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[325];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("openpyxl.workbook.workbook"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 325; i++) {
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
void checkModuleConstants_openpyxl$workbook$workbook(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 325; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a8dc5932ca2cfbd3136662b85e33966b;
static PyCodeObject *codeobj_e381a584bf1a7d9edc65d77a9989a09b;
static PyCodeObject *codeobj_216b3cdda2f5ef3be362bfc6d28e2d32;
static PyCodeObject *codeobj_f78e79bf675d0b6749b22871d5169d7d;
static PyCodeObject *codeobj_df2d08359ec91780250f86ad8f91e75c;
static PyCodeObject *codeobj_70dc7ca31d3a2107fcfd9ccd0e21d2d9;
static PyCodeObject *codeobj_f087d9535657a412c95289d6ce6fa6b3;
static PyCodeObject *codeobj_0c09282add7d1fa4d26f2c550b7b85a3;
static PyCodeObject *codeobj_53457ce11fb1fc11a1bbf277a7b01636;
static PyCodeObject *codeobj_8ce1a9bda52698037940984b62b9381c;
static PyCodeObject *codeobj_455a531749dad00641cdc96e1abd6bcb;
static PyCodeObject *codeobj_81d5ae12e523d9016737a55b10896d92;
static PyCodeObject *codeobj_09b052a22ed370379812350d52dbd2a8;
static PyCodeObject *codeobj_20f429919afc36c0e22280a2235294dd;
static PyCodeObject *codeobj_b5cc08a1775e8e939b5f5d0e5249286d;
static PyCodeObject *codeobj_ec6465522db483402860c47aa4894cf8;
static PyCodeObject *codeobj_29ee0c3a68aa99d612473c4eb795c513;
static PyCodeObject *codeobj_889019671cce89013bd05bdc732edeac;
static PyCodeObject *codeobj_6a16bcc072953e149da372286d47993a;
static PyCodeObject *codeobj_683494556f9d4672c5c2431f6e12f904;
static PyCodeObject *codeobj_c6d25247e52dbf01480eaafe02f39902;
static PyCodeObject *codeobj_10a672b5896a6b69c8b8d71c6ab9d2c2;
static PyCodeObject *codeobj_ee0af4b219683f904e28cccba893e90c;
static PyCodeObject *codeobj_fc25e58bf7e4ae7106766710332a3cb1;
static PyCodeObject *codeobj_167b5ed7aab916e4306881d722630267;
static PyCodeObject *codeobj_cfe631b8184c98e6fd4f2050eb129ddb;
static PyCodeObject *codeobj_6db97ef09ec6a384de9f1a0e52dc1eef;
static PyCodeObject *codeobj_1a8b075f391e8b1d8abdcb17f318ef77;
static PyCodeObject *codeobj_c1e8ead0d1779086349ccdd54d9f7f41;
static PyCodeObject *codeobj_b79a702396222d5d100927b6b04107de;
static PyCodeObject *codeobj_1db2b12053f29dcd5371792555cbbaaf;
static PyCodeObject *codeobj_721f1f1fe18d27423c52d2042feb2c55;
static PyCodeObject *codeobj_65b371108751c91a6ffad2b9900030f0;
static PyCodeObject *codeobj_f5c3fab395effea54fc44b2a6204d7b8;
static PyCodeObject *codeobj_9358d7cc4b3ccf4ebaa25fe9dca64841;
static PyCodeObject *codeobj_4202aa9a04279726944cfdd2a990651f;
static PyCodeObject *codeobj_78732b50bff6dc2d98286af2ed8df785;
static PyCodeObject *codeobj_7d5670945ccb3243d6f242ecae156971;
static PyCodeObject *codeobj_513616d7c91d4dfb944609e17f289bb6;
static PyCodeObject *codeobj_e0a2c035bae025700c91c6df5347f3e5;
static PyCodeObject *codeobj_47adf3e5e43505a7297d58a8bae8ffd1;
static PyCodeObject *codeobj_23eab28b49379818bf9540c46aefe1cf;
static PyCodeObject *codeobj_61500aa4ccc3321e046d9f65b5ed3c5c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[301]); CHECK_OBJECT(module_filename_obj);
    codeobj_a8dc5932ca2cfbd3136662b85e33966b = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[302], mod_consts[302], mod_consts[303], NULL, 1, 0, 0);
    codeobj_e381a584bf1a7d9edc65d77a9989a09b = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[302], mod_consts[302], mod_consts[303], NULL, 1, 0, 0);
    codeobj_216b3cdda2f5ef3be362bfc6d28e2d32 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[302], mod_consts[302], mod_consts[303], NULL, 1, 0, 0);
    codeobj_f78e79bf675d0b6749b22871d5169d7d = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[302], mod_consts[302], mod_consts[303], NULL, 1, 0, 0);
    codeobj_df2d08359ec91780250f86ad8f91e75c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[304], mod_consts[304], NULL, NULL, 0, 0, 0);
    codeobj_70dc7ca31d3a2107fcfd9ccd0e21d2d9 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_NOFREE, mod_consts[216], mod_consts[216], mod_consts[305], NULL, 0, 0, 0);
    codeobj_f087d9535657a412c95289d6ce6fa6b3 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[257], mod_consts[257], mod_consts[306], NULL, 2, 0, 0);
    codeobj_0c09282add7d1fa4d26f2c550b7b85a3 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[264], mod_consts[264], mod_consts[307], NULL, 2, 0, 0);
    codeobj_53457ce11fb1fc11a1bbf277a7b01636 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[217], mod_consts[217], mod_consts[307], NULL, 2, 0, 0);
    codeobj_8ce1a9bda52698037940984b62b9381c = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[228], mod_consts[228], mod_consts[308], NULL, 3, 0, 0);
    codeobj_455a531749dad00641cdc96e1abd6bcb = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[266], mod_consts[266], mod_consts[309], NULL, 1, 0, 0);
    codeobj_81d5ae12e523d9016737a55b10896d92 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[310], NULL, 3, 0, 0);
    codeobj_09b052a22ed370379812350d52dbd2a8 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[309], NULL, 1, 0, 0);
    codeobj_20f429919afc36c0e22280a2235294dd = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[309], NULL, 1, 0, 0);
    codeobj_b5cc08a1775e8e939b5f5d0e5249286d = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[311], NULL, 2, 0, 0);
    codeobj_ec6465522db483402860c47aa4894cf8 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[284], mod_consts[284], mod_consts[312], NULL, 2, 0, 0);
    codeobj_29ee0c3a68aa99d612473c4eb795c513 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[313], NULL, 2, 0, 0);
    codeobj_889019671cce89013bd05bdc732edeac = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[309], NULL, 1, 0, 0);
    codeobj_6a16bcc072953e149da372286d47993a = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[309], NULL, 1, 0, 0);
    codeobj_683494556f9d4672c5c2431f6e12f904 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[314], NULL, 2, 0, 0);
    codeobj_c6d25247e52dbf01480eaafe02f39902 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[315], NULL, 3, 0, 0);
    codeobj_10a672b5896a6b69c8b8d71c6ab9d2c2 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[316], NULL, 5, 0, 0);
    codeobj_ee0af4b219683f904e28cccba893e90c = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[317], NULL, 3, 0, 0);
    codeobj_fc25e58bf7e4ae7106766710332a3cb1 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[233], mod_consts[233], mod_consts[309], NULL, 1, 0, 0);
    codeobj_167b5ed7aab916e4306881d722630267 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[309], NULL, 1, 0, 0);
    codeobj_cfe631b8184c98e6fd4f2050eb129ddb = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[261], mod_consts[261], mod_consts[318], NULL, 2, 0, 0);
    codeobj_6db97ef09ec6a384de9f1a0e52dc1eef = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[287], mod_consts[287], mod_consts[319], NULL, 2, 0, 0);
    codeobj_1a8b075f391e8b1d8abdcb17f318ef77 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[281], mod_consts[281], mod_consts[309], NULL, 1, 0, 0);
    codeobj_c1e8ead0d1779086349ccdd54d9f7f41 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[255], mod_consts[255], mod_consts[319], NULL, 2, 0, 0);
    codeobj_b79a702396222d5d100927b6b04107de = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[269], mod_consts[269], mod_consts[309], NULL, 1, 0, 0);
    codeobj_1db2b12053f29dcd5371792555cbbaaf = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[318], NULL, 2, 0, 0);
    codeobj_721f1f1fe18d27423c52d2042feb2c55 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[292], mod_consts[292], mod_consts[320], NULL, 1, 0, 0);
    codeobj_65b371108751c91a6ffad2b9900030f0 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[246], mod_consts[246], mod_consts[321], NULL, 3, 0, 0);
    codeobj_f5c3fab395effea54fc44b2a6204d7b8 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[278], mod_consts[278], mod_consts[309], NULL, 1, 0, 0);
    codeobj_9358d7cc4b3ccf4ebaa25fe9dca64841 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[309], NULL, 1, 0, 0);
    codeobj_4202aa9a04279726944cfdd2a990651f = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[322], NULL, 2, 0, 0);
    codeobj_78732b50bff6dc2d98286af2ed8df785 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[290], mod_consts[290], mod_consts[312], NULL, 2, 0, 0);
    codeobj_7d5670945ccb3243d6f242ecae156971 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[250], mod_consts[250], mod_consts[318], NULL, 2, 0, 0);
    codeobj_513616d7c91d4dfb944609e17f289bb6 = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[294], mod_consts[294], mod_consts[323], NULL, 2, 0, 0);
    codeobj_e0a2c035bae025700c91c6df5347f3e5 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[309], NULL, 1, 0, 0);
    codeobj_47adf3e5e43505a7297d58a8bae8ffd1 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[296], mod_consts[296], mod_consts[309], NULL, 1, 0, 0);
    codeobj_23eab28b49379818bf9540c46aefe1cf = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[309], NULL, 1, 0, 0);
    codeobj_61500aa4ccc3321e046d9f65b5ed3c5c = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[309], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__10__add_sheet(PyObject *defaults);


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__11_move_sheet(PyObject *defaults);


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__12_remove();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__13_remove_sheet();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__14_create_chartsheet(PyObject *defaults);


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__15_get_sheet_by_name();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__16___contains__();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__17_index();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__18_get_index();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__19___getitem__();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__20___delitem__();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__21___iter__();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__22_get_sheet_names();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__23_worksheets();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__24_chartsheets();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__25_sheetnames();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__26_create_named_range(PyObject *defaults);


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__27_add_named_style();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__28_named_styles();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__29_get_named_ranges();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__2__setup_styles();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__30_add_named_range();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__31_get_named_range();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__32_remove_named_range();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__33_mime_type();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__34_save();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__35_style_names();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__36_copy_worksheet();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__37_close();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__3_read_only();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__4_data_only();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__5_write_only();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__6_excel_base_date();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__7_active();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__8_active();


static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__9_create_sheet(PyObject *defaults);


// The module function definitions.
static PyObject *impl_openpyxl$workbook$workbook$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_write_only = python_pars[1];
    PyObject *par_iso_dates = python_pars[2];
    struct Nuitka_FrameObject *frame_8ce1a9bda52698037940984b62b9381c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8ce1a9bda52698037940984b62b9381c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ce1a9bda52698037940984b62b9381c)) {
        Py_XDECREF(cache_frame_8ce1a9bda52698037940984b62b9381c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ce1a9bda52698037940984b62b9381c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ce1a9bda52698037940984b62b9381c = MAKE_FUNCTION_FRAME(codeobj_8ce1a9bda52698037940984b62b9381c, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ce1a9bda52698037940984b62b9381c->m_type_description == NULL);
    frame_8ce1a9bda52698037940984b62b9381c = cache_frame_8ce1a9bda52698037940984b62b9381c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ce1a9bda52698037940984b62b9381c);
    assert(Py_REFCNT(frame_8ce1a9bda52698037940984b62b9381c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[3], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 65;
        tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[5], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[6], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 67;
        tmp_assattr_value_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 68;
        tmp_assattr_value_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[10], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_write_only);
        tmp_assattr_value_8 = par_write_only;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[11], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 70;
        tmp_assattr_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[13], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[15], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[16], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[17], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[18], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[20], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = mod_consts[21];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[22], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_iso_dates);
        tmp_assattr_value_16 = par_iso_dates;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[23], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 83;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 83;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_17;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 85;
        tmp_assattr_value_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[28], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_8;
        PyObject *tmp_assattr_target_18;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 86;
        tmp_assattr_value_18 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_assattr_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[30], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_assattr_target_19;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ce1a9bda52698037940984b62b9381c->m_frame.f_lineno = 87;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_19, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[32], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ce1a9bda52698037940984b62b9381c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ce1a9bda52698037940984b62b9381c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ce1a9bda52698037940984b62b9381c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ce1a9bda52698037940984b62b9381c,
        type_description_1,
        par_self,
        par_write_only,
        par_iso_dates
    );


    // Release cached frame if used for exception.
    if (frame_8ce1a9bda52698037940984b62b9381c == cache_frame_8ce1a9bda52698037940984b62b9381c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ce1a9bda52698037940984b62b9381c);
        cache_frame_8ce1a9bda52698037940984b62b9381c = NULL;
    }

    assertFrameObject(frame_8ce1a9bda52698037940984b62b9381c);

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
    CHECK_OBJECT(par_write_only);
    Py_DECREF(par_write_only);
    CHECK_OBJECT(par_iso_dates);
    Py_DECREF(par_iso_dates);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_write_only);
    Py_DECREF(par_write_only);
    CHECK_OBJECT(par_iso_dates);
    Py_DECREF(par_iso_dates);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__2__setup_styles(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_09b052a22ed370379812350d52dbd2a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_09b052a22ed370379812350d52dbd2a8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09b052a22ed370379812350d52dbd2a8)) {
        Py_XDECREF(cache_frame_09b052a22ed370379812350d52dbd2a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09b052a22ed370379812350d52dbd2a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09b052a22ed370379812350d52dbd2a8 = MAKE_FUNCTION_FRAME(codeobj_09b052a22ed370379812350d52dbd2a8, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09b052a22ed370379812350d52dbd2a8->m_type_description == NULL);
    frame_09b052a22ed370379812350d52dbd2a8 = cache_frame_09b052a22ed370379812350d52dbd2a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09b052a22ed370379812350d52dbd2a8);
    assert(Py_REFCNT(frame_09b052a22ed370379812350d52dbd2a8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 93;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 94;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 96;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 96;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 98;
        tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[38], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 99;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 101;
        tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[40]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[34]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 102;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[34]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 103;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 105;
        tmp_assattr_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[43], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[44], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_12;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 108;
        tmp_list_element_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_6, 0, tmp_list_element_2);
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 108;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[46], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[48], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_14;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 111;
        tmp_list_element_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_7, 0, tmp_list_element_3);
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 111;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[50], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_15;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 112;
        tmp_assattr_value_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[52], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[53]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 113;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[2];
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 113;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_args_element_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[56]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 113;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_19;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 114;
        tmp_assattr_value_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[58], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_20;
        PyObject *tmp_assattr_target_12;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_09b052a22ed370379812350d52dbd2a8->m_frame.f_lineno = 115;
        tmp_assattr_value_12 = CALL_FUNCTION_NO_ARGS(tmp_called_value_20);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[60], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09b052a22ed370379812350d52dbd2a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09b052a22ed370379812350d52dbd2a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09b052a22ed370379812350d52dbd2a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09b052a22ed370379812350d52dbd2a8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_09b052a22ed370379812350d52dbd2a8 == cache_frame_09b052a22ed370379812350d52dbd2a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09b052a22ed370379812350d52dbd2a8);
        cache_frame_09b052a22ed370379812350d52dbd2a8 = NULL;
    }

    assertFrameObject(frame_09b052a22ed370379812350d52dbd2a8);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__3_read_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9358d7cc4b3ccf4ebaa25fe9dca64841;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841)) {
        Py_XDECREF(cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841 = MAKE_FUNCTION_FRAME(codeobj_9358d7cc4b3ccf4ebaa25fe9dca64841, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841->m_type_description == NULL);
    frame_9358d7cc4b3ccf4ebaa25fe9dca64841 = cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9358d7cc4b3ccf4ebaa25fe9dca64841);
    assert(Py_REFCNT(frame_9358d7cc4b3ccf4ebaa25fe9dca64841) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
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
        exception_tb = MAKE_TRACEBACK(frame_9358d7cc4b3ccf4ebaa25fe9dca64841, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9358d7cc4b3ccf4ebaa25fe9dca64841->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9358d7cc4b3ccf4ebaa25fe9dca64841, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9358d7cc4b3ccf4ebaa25fe9dca64841,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9358d7cc4b3ccf4ebaa25fe9dca64841 == cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841);
        cache_frame_9358d7cc4b3ccf4ebaa25fe9dca64841 = NULL;
    }

    assertFrameObject(frame_9358d7cc4b3ccf4ebaa25fe9dca64841);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__4_data_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fc25e58bf7e4ae7106766710332a3cb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc25e58bf7e4ae7106766710332a3cb1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc25e58bf7e4ae7106766710332a3cb1)) {
        Py_XDECREF(cache_frame_fc25e58bf7e4ae7106766710332a3cb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc25e58bf7e4ae7106766710332a3cb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc25e58bf7e4ae7106766710332a3cb1 = MAKE_FUNCTION_FRAME(codeobj_fc25e58bf7e4ae7106766710332a3cb1, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc25e58bf7e4ae7106766710332a3cb1->m_type_description == NULL);
    frame_fc25e58bf7e4ae7106766710332a3cb1 = cache_frame_fc25e58bf7e4ae7106766710332a3cb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc25e58bf7e4ae7106766710332a3cb1);
    assert(Py_REFCNT(frame_fc25e58bf7e4ae7106766710332a3cb1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_fc25e58bf7e4ae7106766710332a3cb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc25e58bf7e4ae7106766710332a3cb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc25e58bf7e4ae7106766710332a3cb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc25e58bf7e4ae7106766710332a3cb1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fc25e58bf7e4ae7106766710332a3cb1 == cache_frame_fc25e58bf7e4ae7106766710332a3cb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc25e58bf7e4ae7106766710332a3cb1);
        cache_frame_fc25e58bf7e4ae7106766710332a3cb1 = NULL;
    }

    assertFrameObject(frame_fc25e58bf7e4ae7106766710332a3cb1);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__5_write_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_61500aa4ccc3321e046d9f65b5ed3c5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c)) {
        Py_XDECREF(cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c = MAKE_FUNCTION_FRAME(codeobj_61500aa4ccc3321e046d9f65b5ed3c5c, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c->m_type_description == NULL);
    frame_61500aa4ccc3321e046d9f65b5ed3c5c = cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61500aa4ccc3321e046d9f65b5ed3c5c);
    assert(Py_REFCNT(frame_61500aa4ccc3321e046d9f65b5ed3c5c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_61500aa4ccc3321e046d9f65b5ed3c5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61500aa4ccc3321e046d9f65b5ed3c5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61500aa4ccc3321e046d9f65b5ed3c5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61500aa4ccc3321e046d9f65b5ed3c5c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_61500aa4ccc3321e046d9f65b5ed3c5c == cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c);
        cache_frame_61500aa4ccc3321e046d9f65b5ed3c5c = NULL;
    }

    assertFrameObject(frame_61500aa4ccc3321e046d9f65b5ed3c5c);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__6_excel_base_date(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_167b5ed7aab916e4306881d722630267;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_167b5ed7aab916e4306881d722630267 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_167b5ed7aab916e4306881d722630267)) {
        Py_XDECREF(cache_frame_167b5ed7aab916e4306881d722630267);

#if _DEBUG_REFCOUNTS
        if (cache_frame_167b5ed7aab916e4306881d722630267 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_167b5ed7aab916e4306881d722630267 = MAKE_FUNCTION_FRAME(codeobj_167b5ed7aab916e4306881d722630267, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_167b5ed7aab916e4306881d722630267->m_type_description == NULL);
    frame_167b5ed7aab916e4306881d722630267 = cache_frame_167b5ed7aab916e4306881d722630267;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_167b5ed7aab916e4306881d722630267);
    assert(Py_REFCNT(frame_167b5ed7aab916e4306881d722630267) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_167b5ed7aab916e4306881d722630267, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_167b5ed7aab916e4306881d722630267->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_167b5ed7aab916e4306881d722630267, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_167b5ed7aab916e4306881d722630267,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_167b5ed7aab916e4306881d722630267 == cache_frame_167b5ed7aab916e4306881d722630267) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_167b5ed7aab916e4306881d722630267);
        cache_frame_167b5ed7aab916e4306881d722630267 = NULL;
    }

    assertFrameObject(frame_167b5ed7aab916e4306881d722630267);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__7_active(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_20f429919afc36c0e22280a2235294dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_20f429919afc36c0e22280a2235294dd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_20f429919afc36c0e22280a2235294dd)) {
        Py_XDECREF(cache_frame_20f429919afc36c0e22280a2235294dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20f429919afc36c0e22280a2235294dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20f429919afc36c0e22280a2235294dd = MAKE_FUNCTION_FRAME(codeobj_20f429919afc36c0e22280a2235294dd, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_20f429919afc36c0e22280a2235294dd->m_type_description == NULL);
    frame_20f429919afc36c0e22280a2235294dd = cache_frame_20f429919afc36c0e22280a2235294dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_20f429919afc36c0e22280a2235294dd);
    assert(Py_REFCNT(frame_20f429919afc36c0e22280a2235294dd) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 142;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_20f429919afc36c0e22280a2235294dd, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_20f429919afc36c0e22280a2235294dd, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 141;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_20f429919afc36c0e22280a2235294dd->m_frame) frame_20f429919afc36c0e22280a2235294dd->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20f429919afc36c0e22280a2235294dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20f429919afc36c0e22280a2235294dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20f429919afc36c0e22280a2235294dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20f429919afc36c0e22280a2235294dd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_20f429919afc36c0e22280a2235294dd == cache_frame_20f429919afc36c0e22280a2235294dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_20f429919afc36c0e22280a2235294dd);
        cache_frame_20f429919afc36c0e22280a2235294dd = NULL;
    }

    assertFrameObject(frame_20f429919afc36c0e22280a2235294dd);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__8_active(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var_idx = NULL;
    struct Nuitka_FrameObject *frame_b5cc08a1775e8e939b5f5d0e5249286d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b5cc08a1775e8e939b5f5d0e5249286d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5cc08a1775e8e939b5f5d0e5249286d)) {
        Py_XDECREF(cache_frame_b5cc08a1775e8e939b5f5d0e5249286d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5cc08a1775e8e939b5f5d0e5249286d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5cc08a1775e8e939b5f5d0e5249286d = MAKE_FUNCTION_FRAME(codeobj_b5cc08a1775e8e939b5f5d0e5249286d, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5cc08a1775e8e939b5f5d0e5249286d->m_type_description == NULL);
    frame_b5cc08a1775e8e939b5f5d0e5249286d = cache_frame_b5cc08a1775e8e939b5f5d0e5249286d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5cc08a1775e8e939b5f5d0e5249286d);
    assert(Py_REFCNT(frame_b5cc08a1775e8e939b5f5d0e5249286d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[67];
        frame_b5cc08a1775e8e939b5f5d0e5249286d->m_frame.f_lineno = 150;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 150;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_2 = par_value;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[68];
        frame_b5cc08a1775e8e939b5f5d0e5249286d->m_frame.f_lineno = 159;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 159;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[70];
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[71];
        frame_b5cc08a1775e8e939b5f5d0e5249286d->m_frame.f_lineno = 161;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 161;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[72]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_b5cc08a1775e8e939b5f5d0e5249286d->m_frame.f_lineno = 163;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_idx);
        tmp_assattr_value_2 = var_idx;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_b5cc08a1775e8e939b5f5d0e5249286d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5cc08a1775e8e939b5f5d0e5249286d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5cc08a1775e8e939b5f5d0e5249286d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5cc08a1775e8e939b5f5d0e5249286d,
        type_description_1,
        par_self,
        par_value,
        var_idx
    );


    // Release cached frame if used for exception.
    if (frame_b5cc08a1775e8e939b5f5d0e5249286d == cache_frame_b5cc08a1775e8e939b5f5d0e5249286d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5cc08a1775e8e939b5f5d0e5249286d);
        cache_frame_b5cc08a1775e8e939b5f5d0e5249286d = NULL;
    }

    assertFrameObject(frame_b5cc08a1775e8e939b5f5d0e5249286d);

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
    Py_XDECREF(var_idx);
    var_idx = NULL;
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

    Py_XDECREF(var_idx);
    var_idx = NULL;
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


static PyObject *impl_openpyxl$workbook$workbook$$$function__9_create_sheet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_title = python_pars[1];
    PyObject *par_index = python_pars[2];
    PyObject *var_new_ws = NULL;
    struct Nuitka_FrameObject *frame_ee0af4b219683f904e28cccba893e90c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ee0af4b219683f904e28cccba893e90c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ee0af4b219683f904e28cccba893e90c)) {
        Py_XDECREF(cache_frame_ee0af4b219683f904e28cccba893e90c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee0af4b219683f904e28cccba893e90c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee0af4b219683f904e28cccba893e90c = MAKE_FUNCTION_FRAME(codeobj_ee0af4b219683f904e28cccba893e90c, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee0af4b219683f904e28cccba893e90c->m_type_description == NULL);
    frame_ee0af4b219683f904e28cccba893e90c = cache_frame_ee0af4b219683f904e28cccba893e90c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee0af4b219683f904e28cccba893e90c);
    assert(Py_REFCNT(frame_ee0af4b219683f904e28cccba893e90c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 176;
            type_description_1 = "oooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ee0af4b219683f904e28cccba893e90c->m_frame.f_lineno = 177;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[76]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 177;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_1 = par_self;
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_1_1 = par_title;
        frame_ee0af4b219683f904e28cccba893e90c->m_frame.f_lineno = 180;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[78]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_ws == NULL);
        var_new_ws = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_2 = par_self;
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_1_2 = par_title;
        frame_ee0af4b219683f904e28cccba893e90c->m_frame.f_lineno = 182;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[78]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_ws == NULL);
        var_new_ws = tmp_assign_source_2;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[79]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_ws);
        tmp_kw_call_value_0_3 = var_new_ws;
        CHECK_OBJECT(par_index);
        tmp_kw_call_value_1_3 = par_index;
        frame_ee0af4b219683f904e28cccba893e90c->m_frame.f_lineno = 184;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[80]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee0af4b219683f904e28cccba893e90c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee0af4b219683f904e28cccba893e90c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee0af4b219683f904e28cccba893e90c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee0af4b219683f904e28cccba893e90c,
        type_description_1,
        par_self,
        par_title,
        par_index,
        var_new_ws
    );


    // Release cached frame if used for exception.
    if (frame_ee0af4b219683f904e28cccba893e90c == cache_frame_ee0af4b219683f904e28cccba893e90c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee0af4b219683f904e28cccba893e90c);
        cache_frame_ee0af4b219683f904e28cccba893e90c = NULL;
    }

    assertFrameObject(frame_ee0af4b219683f904e28cccba893e90c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_new_ws);
    tmp_return_value = var_new_ws;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_ws);
    Py_DECREF(var_new_ws);
    var_new_ws = NULL;
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

    Py_XDECREF(var_new_ws);
    var_new_ws = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__10__add_sheet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sheet = python_pars[1];
    PyObject *par_index = python_pars[2];
    struct Nuitka_FrameObject *frame_81d5ae12e523d9016737a55b10896d92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_81d5ae12e523d9016737a55b10896d92 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81d5ae12e523d9016737a55b10896d92)) {
        Py_XDECREF(cache_frame_81d5ae12e523d9016737a55b10896d92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81d5ae12e523d9016737a55b10896d92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81d5ae12e523d9016737a55b10896d92 = MAKE_FUNCTION_FRAME(codeobj_81d5ae12e523d9016737a55b10896d92, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81d5ae12e523d9016737a55b10896d92->m_type_description == NULL);
    frame_81d5ae12e523d9016737a55b10896d92 = cache_frame_81d5ae12e523d9016737a55b10896d92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81d5ae12e523d9016737a55b10896d92);
    assert(Py_REFCNT(frame_81d5ae12e523d9016737a55b10896d92) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_sheet);
        tmp_isinstance_inst_1 = par_sheet;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[83];
        frame_81d5ae12e523d9016737a55b10896d92->m_frame.f_lineno = 192;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 192;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_sheet);
        tmp_expression_value_1 = par_sheet;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_right_1 = par_self;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[85];
        frame_81d5ae12e523d9016737a55b10896d92->m_frame.f_lineno = 195;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 195;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_index);
        tmp_cmp_expr_left_2 = par_index;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sheet);
        tmp_args_element_value_1 = par_sheet;
        frame_81d5ae12e523d9016737a55b10896d92->m_frame.f_lineno = 198;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[86]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_args_element_value_2 = par_index;
        CHECK_OBJECT(par_sheet);
        tmp_args_element_value_3 = par_sheet;
        frame_81d5ae12e523d9016737a55b10896d92->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81d5ae12e523d9016737a55b10896d92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81d5ae12e523d9016737a55b10896d92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81d5ae12e523d9016737a55b10896d92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81d5ae12e523d9016737a55b10896d92,
        type_description_1,
        par_self,
        par_sheet,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_81d5ae12e523d9016737a55b10896d92 == cache_frame_81d5ae12e523d9016737a55b10896d92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81d5ae12e523d9016737a55b10896d92);
        cache_frame_81d5ae12e523d9016737a55b10896d92 = NULL;
    }

    assertFrameObject(frame_81d5ae12e523d9016737a55b10896d92);

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
    CHECK_OBJECT(par_sheet);
    Py_DECREF(par_sheet);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sheet);
    Py_DECREF(par_sheet);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__11_move_sheet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sheet = python_pars[1];
    PyObject *par_offset = python_pars[2];
    PyObject *var_idx = NULL;
    PyObject *var_new_pos = NULL;
    struct Nuitka_FrameObject *frame_65b371108751c91a6ffad2b9900030f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_65b371108751c91a6ffad2b9900030f0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_65b371108751c91a6ffad2b9900030f0)) {
        Py_XDECREF(cache_frame_65b371108751c91a6ffad2b9900030f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65b371108751c91a6ffad2b9900030f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65b371108751c91a6ffad2b9900030f0 = MAKE_FUNCTION_FRAME(codeobj_65b371108751c91a6ffad2b9900030f0, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65b371108751c91a6ffad2b9900030f0->m_type_description == NULL);
    frame_65b371108751c91a6ffad2b9900030f0 = cache_frame_65b371108751c91a6ffad2b9900030f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_65b371108751c91a6ffad2b9900030f0);
    assert(Py_REFCNT(frame_65b371108751c91a6ffad2b9900030f0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_sheet);
        tmp_isinstance_inst_1 = par_sheet;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        CHECK_OBJECT(par_sheet);
        tmp_subscript_value_1 = par_sheet;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_sheet;
            assert(old != NULL);
            par_sheet = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[72]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sheet);
        tmp_args_element_value_1 = par_sheet;
        frame_65b371108751c91a6ffad2b9900030f0->m_frame.f_lineno = 209;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_idx);
        tmp_delsubscr_subscript_1 = var_idx;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_idx);
        tmp_add_expr_left_1 = var_idx;
        CHECK_OBJECT(par_offset);
        tmp_add_expr_right_1 = par_offset;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_pos == NULL);
        var_new_pos = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[86]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_pos);
        tmp_args_element_value_2 = var_new_pos;
        CHECK_OBJECT(par_sheet);
        tmp_args_element_value_3 = par_sheet;
        frame_65b371108751c91a6ffad2b9900030f0->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65b371108751c91a6ffad2b9900030f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65b371108751c91a6ffad2b9900030f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65b371108751c91a6ffad2b9900030f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65b371108751c91a6ffad2b9900030f0,
        type_description_1,
        par_self,
        par_sheet,
        par_offset,
        var_idx,
        var_new_pos
    );


    // Release cached frame if used for exception.
    if (frame_65b371108751c91a6ffad2b9900030f0 == cache_frame_65b371108751c91a6ffad2b9900030f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65b371108751c91a6ffad2b9900030f0);
        cache_frame_65b371108751c91a6ffad2b9900030f0 = NULL;
    }

    assertFrameObject(frame_65b371108751c91a6ffad2b9900030f0);

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
    CHECK_OBJECT(par_sheet);
    Py_DECREF(par_sheet);
    par_sheet = NULL;
    CHECK_OBJECT(var_idx);
    Py_DECREF(var_idx);
    var_idx = NULL;
    CHECK_OBJECT(var_new_pos);
    Py_DECREF(var_new_pos);
    var_new_pos = NULL;
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

    Py_XDECREF(par_sheet);
    par_sheet = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_new_pos);
    var_new_pos = NULL;
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
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__12_remove(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_worksheet = python_pars[1];
    PyObject *var_idx = NULL;
    PyObject *var_localnames = NULL;
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4202aa9a04279726944cfdd2a990651f;
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
    static struct Nuitka_FrameObject *cache_frame_4202aa9a04279726944cfdd2a990651f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4202aa9a04279726944cfdd2a990651f)) {
        Py_XDECREF(cache_frame_4202aa9a04279726944cfdd2a990651f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4202aa9a04279726944cfdd2a990651f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4202aa9a04279726944cfdd2a990651f = MAKE_FUNCTION_FRAME(codeobj_4202aa9a04279726944cfdd2a990651f, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4202aa9a04279726944cfdd2a990651f->m_type_description == NULL);
    frame_4202aa9a04279726944cfdd2a990651f = cache_frame_4202aa9a04279726944cfdd2a990651f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4202aa9a04279726944cfdd2a990651f);
    assert(Py_REFCNT(frame_4202aa9a04279726944cfdd2a990651f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_worksheet);
        tmp_args_element_value_1 = par_worksheet;
        frame_4202aa9a04279726944cfdd2a990651f->m_frame.f_lineno = 217;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[89]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_idx);
        tmp_kw_call_value_0_1 = var_idx;
        frame_4202aa9a04279726944cfdd2a990651f->m_frame.f_lineno = 218;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[90]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_localnames == NULL);
        var_localnames = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_localnames);
        tmp_iter_arg_1 = var_localnames;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 219;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_5;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[5]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[92]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_kw_call_arg_value_0_1 = var_name;
        if (var_idx == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = var_idx;
        frame_4202aa9a04279726944cfdd2a990651f->m_frame.f_lineno = 220;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[90]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 219;
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[94]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_worksheet);
        tmp_args_element_value_2 = par_worksheet;
        frame_4202aa9a04279726944cfdd2a990651f->m_frame.f_lineno = 221;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4202aa9a04279726944cfdd2a990651f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4202aa9a04279726944cfdd2a990651f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4202aa9a04279726944cfdd2a990651f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4202aa9a04279726944cfdd2a990651f,
        type_description_1,
        par_self,
        par_worksheet,
        var_idx,
        var_localnames,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_4202aa9a04279726944cfdd2a990651f == cache_frame_4202aa9a04279726944cfdd2a990651f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4202aa9a04279726944cfdd2a990651f);
        cache_frame_4202aa9a04279726944cfdd2a990651f = NULL;
    }

    assertFrameObject(frame_4202aa9a04279726944cfdd2a990651f);

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
    Py_XDECREF(var_idx);
    var_idx = NULL;
    CHECK_OBJECT(var_localnames);
    Py_DECREF(var_localnames);
    var_localnames = NULL;
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

    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_localnames);
    var_localnames = NULL;
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
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__13_remove_sheet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_worksheet = python_pars[1];
    struct Nuitka_FrameObject *frame_7d5670945ccb3243d6f242ecae156971;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d5670945ccb3243d6f242ecae156971 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d5670945ccb3243d6f242ecae156971)) {
        Py_XDECREF(cache_frame_7d5670945ccb3243d6f242ecae156971);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d5670945ccb3243d6f242ecae156971 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d5670945ccb3243d6f242ecae156971 = MAKE_FUNCTION_FRAME(codeobj_7d5670945ccb3243d6f242ecae156971, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d5670945ccb3243d6f242ecae156971->m_type_description == NULL);
    frame_7d5670945ccb3243d6f242ecae156971 = cache_frame_7d5670945ccb3243d6f242ecae156971;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d5670945ccb3243d6f242ecae156971);
    assert(Py_REFCNT(frame_7d5670945ccb3243d6f242ecae156971) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_worksheet);
        tmp_args_element_value_1 = par_worksheet;
        frame_7d5670945ccb3243d6f242ecae156971->m_frame.f_lineno = 227;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
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
        exception_tb = MAKE_TRACEBACK(frame_7d5670945ccb3243d6f242ecae156971, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d5670945ccb3243d6f242ecae156971->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d5670945ccb3243d6f242ecae156971, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d5670945ccb3243d6f242ecae156971,
        type_description_1,
        par_self,
        par_worksheet
    );


    // Release cached frame if used for exception.
    if (frame_7d5670945ccb3243d6f242ecae156971 == cache_frame_7d5670945ccb3243d6f242ecae156971) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d5670945ccb3243d6f242ecae156971);
        cache_frame_7d5670945ccb3243d6f242ecae156971 = NULL;
    }

    assertFrameObject(frame_7d5670945ccb3243d6f242ecae156971);

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
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__14_create_chartsheet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_title = python_pars[1];
    PyObject *par_index = python_pars[2];
    PyObject *var_cs = NULL;
    struct Nuitka_FrameObject *frame_c6d25247e52dbf01480eaafe02f39902;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c6d25247e52dbf01480eaafe02f39902 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c6d25247e52dbf01480eaafe02f39902)) {
        Py_XDECREF(cache_frame_c6d25247e52dbf01480eaafe02f39902);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6d25247e52dbf01480eaafe02f39902 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6d25247e52dbf01480eaafe02f39902 = MAKE_FUNCTION_FRAME(codeobj_c6d25247e52dbf01480eaafe02f39902, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6d25247e52dbf01480eaafe02f39902->m_type_description == NULL);
    frame_c6d25247e52dbf01480eaafe02f39902 = cache_frame_c6d25247e52dbf01480eaafe02f39902;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c6d25247e52dbf01480eaafe02f39902);
    assert(Py_REFCNT(frame_c6d25247e52dbf01480eaafe02f39902) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 231;
            type_description_1 = "oooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c6d25247e52dbf01480eaafe02f39902->m_frame.f_lineno = 232;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[76]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 232;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_1 = par_self;
        CHECK_OBJECT(par_title);
        tmp_kw_call_value_1_1 = par_title;
        frame_c6d25247e52dbf01480eaafe02f39902->m_frame.f_lineno = 233;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[78]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_cs == NULL);
        var_cs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_cs);
        tmp_args_element_value_1 = var_cs;
        CHECK_OBJECT(par_index);
        tmp_args_element_value_2 = par_index;
        frame_c6d25247e52dbf01480eaafe02f39902->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[79],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6d25247e52dbf01480eaafe02f39902, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6d25247e52dbf01480eaafe02f39902->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6d25247e52dbf01480eaafe02f39902, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6d25247e52dbf01480eaafe02f39902,
        type_description_1,
        par_self,
        par_title,
        par_index,
        var_cs
    );


    // Release cached frame if used for exception.
    if (frame_c6d25247e52dbf01480eaafe02f39902 == cache_frame_c6d25247e52dbf01480eaafe02f39902) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6d25247e52dbf01480eaafe02f39902);
        cache_frame_c6d25247e52dbf01480eaafe02f39902 = NULL;
    }

    assertFrameObject(frame_c6d25247e52dbf01480eaafe02f39902);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_cs);
    tmp_return_value = var_cs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cs);
    Py_DECREF(var_cs);
    var_cs = NULL;
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

    Py_XDECREF(var_cs);
    var_cs = NULL;
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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__15_get_sheet_by_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_c1e8ead0d1779086349ccdd54d9f7f41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c1e8ead0d1779086349ccdd54d9f7f41 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c1e8ead0d1779086349ccdd54d9f7f41)) {
        Py_XDECREF(cache_frame_c1e8ead0d1779086349ccdd54d9f7f41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1e8ead0d1779086349ccdd54d9f7f41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1e8ead0d1779086349ccdd54d9f7f41 = MAKE_FUNCTION_FRAME(codeobj_c1e8ead0d1779086349ccdd54d9f7f41, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1e8ead0d1779086349ccdd54d9f7f41->m_type_description == NULL);
    frame_c1e8ead0d1779086349ccdd54d9f7f41 = cache_frame_c1e8ead0d1779086349ccdd54d9f7f41;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1e8ead0d1779086349ccdd54d9f7f41);
    assert(Py_REFCNT(frame_c1e8ead0d1779086349ccdd54d9f7f41) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
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
        exception_tb = MAKE_TRACEBACK(frame_c1e8ead0d1779086349ccdd54d9f7f41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1e8ead0d1779086349ccdd54d9f7f41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1e8ead0d1779086349ccdd54d9f7f41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1e8ead0d1779086349ccdd54d9f7f41,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_c1e8ead0d1779086349ccdd54d9f7f41 == cache_frame_c1e8ead0d1779086349ccdd54d9f7f41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1e8ead0d1779086349ccdd54d9f7f41);
        cache_frame_c1e8ead0d1779086349ccdd54d9f7f41 = NULL;
    }

    assertFrameObject(frame_c1e8ead0d1779086349ccdd54d9f7f41);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__16___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_f087d9535657a412c95289d6ce6fa6b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f087d9535657a412c95289d6ce6fa6b3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f087d9535657a412c95289d6ce6fa6b3)) {
        Py_XDECREF(cache_frame_f087d9535657a412c95289d6ce6fa6b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f087d9535657a412c95289d6ce6fa6b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f087d9535657a412c95289d6ce6fa6b3 = MAKE_FUNCTION_FRAME(codeobj_f087d9535657a412c95289d6ce6fa6b3, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f087d9535657a412c95289d6ce6fa6b3->m_type_description == NULL);
    frame_f087d9535657a412c95289d6ce6fa6b3 = cache_frame_f087d9535657a412c95289d6ce6fa6b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f087d9535657a412c95289d6ce6fa6b3);
    assert(Py_REFCNT(frame_f087d9535657a412c95289d6ce6fa6b3) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[97]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_f087d9535657a412c95289d6ce6fa6b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f087d9535657a412c95289d6ce6fa6b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f087d9535657a412c95289d6ce6fa6b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f087d9535657a412c95289d6ce6fa6b3,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_f087d9535657a412c95289d6ce6fa6b3 == cache_frame_f087d9535657a412c95289d6ce6fa6b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f087d9535657a412c95289d6ce6fa6b3);
        cache_frame_f087d9535657a412c95289d6ce6fa6b3 = NULL;
    }

    assertFrameObject(frame_f087d9535657a412c95289d6ce6fa6b3);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__17_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_worksheet = python_pars[1];
    struct Nuitka_FrameObject *frame_1db2b12053f29dcd5371792555cbbaaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1db2b12053f29dcd5371792555cbbaaf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1db2b12053f29dcd5371792555cbbaaf)) {
        Py_XDECREF(cache_frame_1db2b12053f29dcd5371792555cbbaaf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1db2b12053f29dcd5371792555cbbaaf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1db2b12053f29dcd5371792555cbbaaf = MAKE_FUNCTION_FRAME(codeobj_1db2b12053f29dcd5371792555cbbaaf, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1db2b12053f29dcd5371792555cbbaaf->m_type_description == NULL);
    frame_1db2b12053f29dcd5371792555cbbaaf = cache_frame_1db2b12053f29dcd5371792555cbbaaf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1db2b12053f29dcd5371792555cbbaaf);
    assert(Py_REFCNT(frame_1db2b12053f29dcd5371792555cbbaaf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[98]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_worksheet);
        tmp_args_element_value_1 = par_worksheet;
        frame_1db2b12053f29dcd5371792555cbbaaf->m_frame.f_lineno = 255;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_1db2b12053f29dcd5371792555cbbaaf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1db2b12053f29dcd5371792555cbbaaf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1db2b12053f29dcd5371792555cbbaaf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1db2b12053f29dcd5371792555cbbaaf,
        type_description_1,
        par_self,
        par_worksheet
    );


    // Release cached frame if used for exception.
    if (frame_1db2b12053f29dcd5371792555cbbaaf == cache_frame_1db2b12053f29dcd5371792555cbbaaf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1db2b12053f29dcd5371792555cbbaaf);
        cache_frame_1db2b12053f29dcd5371792555cbbaaf = NULL;
    }

    assertFrameObject(frame_1db2b12053f29dcd5371792555cbbaaf);

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
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__18_get_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_worksheet = python_pars[1];
    struct Nuitka_FrameObject *frame_cfe631b8184c98e6fd4f2050eb129ddb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cfe631b8184c98e6fd4f2050eb129ddb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cfe631b8184c98e6fd4f2050eb129ddb)) {
        Py_XDECREF(cache_frame_cfe631b8184c98e6fd4f2050eb129ddb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cfe631b8184c98e6fd4f2050eb129ddb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cfe631b8184c98e6fd4f2050eb129ddb = MAKE_FUNCTION_FRAME(codeobj_cfe631b8184c98e6fd4f2050eb129ddb, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cfe631b8184c98e6fd4f2050eb129ddb->m_type_description == NULL);
    frame_cfe631b8184c98e6fd4f2050eb129ddb = cache_frame_cfe631b8184c98e6fd4f2050eb129ddb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cfe631b8184c98e6fd4f2050eb129ddb);
    assert(Py_REFCNT(frame_cfe631b8184c98e6fd4f2050eb129ddb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_worksheet);
        tmp_args_element_value_1 = par_worksheet;
        frame_cfe631b8184c98e6fd4f2050eb129ddb->m_frame.f_lineno = 261;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_cfe631b8184c98e6fd4f2050eb129ddb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cfe631b8184c98e6fd4f2050eb129ddb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cfe631b8184c98e6fd4f2050eb129ddb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cfe631b8184c98e6fd4f2050eb129ddb,
        type_description_1,
        par_self,
        par_worksheet
    );


    // Release cached frame if used for exception.
    if (frame_cfe631b8184c98e6fd4f2050eb129ddb == cache_frame_cfe631b8184c98e6fd4f2050eb129ddb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cfe631b8184c98e6fd4f2050eb129ddb);
        cache_frame_cfe631b8184c98e6fd4f2050eb129ddb = NULL;
    }

    assertFrameObject(frame_cfe631b8184c98e6fd4f2050eb129ddb);

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
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__19___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *var_sheet = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_53457ce11fb1fc11a1bbf277a7b01636;
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
    static struct Nuitka_FrameObject *cache_frame_53457ce11fb1fc11a1bbf277a7b01636 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_53457ce11fb1fc11a1bbf277a7b01636)) {
        Py_XDECREF(cache_frame_53457ce11fb1fc11a1bbf277a7b01636);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53457ce11fb1fc11a1bbf277a7b01636 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53457ce11fb1fc11a1bbf277a7b01636 = MAKE_FUNCTION_FRAME(codeobj_53457ce11fb1fc11a1bbf277a7b01636, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53457ce11fb1fc11a1bbf277a7b01636->m_type_description == NULL);
    frame_53457ce11fb1fc11a1bbf277a7b01636 = cache_frame_53457ce11fb1fc11a1bbf277a7b01636;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53457ce11fb1fc11a1bbf277a7b01636);
    assert(Py_REFCNT(frame_53457ce11fb1fc11a1bbf277a7b01636) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[98]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[101]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 270;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
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
                exception_lineno = 270;
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
            PyObject *old = var_sheet;
            var_sheet = tmp_assign_source_3;
            Py_INCREF(var_sheet);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_sheet);
        tmp_expression_value_3 = var_sheet;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[102]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_right_1 = par_key;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_sheet);
    tmp_return_value = var_sheet;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 270;
        type_description_1 = "ooo";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[103];
        CHECK_OBJECT(par_key);
        tmp_kw_call_arg_value_1_1 = par_key;
        frame_53457ce11fb1fc11a1bbf277a7b01636->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_53457ce11fb1fc11a1bbf277a7b01636->m_frame.f_lineno = 273;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_KeyError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 273;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_53457ce11fb1fc11a1bbf277a7b01636, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53457ce11fb1fc11a1bbf277a7b01636->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53457ce11fb1fc11a1bbf277a7b01636, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53457ce11fb1fc11a1bbf277a7b01636,
        type_description_1,
        par_self,
        par_key,
        var_sheet
    );


    // Release cached frame if used for exception.
    if (frame_53457ce11fb1fc11a1bbf277a7b01636 == cache_frame_53457ce11fb1fc11a1bbf277a7b01636) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53457ce11fb1fc11a1bbf277a7b01636);
        cache_frame_53457ce11fb1fc11a1bbf277a7b01636 = NULL;
    }

    assertFrameObject(frame_53457ce11fb1fc11a1bbf277a7b01636);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sheet);
    Py_DECREF(var_sheet);
    var_sheet = NULL;
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

    Py_XDECREF(var_sheet);
    var_sheet = NULL;
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


static PyObject *impl_openpyxl$workbook$workbook$$$function__20___delitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *var_sheet = NULL;
    struct Nuitka_FrameObject *frame_0c09282add7d1fa4d26f2c550b7b85a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0c09282add7d1fa4d26f2c550b7b85a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0c09282add7d1fa4d26f2c550b7b85a3)) {
        Py_XDECREF(cache_frame_0c09282add7d1fa4d26f2c550b7b85a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c09282add7d1fa4d26f2c550b7b85a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c09282add7d1fa4d26f2c550b7b85a3 = MAKE_FUNCTION_FRAME(codeobj_0c09282add7d1fa4d26f2c550b7b85a3, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c09282add7d1fa4d26f2c550b7b85a3->m_type_description == NULL);
    frame_0c09282add7d1fa4d26f2c550b7b85a3 = cache_frame_0c09282add7d1fa4d26f2c550b7b85a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c09282add7d1fa4d26f2c550b7b85a3);
    assert(Py_REFCNT(frame_0c09282add7d1fa4d26f2c550b7b85a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_sheet == NULL);
        var_sheet = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sheet);
        tmp_args_element_value_1 = var_sheet;
        frame_0c09282add7d1fa4d26f2c550b7b85a3->m_frame.f_lineno = 277;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
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
        exception_tb = MAKE_TRACEBACK(frame_0c09282add7d1fa4d26f2c550b7b85a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c09282add7d1fa4d26f2c550b7b85a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c09282add7d1fa4d26f2c550b7b85a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c09282add7d1fa4d26f2c550b7b85a3,
        type_description_1,
        par_self,
        par_key,
        var_sheet
    );


    // Release cached frame if used for exception.
    if (frame_0c09282add7d1fa4d26f2c550b7b85a3 == cache_frame_0c09282add7d1fa4d26f2c550b7b85a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c09282add7d1fa4d26f2c550b7b85a3);
        cache_frame_0c09282add7d1fa4d26f2c550b7b85a3 = NULL;
    }

    assertFrameObject(frame_0c09282add7d1fa4d26f2c550b7b85a3);

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
    CHECK_OBJECT(var_sheet);
    Py_DECREF(var_sheet);
    var_sheet = NULL;
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

    Py_XDECREF(var_sheet);
    var_sheet = NULL;
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


static PyObject *impl_openpyxl$workbook$workbook$$$function__21___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_455a531749dad00641cdc96e1abd6bcb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_455a531749dad00641cdc96e1abd6bcb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_455a531749dad00641cdc96e1abd6bcb)) {
        Py_XDECREF(cache_frame_455a531749dad00641cdc96e1abd6bcb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_455a531749dad00641cdc96e1abd6bcb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_455a531749dad00641cdc96e1abd6bcb = MAKE_FUNCTION_FRAME(codeobj_455a531749dad00641cdc96e1abd6bcb, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_455a531749dad00641cdc96e1abd6bcb->m_type_description == NULL);
    frame_455a531749dad00641cdc96e1abd6bcb = cache_frame_455a531749dad00641cdc96e1abd6bcb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_455a531749dad00641cdc96e1abd6bcb);
    assert(Py_REFCNT(frame_455a531749dad00641cdc96e1abd6bcb) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[98]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
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
        exception_tb = MAKE_TRACEBACK(frame_455a531749dad00641cdc96e1abd6bcb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_455a531749dad00641cdc96e1abd6bcb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_455a531749dad00641cdc96e1abd6bcb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_455a531749dad00641cdc96e1abd6bcb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_455a531749dad00641cdc96e1abd6bcb == cache_frame_455a531749dad00641cdc96e1abd6bcb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_455a531749dad00641cdc96e1abd6bcb);
        cache_frame_455a531749dad00641cdc96e1abd6bcb = NULL;
    }

    assertFrameObject(frame_455a531749dad00641cdc96e1abd6bcb);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__22_get_sheet_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b79a702396222d5d100927b6b04107de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b79a702396222d5d100927b6b04107de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b79a702396222d5d100927b6b04107de)) {
        Py_XDECREF(cache_frame_b79a702396222d5d100927b6b04107de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b79a702396222d5d100927b6b04107de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b79a702396222d5d100927b6b04107de = MAKE_FUNCTION_FRAME(codeobj_b79a702396222d5d100927b6b04107de, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b79a702396222d5d100927b6b04107de->m_type_description == NULL);
    frame_b79a702396222d5d100927b6b04107de = cache_frame_b79a702396222d5d100927b6b04107de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b79a702396222d5d100927b6b04107de);
    assert(Py_REFCNT(frame_b79a702396222d5d100927b6b04107de) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[97]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
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
        exception_tb = MAKE_TRACEBACK(frame_b79a702396222d5d100927b6b04107de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b79a702396222d5d100927b6b04107de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b79a702396222d5d100927b6b04107de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b79a702396222d5d100927b6b04107de,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b79a702396222d5d100927b6b04107de == cache_frame_b79a702396222d5d100927b6b04107de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b79a702396222d5d100927b6b04107de);
        cache_frame_b79a702396222d5d100927b6b04107de = NULL;
    }

    assertFrameObject(frame_b79a702396222d5d100927b6b04107de);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__23_worksheets(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_23eab28b49379818bf9540c46aefe1cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a8dc5932ca2cfbd3136662b85e33966b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_23eab28b49379818bf9540c46aefe1cf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23eab28b49379818bf9540c46aefe1cf)) {
        Py_XDECREF(cache_frame_23eab28b49379818bf9540c46aefe1cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23eab28b49379818bf9540c46aefe1cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23eab28b49379818bf9540c46aefe1cf = MAKE_FUNCTION_FRAME(codeobj_23eab28b49379818bf9540c46aefe1cf, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23eab28b49379818bf9540c46aefe1cf->m_type_description == NULL);
    frame_23eab28b49379818bf9540c46aefe1cf = cache_frame_23eab28b49379818bf9540c46aefe1cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23eab28b49379818bf9540c46aefe1cf);
    assert(Py_REFCNT(frame_23eab28b49379818bf9540c46aefe1cf) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
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
    if (isFrameUnusable(cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2)) {
        Py_XDECREF(cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2 = MAKE_FUNCTION_FRAME(codeobj_a8dc5932ca2cfbd3136662b85e33966b, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2->m_type_description == NULL);
    frame_a8dc5932ca2cfbd3136662b85e33966b_2 = cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a8dc5932ca2cfbd3136662b85e33966b_2);
    assert(Py_REFCNT(frame_a8dc5932ca2cfbd3136662b85e33966b_2) == 2);

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
                exception_lineno = 293;
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
            PyObject *old = outline_0_var_s;
            outline_0_var_s = tmp_assign_source_4;
            Py_INCREF(outline_0_var_s);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(outline_0_var_s);
        tmp_isinstance_inst_1 = outline_0_var_s;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "o";
            goto try_except_handler_2;
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
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_s);
        tmp_append_value_1 = outline_0_var_s;
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 293;
        type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_a8dc5932ca2cfbd3136662b85e33966b_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8dc5932ca2cfbd3136662b85e33966b_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8dc5932ca2cfbd3136662b85e33966b_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8dc5932ca2cfbd3136662b85e33966b_2,
        type_description_2,
        outline_0_var_s
    );


    // Release cached frame if used for exception.
    if (frame_a8dc5932ca2cfbd3136662b85e33966b_2 == cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2);
        cache_frame_a8dc5932ca2cfbd3136662b85e33966b_2 = NULL;
    }

    assertFrameObject(frame_a8dc5932ca2cfbd3136662b85e33966b_2);

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
    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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

    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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
    exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_23eab28b49379818bf9540c46aefe1cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23eab28b49379818bf9540c46aefe1cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23eab28b49379818bf9540c46aefe1cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23eab28b49379818bf9540c46aefe1cf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_23eab28b49379818bf9540c46aefe1cf == cache_frame_23eab28b49379818bf9540c46aefe1cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23eab28b49379818bf9540c46aefe1cf);
        cache_frame_23eab28b49379818bf9540c46aefe1cf = NULL;
    }

    assertFrameObject(frame_23eab28b49379818bf9540c46aefe1cf);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__24_chartsheets(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_889019671cce89013bd05bdc732edeac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_e381a584bf1a7d9edc65d77a9989a09b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_889019671cce89013bd05bdc732edeac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_889019671cce89013bd05bdc732edeac)) {
        Py_XDECREF(cache_frame_889019671cce89013bd05bdc732edeac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_889019671cce89013bd05bdc732edeac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_889019671cce89013bd05bdc732edeac = MAKE_FUNCTION_FRAME(codeobj_889019671cce89013bd05bdc732edeac, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_889019671cce89013bd05bdc732edeac->m_type_description == NULL);
    frame_889019671cce89013bd05bdc732edeac = cache_frame_889019671cce89013bd05bdc732edeac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_889019671cce89013bd05bdc732edeac);
    assert(Py_REFCNT(frame_889019671cce89013bd05bdc732edeac) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
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
    if (isFrameUnusable(cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2)) {
        Py_XDECREF(cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2 = MAKE_FUNCTION_FRAME(codeobj_e381a584bf1a7d9edc65d77a9989a09b, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2->m_type_description == NULL);
    frame_e381a584bf1a7d9edc65d77a9989a09b_2 = cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e381a584bf1a7d9edc65d77a9989a09b_2);
    assert(Py_REFCNT(frame_e381a584bf1a7d9edc65d77a9989a09b_2) == 2);

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
                exception_lineno = 301;
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
            PyObject *old = outline_0_var_s;
            outline_0_var_s = tmp_assign_source_4;
            Py_INCREF(outline_0_var_s);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(outline_0_var_s);
        tmp_isinstance_inst_1 = outline_0_var_s;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto try_except_handler_2;
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
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_s);
        tmp_append_value_1 = outline_0_var_s;
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 301;
        type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_e381a584bf1a7d9edc65d77a9989a09b_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e381a584bf1a7d9edc65d77a9989a09b_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e381a584bf1a7d9edc65d77a9989a09b_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e381a584bf1a7d9edc65d77a9989a09b_2,
        type_description_2,
        outline_0_var_s
    );


    // Release cached frame if used for exception.
    if (frame_e381a584bf1a7d9edc65d77a9989a09b_2 == cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2);
        cache_frame_e381a584bf1a7d9edc65d77a9989a09b_2 = NULL;
    }

    assertFrameObject(frame_e381a584bf1a7d9edc65d77a9989a09b_2);

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
    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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

    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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
    exception_lineno = 301;
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
        exception_tb = MAKE_TRACEBACK(frame_889019671cce89013bd05bdc732edeac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_889019671cce89013bd05bdc732edeac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_889019671cce89013bd05bdc732edeac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_889019671cce89013bd05bdc732edeac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_889019671cce89013bd05bdc732edeac == cache_frame_889019671cce89013bd05bdc732edeac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_889019671cce89013bd05bdc732edeac);
        cache_frame_889019671cce89013bd05bdc732edeac = NULL;
    }

    assertFrameObject(frame_889019671cce89013bd05bdc732edeac);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__25_sheetnames(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e0a2c035bae025700c91c6df5347f3e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_216b3cdda2f5ef3be362bfc6d28e2d32_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e0a2c035bae025700c91c6df5347f3e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0a2c035bae025700c91c6df5347f3e5)) {
        Py_XDECREF(cache_frame_e0a2c035bae025700c91c6df5347f3e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0a2c035bae025700c91c6df5347f3e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0a2c035bae025700c91c6df5347f3e5 = MAKE_FUNCTION_FRAME(codeobj_e0a2c035bae025700c91c6df5347f3e5, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0a2c035bae025700c91c6df5347f3e5->m_type_description == NULL);
    frame_e0a2c035bae025700c91c6df5347f3e5 = cache_frame_e0a2c035bae025700c91c6df5347f3e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0a2c035bae025700c91c6df5347f3e5);
    assert(Py_REFCNT(frame_e0a2c035bae025700c91c6df5347f3e5) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
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
    if (isFrameUnusable(cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2)) {
        Py_XDECREF(cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2 = MAKE_FUNCTION_FRAME(codeobj_216b3cdda2f5ef3be362bfc6d28e2d32, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2->m_type_description == NULL);
    frame_216b3cdda2f5ef3be362bfc6d28e2d32_2 = cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_216b3cdda2f5ef3be362bfc6d28e2d32_2);
    assert(Py_REFCNT(frame_216b3cdda2f5ef3be362bfc6d28e2d32_2) == 2);

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
                exception_lineno = 312;
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
            PyObject *old = outline_0_var_s;
            outline_0_var_s = tmp_assign_source_4;
            Py_INCREF(outline_0_var_s);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_s);
        tmp_expression_value_2 = outline_0_var_s;
        tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[102]);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 312;
        type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_216b3cdda2f5ef3be362bfc6d28e2d32_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_216b3cdda2f5ef3be362bfc6d28e2d32_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_216b3cdda2f5ef3be362bfc6d28e2d32_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_216b3cdda2f5ef3be362bfc6d28e2d32_2,
        type_description_2,
        outline_0_var_s
    );


    // Release cached frame if used for exception.
    if (frame_216b3cdda2f5ef3be362bfc6d28e2d32_2 == cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2);
        cache_frame_216b3cdda2f5ef3be362bfc6d28e2d32_2 = NULL;
    }

    assertFrameObject(frame_216b3cdda2f5ef3be362bfc6d28e2d32_2);

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
    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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

    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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
    exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_e0a2c035bae025700c91c6df5347f3e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0a2c035bae025700c91c6df5347f3e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0a2c035bae025700c91c6df5347f3e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0a2c035bae025700c91c6df5347f3e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e0a2c035bae025700c91c6df5347f3e5 == cache_frame_e0a2c035bae025700c91c6df5347f3e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0a2c035bae025700c91c6df5347f3e5);
        cache_frame_e0a2c035bae025700c91c6df5347f3e5 = NULL;
    }

    assertFrameObject(frame_e0a2c035bae025700c91c6df5347f3e5);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__26_create_named_range(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_worksheet = python_pars[2];
    PyObject *par_value = python_pars[3];
    PyObject *par_scope = python_pars[4];
    PyObject *var_defn = NULL;
    struct Nuitka_FrameObject *frame_10a672b5896a6b69c8b8d71c6ab9d2c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2)) {
        Py_XDECREF(cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2 = MAKE_FUNCTION_FRAME(codeobj_10a672b5896a6b69c8b8d71c6ab9d2c2, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2->m_type_description == NULL);
    frame_10a672b5896a6b69c8b8d71c6ab9d2c2 = cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_10a672b5896a6b69c8b8d71c6ab9d2c2);
    assert(Py_REFCNT(frame_10a672b5896a6b69c8b8d71c6ab9d2c2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_kw_call_value_0_1 = par_name;
        CHECK_OBJECT(par_scope);
        tmp_kw_call_value_1_1 = par_scope;
        frame_10a672b5896a6b69c8b8d71c6ab9d2c2->m_frame.f_lineno = 316;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[109]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_defn == NULL);
        var_defn = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_worksheet);
        tmp_cmp_expr_left_1 = par_worksheet;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_assattr_target_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[110];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_worksheet);
        tmp_expression_value_1 = par_worksheet;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[102]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_10a672b5896a6b69c8b8d71c6ab9d2c2->m_frame.f_lineno = 318;
        tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_arg_value_2_1 = par_value;
        frame_10a672b5896a6b69c8b8d71c6ab9d2c2->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_defn);
        tmp_assattr_target_1 = var_defn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[112], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_2 = par_value;
        CHECK_OBJECT(var_defn);
        tmp_assattr_target_2 = var_defn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[112], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_defn == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_defn;
        frame_10a672b5896a6b69c8b8d71c6ab9d2c2->m_frame.f_lineno = 322;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10a672b5896a6b69c8b8d71c6ab9d2c2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10a672b5896a6b69c8b8d71c6ab9d2c2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10a672b5896a6b69c8b8d71c6ab9d2c2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10a672b5896a6b69c8b8d71c6ab9d2c2,
        type_description_1,
        par_self,
        par_name,
        par_worksheet,
        par_value,
        par_scope,
        var_defn
    );


    // Release cached frame if used for exception.
    if (frame_10a672b5896a6b69c8b8d71c6ab9d2c2 == cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2);
        cache_frame_10a672b5896a6b69c8b8d71c6ab9d2c2 = NULL;
    }

    assertFrameObject(frame_10a672b5896a6b69c8b8d71c6ab9d2c2);

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
    Py_XDECREF(var_defn);
    var_defn = NULL;
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

    Py_XDECREF(var_defn);
    var_defn = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_worksheet);
    Py_DECREF(par_worksheet);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__27_add_named_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_style = python_pars[1];
    struct Nuitka_FrameObject *frame_29ee0c3a68aa99d612473c4eb795c513;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29ee0c3a68aa99d612473c4eb795c513 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29ee0c3a68aa99d612473c4eb795c513)) {
        Py_XDECREF(cache_frame_29ee0c3a68aa99d612473c4eb795c513);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29ee0c3a68aa99d612473c4eb795c513 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29ee0c3a68aa99d612473c4eb795c513 = MAKE_FUNCTION_FRAME(codeobj_29ee0c3a68aa99d612473c4eb795c513, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29ee0c3a68aa99d612473c4eb795c513->m_type_description == NULL);
    frame_29ee0c3a68aa99d612473c4eb795c513 = cache_frame_29ee0c3a68aa99d612473c4eb795c513;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_29ee0c3a68aa99d612473c4eb795c513);
    assert(Py_REFCNT(frame_29ee0c3a68aa99d612473c4eb795c513) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_style);
        tmp_args_element_value_1 = par_style;
        frame_29ee0c3a68aa99d612473c4eb795c513->m_frame.f_lineno = 329;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_style);
        tmp_called_instance_1 = par_style;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_29ee0c3a68aa99d612473c4eb795c513->m_frame.f_lineno = 330;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[115], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29ee0c3a68aa99d612473c4eb795c513, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29ee0c3a68aa99d612473c4eb795c513->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29ee0c3a68aa99d612473c4eb795c513, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29ee0c3a68aa99d612473c4eb795c513,
        type_description_1,
        par_self,
        par_style
    );


    // Release cached frame if used for exception.
    if (frame_29ee0c3a68aa99d612473c4eb795c513 == cache_frame_29ee0c3a68aa99d612473c4eb795c513) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29ee0c3a68aa99d612473c4eb795c513);
        cache_frame_29ee0c3a68aa99d612473c4eb795c513 = NULL;
    }

    assertFrameObject(frame_29ee0c3a68aa99d612473c4eb795c513);

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
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__28_named_styles(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f5c3fab395effea54fc44b2a6204d7b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f5c3fab395effea54fc44b2a6204d7b8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f5c3fab395effea54fc44b2a6204d7b8)) {
        Py_XDECREF(cache_frame_f5c3fab395effea54fc44b2a6204d7b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5c3fab395effea54fc44b2a6204d7b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5c3fab395effea54fc44b2a6204d7b8 = MAKE_FUNCTION_FRAME(codeobj_f5c3fab395effea54fc44b2a6204d7b8, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5c3fab395effea54fc44b2a6204d7b8->m_type_description == NULL);
    frame_f5c3fab395effea54fc44b2a6204d7b8 = cache_frame_f5c3fab395effea54fc44b2a6204d7b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5c3fab395effea54fc44b2a6204d7b8);
    assert(Py_REFCNT(frame_f5c3fab395effea54fc44b2a6204d7b8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[117]);
        Py_DECREF(tmp_expression_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_f5c3fab395effea54fc44b2a6204d7b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5c3fab395effea54fc44b2a6204d7b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5c3fab395effea54fc44b2a6204d7b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5c3fab395effea54fc44b2a6204d7b8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f5c3fab395effea54fc44b2a6204d7b8 == cache_frame_f5c3fab395effea54fc44b2a6204d7b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5c3fab395effea54fc44b2a6204d7b8);
        cache_frame_f5c3fab395effea54fc44b2a6204d7b8 = NULL;
    }

    assertFrameObject(frame_f5c3fab395effea54fc44b2a6204d7b8);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__29_get_named_ranges(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1a8b075f391e8b1d8abdcb17f318ef77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a8b075f391e8b1d8abdcb17f318ef77 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a8b075f391e8b1d8abdcb17f318ef77)) {
        Py_XDECREF(cache_frame_1a8b075f391e8b1d8abdcb17f318ef77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a8b075f391e8b1d8abdcb17f318ef77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a8b075f391e8b1d8abdcb17f318ef77 = MAKE_FUNCTION_FRAME(codeobj_1a8b075f391e8b1d8abdcb17f318ef77, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a8b075f391e8b1d8abdcb17f318ef77->m_type_description == NULL);
    frame_1a8b075f391e8b1d8abdcb17f318ef77 = cache_frame_1a8b075f391e8b1d8abdcb17f318ef77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a8b075f391e8b1d8abdcb17f318ef77);
    assert(Py_REFCNT(frame_1a8b075f391e8b1d8abdcb17f318ef77) == 2);

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


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[119]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
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
        exception_tb = MAKE_TRACEBACK(frame_1a8b075f391e8b1d8abdcb17f318ef77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a8b075f391e8b1d8abdcb17f318ef77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a8b075f391e8b1d8abdcb17f318ef77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a8b075f391e8b1d8abdcb17f318ef77,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1a8b075f391e8b1d8abdcb17f318ef77 == cache_frame_1a8b075f391e8b1d8abdcb17f318ef77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a8b075f391e8b1d8abdcb17f318ef77);
        cache_frame_1a8b075f391e8b1d8abdcb17f318ef77 = NULL;
    }

    assertFrameObject(frame_1a8b075f391e8b1d8abdcb17f318ef77);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__30_add_named_range(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_named_range = python_pars[1];
    struct Nuitka_FrameObject *frame_ec6465522db483402860c47aa4894cf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec6465522db483402860c47aa4894cf8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec6465522db483402860c47aa4894cf8)) {
        Py_XDECREF(cache_frame_ec6465522db483402860c47aa4894cf8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec6465522db483402860c47aa4894cf8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec6465522db483402860c47aa4894cf8 = MAKE_FUNCTION_FRAME(codeobj_ec6465522db483402860c47aa4894cf8, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec6465522db483402860c47aa4894cf8->m_type_description == NULL);
    frame_ec6465522db483402860c47aa4894cf8 = cache_frame_ec6465522db483402860c47aa4894cf8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec6465522db483402860c47aa4894cf8);
    assert(Py_REFCNT(frame_ec6465522db483402860c47aa4894cf8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_named_range);
        tmp_args_element_value_1 = par_named_range;
        frame_ec6465522db483402860c47aa4894cf8->m_frame.f_lineno = 350;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
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
        exception_tb = MAKE_TRACEBACK(frame_ec6465522db483402860c47aa4894cf8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec6465522db483402860c47aa4894cf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec6465522db483402860c47aa4894cf8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec6465522db483402860c47aa4894cf8,
        type_description_1,
        par_self,
        par_named_range
    );


    // Release cached frame if used for exception.
    if (frame_ec6465522db483402860c47aa4894cf8 == cache_frame_ec6465522db483402860c47aa4894cf8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec6465522db483402860c47aa4894cf8);
        cache_frame_ec6465522db483402860c47aa4894cf8 = NULL;
    }

    assertFrameObject(frame_ec6465522db483402860c47aa4894cf8);

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
    CHECK_OBJECT(par_named_range);
    Py_DECREF(par_named_range);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_named_range);
    Py_DECREF(par_named_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__31_get_named_range(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_6db97ef09ec6a384de9f1a0e52dc1eef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef)) {
        Py_XDECREF(cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef = MAKE_FUNCTION_FRAME(codeobj_6db97ef09ec6a384de9f1a0e52dc1eef, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef->m_type_description == NULL);
    frame_6db97ef09ec6a384de9f1a0e52dc1eef = cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6db97ef09ec6a384de9f1a0e52dc1eef);
    assert(Py_REFCNT(frame_6db97ef09ec6a384de9f1a0e52dc1eef) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
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
        exception_tb = MAKE_TRACEBACK(frame_6db97ef09ec6a384de9f1a0e52dc1eef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6db97ef09ec6a384de9f1a0e52dc1eef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6db97ef09ec6a384de9f1a0e52dc1eef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6db97ef09ec6a384de9f1a0e52dc1eef,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_6db97ef09ec6a384de9f1a0e52dc1eef == cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef);
        cache_frame_6db97ef09ec6a384de9f1a0e52dc1eef = NULL;
    }

    assertFrameObject(frame_6db97ef09ec6a384de9f1a0e52dc1eef);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__32_remove_named_range(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_named_range = python_pars[1];
    struct Nuitka_FrameObject *frame_78732b50bff6dc2d98286af2ed8df785;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_78732b50bff6dc2d98286af2ed8df785 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78732b50bff6dc2d98286af2ed8df785)) {
        Py_XDECREF(cache_frame_78732b50bff6dc2d98286af2ed8df785);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78732b50bff6dc2d98286af2ed8df785 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78732b50bff6dc2d98286af2ed8df785 = MAKE_FUNCTION_FRAME(codeobj_78732b50bff6dc2d98286af2ed8df785, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78732b50bff6dc2d98286af2ed8df785->m_type_description == NULL);
    frame_78732b50bff6dc2d98286af2ed8df785 = cache_frame_78732b50bff6dc2d98286af2ed8df785;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_78732b50bff6dc2d98286af2ed8df785);
    assert(Py_REFCNT(frame_78732b50bff6dc2d98286af2ed8df785) == 2);

    // Framed code:
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_named_range);
        tmp_delsubscr_subscript_1 = par_named_range;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78732b50bff6dc2d98286af2ed8df785, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78732b50bff6dc2d98286af2ed8df785->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78732b50bff6dc2d98286af2ed8df785, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78732b50bff6dc2d98286af2ed8df785,
        type_description_1,
        par_self,
        par_named_range
    );


    // Release cached frame if used for exception.
    if (frame_78732b50bff6dc2d98286af2ed8df785 == cache_frame_78732b50bff6dc2d98286af2ed8df785) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78732b50bff6dc2d98286af2ed8df785);
        cache_frame_78732b50bff6dc2d98286af2ed8df785 = NULL;
    }

    assertFrameObject(frame_78732b50bff6dc2d98286af2ed8df785);

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
    CHECK_OBJECT(par_named_range);
    Py_DECREF(par_named_range);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_named_range);
    Py_DECREF(par_named_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__33_mime_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ct = NULL;
    struct Nuitka_FrameObject *frame_721f1f1fe18d27423c52d2042feb2c55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_721f1f1fe18d27423c52d2042feb2c55 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_721f1f1fe18d27423c52d2042feb2c55)) {
        Py_XDECREF(cache_frame_721f1f1fe18d27423c52d2042feb2c55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_721f1f1fe18d27423c52d2042feb2c55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_721f1f1fe18d27423c52d2042feb2c55 = MAKE_FUNCTION_FRAME(codeobj_721f1f1fe18d27423c52d2042feb2c55, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_721f1f1fe18d27423c52d2042feb2c55->m_type_description == NULL);
    frame_721f1f1fe18d27423c52d2042feb2c55 = cache_frame_721f1f1fe18d27423c52d2042feb2c55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_721f1f1fe18d27423c52d2042feb2c55);
    assert(Py_REFCNT(frame_721f1f1fe18d27423c52d2042feb2c55) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[124]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        tmp_and_right_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_and_right_value_1 == NULL)) {
            tmp_and_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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

            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_ct == NULL);
        var_ct = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 374;
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
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_and_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[124]);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        tmp_and_right_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_and_right_value_2 == NULL)) {
            tmp_and_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_and_right_value_2);
        tmp_or_left_value_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_left_value_2 = tmp_and_left_value_2;
        and_end_2:;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_or_right_value_2 == NULL)) {
            tmp_or_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_2);
        tmp_assign_source_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_2 = tmp_or_left_value_2;
        or_end_2:;
        {
            PyObject *old = var_ct;
            assert(old != NULL);
            var_ct = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_721f1f1fe18d27423c52d2042feb2c55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_721f1f1fe18d27423c52d2042feb2c55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_721f1f1fe18d27423c52d2042feb2c55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_721f1f1fe18d27423c52d2042feb2c55,
        type_description_1,
        par_self,
        var_ct
    );


    // Release cached frame if used for exception.
    if (frame_721f1f1fe18d27423c52d2042feb2c55 == cache_frame_721f1f1fe18d27423c52d2042feb2c55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_721f1f1fe18d27423c52d2042feb2c55);
        cache_frame_721f1f1fe18d27423c52d2042feb2c55 = NULL;
    }

    assertFrameObject(frame_721f1f1fe18d27423c52d2042feb2c55);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ct);
    tmp_return_value = var_ct;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ct);
    Py_DECREF(var_ct);
    var_ct = NULL;
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

    Py_XDECREF(var_ct);
    var_ct = NULL;
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


static PyObject *impl_openpyxl$workbook$workbook$$$function__34_save(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    struct Nuitka_FrameObject *frame_513616d7c91d4dfb944609e17f289bb6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_513616d7c91d4dfb944609e17f289bb6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_513616d7c91d4dfb944609e17f289bb6)) {
        Py_XDECREF(cache_frame_513616d7c91d4dfb944609e17f289bb6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_513616d7c91d4dfb944609e17f289bb6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_513616d7c91d4dfb944609e17f289bb6 = MAKE_FUNCTION_FRAME(codeobj_513616d7c91d4dfb944609e17f289bb6, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_513616d7c91d4dfb944609e17f289bb6->m_type_description == NULL);
    frame_513616d7c91d4dfb944609e17f289bb6 = cache_frame_513616d7c91d4dfb944609e17f289bb6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_513616d7c91d4dfb944609e17f289bb6);
    assert(Py_REFCNT(frame_513616d7c91d4dfb944609e17f289bb6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 388;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[130];
        frame_513616d7c91d4dfb944609e17f289bb6->m_frame.f_lineno = 389;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 389;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[98]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_513616d7c91d4dfb944609e17f289bb6->m_frame.f_lineno = 391;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[131]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_2 = par_filename;
        frame_513616d7c91d4dfb944609e17f289bb6->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_513616d7c91d4dfb944609e17f289bb6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_513616d7c91d4dfb944609e17f289bb6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_513616d7c91d4dfb944609e17f289bb6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_513616d7c91d4dfb944609e17f289bb6,
        type_description_1,
        par_self,
        par_filename
    );


    // Release cached frame if used for exception.
    if (frame_513616d7c91d4dfb944609e17f289bb6 == cache_frame_513616d7c91d4dfb944609e17f289bb6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_513616d7c91d4dfb944609e17f289bb6);
        cache_frame_513616d7c91d4dfb944609e17f289bb6 = NULL;
    }

    assertFrameObject(frame_513616d7c91d4dfb944609e17f289bb6);

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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__35_style_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_47adf3e5e43505a7297d58a8bae8ffd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_f78e79bf675d0b6749b22871d5169d7d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f78e79bf675d0b6749b22871d5169d7d_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_47adf3e5e43505a7297d58a8bae8ffd1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47adf3e5e43505a7297d58a8bae8ffd1)) {
        Py_XDECREF(cache_frame_47adf3e5e43505a7297d58a8bae8ffd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47adf3e5e43505a7297d58a8bae8ffd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47adf3e5e43505a7297d58a8bae8ffd1 = MAKE_FUNCTION_FRAME(codeobj_47adf3e5e43505a7297d58a8bae8ffd1, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47adf3e5e43505a7297d58a8bae8ffd1->m_type_description == NULL);
    frame_47adf3e5e43505a7297d58a8bae8ffd1 = cache_frame_47adf3e5e43505a7297d58a8bae8ffd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47adf3e5e43505a7297d58a8bae8ffd1);
    assert(Py_REFCNT(frame_47adf3e5e43505a7297d58a8bae8ffd1) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
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
    if (isFrameUnusable(cache_frame_f78e79bf675d0b6749b22871d5169d7d_2)) {
        Py_XDECREF(cache_frame_f78e79bf675d0b6749b22871d5169d7d_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f78e79bf675d0b6749b22871d5169d7d_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f78e79bf675d0b6749b22871d5169d7d_2 = MAKE_FUNCTION_FRAME(codeobj_f78e79bf675d0b6749b22871d5169d7d, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f78e79bf675d0b6749b22871d5169d7d_2->m_type_description == NULL);
    frame_f78e79bf675d0b6749b22871d5169d7d_2 = cache_frame_f78e79bf675d0b6749b22871d5169d7d_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f78e79bf675d0b6749b22871d5169d7d_2);
    assert(Py_REFCNT(frame_f78e79bf675d0b6749b22871d5169d7d_2) == 2);

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
                exception_lineno = 400;
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
            PyObject *old = outline_0_var_s;
            outline_0_var_s = tmp_assign_source_4;
            Py_INCREF(outline_0_var_s);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_s);
        tmp_expression_value_2 = outline_0_var_s;
        tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[134]);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 400;
        type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_f78e79bf675d0b6749b22871d5169d7d_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f78e79bf675d0b6749b22871d5169d7d_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f78e79bf675d0b6749b22871d5169d7d_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f78e79bf675d0b6749b22871d5169d7d_2,
        type_description_2,
        outline_0_var_s
    );


    // Release cached frame if used for exception.
    if (frame_f78e79bf675d0b6749b22871d5169d7d_2 == cache_frame_f78e79bf675d0b6749b22871d5169d7d_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f78e79bf675d0b6749b22871d5169d7d_2);
        cache_frame_f78e79bf675d0b6749b22871d5169d7d_2 = NULL;
    }

    assertFrameObject(frame_f78e79bf675d0b6749b22871d5169d7d_2);

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
    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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

    Py_XDECREF(outline_0_var_s);
    outline_0_var_s = NULL;
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
    exception_lineno = 400;
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
        exception_tb = MAKE_TRACEBACK(frame_47adf3e5e43505a7297d58a8bae8ffd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47adf3e5e43505a7297d58a8bae8ffd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47adf3e5e43505a7297d58a8bae8ffd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47adf3e5e43505a7297d58a8bae8ffd1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_47adf3e5e43505a7297d58a8bae8ffd1 == cache_frame_47adf3e5e43505a7297d58a8bae8ffd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47adf3e5e43505a7297d58a8bae8ffd1);
        cache_frame_47adf3e5e43505a7297d58a8bae8ffd1 = NULL;
    }

    assertFrameObject(frame_47adf3e5e43505a7297d58a8bae8ffd1);

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


static PyObject *impl_openpyxl$workbook$workbook$$$function__36_copy_worksheet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_from_worksheet = python_pars[1];
    PyObject *var_new_title = NULL;
    PyObject *var_to_worksheet = NULL;
    PyObject *var_cp = NULL;
    struct Nuitka_FrameObject *frame_683494556f9d4672c5c2431f6e12f904;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_683494556f9d4672c5c2431f6e12f904 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_683494556f9d4672c5c2431f6e12f904)) {
        Py_XDECREF(cache_frame_683494556f9d4672c5c2431f6e12f904);

#if _DEBUG_REFCOUNTS
        if (cache_frame_683494556f9d4672c5c2431f6e12f904 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_683494556f9d4672c5c2431f6e12f904 = MAKE_FUNCTION_FRAME(codeobj_683494556f9d4672c5c2431f6e12f904, module_openpyxl$workbook$workbook, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_683494556f9d4672c5c2431f6e12f904->m_type_description == NULL);
    frame_683494556f9d4672c5c2431f6e12f904 = cache_frame_683494556f9d4672c5c2431f6e12f904;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_683494556f9d4672c5c2431f6e12f904);
    assert(Py_REFCNT(frame_683494556f9d4672c5c2431f6e12f904) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[136];
        frame_683494556f9d4672c5c2431f6e12f904->m_frame.f_lineno = 414;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 414;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        tmp_kw_call_arg_value_0_1 = mod_consts[137];
        CHECK_OBJECT(par_from_worksheet);
        tmp_expression_value_3 = par_from_worksheet;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[102]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_683494556f9d4672c5c2431f6e12f904->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_title == NULL);
        var_new_title = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[131]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_title);
        tmp_kw_call_value_0_1 = var_new_title;
        frame_683494556f9d4672c5c2431f6e12f904->m_frame.f_lineno = 417;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[138]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_to_worksheet == NULL);
        var_to_worksheet = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_from_worksheet);
        tmp_kw_call_value_0_2 = par_from_worksheet;
        CHECK_OBJECT(var_to_worksheet);
        tmp_kw_call_value_1_1 = var_to_worksheet;
        frame_683494556f9d4672c5c2431f6e12f904->m_frame.f_lineno = 418;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[140]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cp == NULL);
        var_cp = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_cp);
        tmp_called_instance_1 = var_cp;
        frame_683494556f9d4672c5c2431f6e12f904->m_frame.f_lineno = 419;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[141]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_683494556f9d4672c5c2431f6e12f904, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_683494556f9d4672c5c2431f6e12f904->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_683494556f9d4672c5c2431f6e12f904, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_683494556f9d4672c5c2431f6e12f904,
        type_description_1,
        par_self,
        par_from_worksheet,
        var_new_title,
        var_to_worksheet,
        var_cp
    );


    // Release cached frame if used for exception.
    if (frame_683494556f9d4672c5c2431f6e12f904 == cache_frame_683494556f9d4672c5c2431f6e12f904) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_683494556f9d4672c5c2431f6e12f904);
        cache_frame_683494556f9d4672c5c2431f6e12f904 = NULL;
    }

    assertFrameObject(frame_683494556f9d4672c5c2431f6e12f904);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_to_worksheet);
    tmp_return_value = var_to_worksheet;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_title);
    Py_DECREF(var_new_title);
    var_new_title = NULL;
    CHECK_OBJECT(var_to_worksheet);
    Py_DECREF(var_to_worksheet);
    var_to_worksheet = NULL;
    CHECK_OBJECT(var_cp);
    Py_DECREF(var_cp);
    var_cp = NULL;
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

    Py_XDECREF(var_new_title);
    var_new_title = NULL;
    Py_XDECREF(var_to_worksheet);
    var_to_worksheet = NULL;
    Py_XDECREF(var_cp);
    var_cp = NULL;
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
    CHECK_OBJECT(par_from_worksheet);
    Py_DECREF(par_from_worksheet);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_from_worksheet);
    Py_DECREF(par_from_worksheet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$workbook$workbook$$$function__37_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6a16bcc072953e149da372286d47993a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6a16bcc072953e149da372286d47993a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a16bcc072953e149da372286d47993a)) {
        Py_XDECREF(cache_frame_6a16bcc072953e149da372286d47993a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a16bcc072953e149da372286d47993a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a16bcc072953e149da372286d47993a = MAKE_FUNCTION_FRAME(codeobj_6a16bcc072953e149da372286d47993a, module_openpyxl$workbook$workbook, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a16bcc072953e149da372286d47993a->m_type_description == NULL);
    frame_6a16bcc072953e149da372286d47993a = cache_frame_6a16bcc072953e149da372286d47993a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a16bcc072953e149da372286d47993a);
    assert(Py_REFCNT(frame_6a16bcc072953e149da372286d47993a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = mod_consts[143];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[143]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6a16bcc072953e149da372286d47993a->m_frame.f_lineno = 428;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[144]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a16bcc072953e149da372286d47993a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a16bcc072953e149da372286d47993a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a16bcc072953e149da372286d47993a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a16bcc072953e149da372286d47993a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6a16bcc072953e149da372286d47993a == cache_frame_6a16bcc072953e149da372286d47993a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a16bcc072953e149da372286d47993a);
        cache_frame_6a16bcc072953e149da372286d47993a = NULL;
    }

    assertFrameObject(frame_6a16bcc072953e149da372286d47993a);

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



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__10__add_sheet(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__10__add_sheet,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_81d5ae12e523d9016737a55b10896d92,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__11_move_sheet(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__11_move_sheet,
        mod_consts[246],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_65b371108751c91a6ffad2b9900030f0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[88],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__12_remove() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__12_remove,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_4202aa9a04279726944cfdd2a990651f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__13_remove_sheet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__13_remove_sheet,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_7d5670945ccb3243d6f242ecae156971,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__14_create_chartsheet(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__14_create_chartsheet,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_c6d25247e52dbf01480eaafe02f39902,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__15_get_sheet_by_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__15_get_sheet_by_name,
        mod_consts[255],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_c1e8ead0d1779086349ccdd54d9f7f41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__16___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__16___contains__,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_f087d9535657a412c95289d6ce6fa6b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__17_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__17_index,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_1db2b12053f29dcd5371792555cbbaaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__18_get_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__18_get_index,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_cfe631b8184c98e6fd4f2050eb129ddb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[100],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__19___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__19___getitem__,
        mod_consts[217],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_53457ce11fb1fc11a1bbf277a7b01636,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__1___init__,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_8ce1a9bda52698037940984b62b9381c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__20___delitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__20___delitem__,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_0c09282add7d1fa4d26f2c550b7b85a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__21___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__21___iter__,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_455a531749dad00641cdc96e1abd6bcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__22_get_sheet_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__22_get_sheet_names,
        mod_consts[269],
#if PYTHON_VERSION >= 0x300
        mod_consts[270],
#endif
        codeobj_b79a702396222d5d100927b6b04107de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__23_worksheets() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__23_worksheets,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_23eab28b49379818bf9540c46aefe1cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__24_chartsheets() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__24_chartsheets,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        codeobj_889019671cce89013bd05bdc732edeac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__25_sheetnames() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__25_sheetnames,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_e0a2c035bae025700c91c6df5347f3e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__26_create_named_range(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__26_create_named_range,
        mod_consts[275],
#if PYTHON_VERSION >= 0x300
        mod_consts[276],
#endif
        codeobj_10a672b5896a6b69c8b8d71c6ab9d2c2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__27_add_named_style() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__27_add_named_style,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        codeobj_29ee0c3a68aa99d612473c4eb795c513,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[116],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__28_named_styles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__28_named_styles,
        mod_consts[278],
#if PYTHON_VERSION >= 0x300
        mod_consts[279],
#endif
        codeobj_f5c3fab395effea54fc44b2a6204d7b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__29_get_named_ranges() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__29_get_named_ranges,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        mod_consts[282],
#endif
        codeobj_1a8b075f391e8b1d8abdcb17f318ef77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__2__setup_styles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__2__setup_styles,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_09b052a22ed370379812350d52dbd2a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__30_add_named_range() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__30_add_named_range,
        mod_consts[284],
#if PYTHON_VERSION >= 0x300
        mod_consts[285],
#endif
        codeobj_ec6465522db483402860c47aa4894cf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[121],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__31_get_named_range() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__31_get_named_range,
        mod_consts[287],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        codeobj_6db97ef09ec6a384de9f1a0e52dc1eef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[122],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__32_remove_named_range() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__32_remove_named_range,
        mod_consts[290],
#if PYTHON_VERSION >= 0x300
        mod_consts[291],
#endif
        codeobj_78732b50bff6dc2d98286af2ed8df785,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__33_mime_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__33_mime_type,
        mod_consts[292],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_721f1f1fe18d27423c52d2042feb2c55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[129],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__34_save() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__34_save,
        mod_consts[294],
#if PYTHON_VERSION >= 0x300
        mod_consts[295],
#endif
        codeobj_513616d7c91d4dfb944609e17f289bb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__35_style_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__35_style_names,
        mod_consts[296],
#if PYTHON_VERSION >= 0x300
        mod_consts[297],
#endif
        codeobj_47adf3e5e43505a7297d58a8bae8ffd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__36_copy_worksheet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__36_copy_worksheet,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[298],
#endif
        codeobj_683494556f9d4672c5c2431f6e12f904,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__37_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__37_close,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[299],
#endif
        codeobj_6a16bcc072953e149da372286d47993a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[145],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__3_read_only() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__3_read_only,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_9358d7cc4b3ccf4ebaa25fe9dca64841,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__4_data_only() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__4_data_only,
        mod_consts[233],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_fc25e58bf7e4ae7106766710332a3cb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__5_write_only() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__5_write_only,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_61500aa4ccc3321e046d9f65b5ed3c5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__6_excel_base_date() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__6_excel_base_date,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_167b5ed7aab916e4306881d722630267,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__7_active() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__7_active,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_20f429919afc36c0e22280a2235294dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__8_active() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__8_active,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_b5cc08a1775e8e939b5f5d0e5249286d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__9_create_sheet(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$workbook$workbook$$$function__9_create_sheet,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_ee0af4b219683f904e28cccba893e90c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$workbook$workbook,
        mod_consts[81],
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

function_impl_code functable_openpyxl$workbook$workbook[] = {
    impl_openpyxl$workbook$workbook$$$function__1___init__,
    impl_openpyxl$workbook$workbook$$$function__2__setup_styles,
    impl_openpyxl$workbook$workbook$$$function__3_read_only,
    impl_openpyxl$workbook$workbook$$$function__4_data_only,
    impl_openpyxl$workbook$workbook$$$function__5_write_only,
    impl_openpyxl$workbook$workbook$$$function__6_excel_base_date,
    impl_openpyxl$workbook$workbook$$$function__7_active,
    impl_openpyxl$workbook$workbook$$$function__8_active,
    impl_openpyxl$workbook$workbook$$$function__9_create_sheet,
    impl_openpyxl$workbook$workbook$$$function__10__add_sheet,
    impl_openpyxl$workbook$workbook$$$function__11_move_sheet,
    impl_openpyxl$workbook$workbook$$$function__12_remove,
    impl_openpyxl$workbook$workbook$$$function__13_remove_sheet,
    impl_openpyxl$workbook$workbook$$$function__14_create_chartsheet,
    impl_openpyxl$workbook$workbook$$$function__15_get_sheet_by_name,
    impl_openpyxl$workbook$workbook$$$function__16___contains__,
    impl_openpyxl$workbook$workbook$$$function__17_index,
    impl_openpyxl$workbook$workbook$$$function__18_get_index,
    impl_openpyxl$workbook$workbook$$$function__19___getitem__,
    impl_openpyxl$workbook$workbook$$$function__20___delitem__,
    impl_openpyxl$workbook$workbook$$$function__21___iter__,
    impl_openpyxl$workbook$workbook$$$function__22_get_sheet_names,
    impl_openpyxl$workbook$workbook$$$function__23_worksheets,
    impl_openpyxl$workbook$workbook$$$function__24_chartsheets,
    impl_openpyxl$workbook$workbook$$$function__25_sheetnames,
    impl_openpyxl$workbook$workbook$$$function__26_create_named_range,
    impl_openpyxl$workbook$workbook$$$function__27_add_named_style,
    impl_openpyxl$workbook$workbook$$$function__28_named_styles,
    impl_openpyxl$workbook$workbook$$$function__29_get_named_ranges,
    impl_openpyxl$workbook$workbook$$$function__30_add_named_range,
    impl_openpyxl$workbook$workbook$$$function__31_get_named_range,
    impl_openpyxl$workbook$workbook$$$function__32_remove_named_range,
    impl_openpyxl$workbook$workbook$$$function__33_mime_type,
    impl_openpyxl$workbook$workbook$$$function__34_save,
    impl_openpyxl$workbook$workbook$$$function__35_style_names,
    impl_openpyxl$workbook$workbook$$$function__36_copy_worksheet,
    impl_openpyxl$workbook$workbook$$$function__37_close,
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

    function_impl_code *current = functable_openpyxl$workbook$workbook;
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

    if (offset > sizeof(functable_openpyxl$workbook$workbook) || offset < 0) {
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
        functable_openpyxl$workbook$workbook[offset],
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
        module_openpyxl$workbook$workbook,
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
PyObject *modulecode_openpyxl$workbook$workbook(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openpyxl.workbook.workbook");

    // Store the module for future use.
    module_openpyxl$workbook$workbook = module;

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
        PRINT_STRING("openpyxl.workbook.workbook: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("openpyxl.workbook.workbook: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("openpyxl.workbook.workbook: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initopenpyxl$workbook$workbook\n");

    moduledict_openpyxl$workbook$workbook = MODULE_DICT(module_openpyxl$workbook$workbook);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openpyxl$workbook$workbook,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openpyxl$workbook$workbook,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[324]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openpyxl$workbook$workbook,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$workbook$workbook,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$workbook$workbook,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openpyxl$workbook$workbook);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_openpyxl$workbook$workbook);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_df2d08359ec91780250f86ad8f91e75c;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_openpyxl$workbook$workbook$$$class__1_Workbook_50 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_2);
    }
    frame_df2d08359ec91780250f86ad8f91e75c = MAKE_MODULE_FRAME(codeobj_df2d08359ec91780250f86ad8f91e75c, module_openpyxl$workbook$workbook);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df2d08359ec91780250f86ad8f91e75c);
    assert(Py_REFCNT(frame_df2d08359ec91780250f86ad8f91e75c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[150], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[151], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[55];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[153];
        tmp_level_value_1 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[55],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[154];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[155];
        tmp_level_value_2 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[156],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[157];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[158];
        tmp_level_value_3 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[26],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[159];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[160];
        tmp_level_value_4 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[104],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[161];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[162];
        tmp_level_value_5 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[77],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[163];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[164];
        tmp_level_value_6 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 10;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[139],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[165];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[166];
        tmp_level_value_7 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 12;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[111],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[167];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[168];
        tmp_level_value_8 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 13;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[12],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[169];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[170];
        tmp_level_value_9 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 14;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[19],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[171];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[172];
        tmp_level_value_10 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 15;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[75],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[173];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[174];
        tmp_level_value_11 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 17;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[132],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[132]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[175];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[176];
        tmp_level_value_12 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 19;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[49],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[177];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[178];
        tmp_level_value_13 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 20;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[54],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[179];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[180];
        tmp_level_value_14 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 21;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[59],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[181];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[182];
        tmp_level_value_15 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 22;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[36],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[183];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[184];
        tmp_level_value_16 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 23;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[39],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[185];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[186];
        tmp_level_value_17 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 24;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_17 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[41],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[41]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_18 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[42],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[42]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[187];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[188];
        tmp_level_value_18 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 25;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[35],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[189];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[190];
        tmp_level_value_19 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 26;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[45],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[191];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[192];
        tmp_level_value_20 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 27;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[47],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[177];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[193];
        tmp_level_value_21 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 28;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[51],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[194];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[195];
        tmp_level_value_22 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 29;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[57],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[196];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[197];
        tmp_level_value_23 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 31;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[82],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[198];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[199];
        tmp_level_value_24 = mod_consts[200];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 32;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_25 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[108],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[108]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_26 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[4],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[4]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[201];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[202];
        tmp_level_value_25 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 33;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[7],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[203];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[204];
        tmp_level_value_26 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 34;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[27],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[205];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[206];
        tmp_level_value_27 = mod_consts[200];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 35;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[65],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[207];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[208];
        tmp_level_value_28 = mod_consts[200];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 36;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[9],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[8];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[209];
        tmp_level_value_29 = mod_consts[200];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 37;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[29],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[32];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[210];
        tmp_level_value_30 = mod_consts[200];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 38;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[31],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[211];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_openpyxl$workbook$workbook;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[212];
        tmp_level_value_31 = mod_consts[2];
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 41;
        tmp_assign_source_38 = IMPORT_MODULE5(tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_33 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[128],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[128]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_34 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[126],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[126]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_35 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[127],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[127]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_36 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_openpyxl$workbook$workbook,
                mod_consts[125],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[125]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_42);
    }
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_43);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[214];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_44 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
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


            exception_lineno = 50;

            goto try_except_handler_4;
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
        tmp_subscript_value_1 = mod_consts[2];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[215]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[215]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = mod_consts[216];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 50;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[217]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
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
        tmp_mod_expr_left_1 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[219];
        tmp_getattr_default_1 = mod_consts[220];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
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
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[219]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 50;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_48;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_openpyxl$workbook$workbook$$$class__1_Workbook_50 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[222], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[223];
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[224], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_6;
        }
        frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2 = MAKE_CLASS_FRAME(codeobj_70dc7ca31d3a2107fcfd9ccd0e21d2d9, module_openpyxl$workbook$workbook, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2);
        assert(Py_REFCNT(frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[225];
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[226], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[227];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[228], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__2__setup_styles();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[14], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
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
            tmp_called_value_2 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__3_read_only();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__3_read_only();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[74], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__4_data_only();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
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
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__4_data_only();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[233], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__5_write_only();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__5_write_only();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[24], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_8 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__6_excel_base_date();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__6_excel_base_date();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[236], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_10 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__7_active();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__7_active();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[238], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_11;
            tmp_called_instance_1 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[238]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[238]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__8_active();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 146;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[240], tmp_args_element_value_11);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[238], tmp_dictset_value);
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
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[241];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__9_create_sheet(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[243];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__10__add_sheet(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[245];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__11_move_sheet(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[246], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__12_remove();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_13 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 224;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 224;
            tmp_called_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[249]);

            Py_DECREF(tmp_called_value_13);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__13_remove_sheet();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 224;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[250], tmp_dictset_value);
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
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[241];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__14_create_chartsheet(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[252], tmp_dictset_value);
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
            PyObject *tmp_called_value_14;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_15 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 239;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 239;
            tmp_called_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[254]);

            Py_DECREF(tmp_called_value_15);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__15_get_sheet_by_name();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[255], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__16___contains__();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[257], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__17_index();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_17 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 258;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 258;
            tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[260]);

            Py_DECREF(tmp_called_value_17);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_14 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__18_get_index();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[261], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__19___getitem__();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[217], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__20___delitem__();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[264], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__21___iter__();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[266], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_19 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_19 == NULL)) {
                        tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 283;
            tmp_called_value_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[268]);

            Py_DECREF(tmp_called_value_19);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__22_get_sheet_names();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 283;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[269], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_20 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__23_worksheets();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 287;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_17 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__23_worksheets();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 287;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_19;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_22 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__24_chartsheets();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_19 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__24_chartsheets();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_24 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_20 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__25_sheetnames();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_21 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__25_sheetnames();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[274];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__26_create_named_range(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[275], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__27_add_named_style();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_26 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__28_named_styles();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 333;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__28_named_styles();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 333;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[278], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_24;
            tmp_called_value_29 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 341;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 341;
            tmp_called_value_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[280]);

            Py_DECREF(tmp_called_value_29);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_24 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__29_get_named_ranges();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 341;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[281], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_25;
            tmp_called_value_31 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 347;
            tmp_called_value_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[283]);

            Py_DECREF(tmp_called_value_31);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__30_add_named_range();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 347;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[284], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_26;
            tmp_called_value_33 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_33 == NULL)) {
                        tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 353;
            tmp_called_value_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[286]);

            Py_DECREF(tmp_called_value_33);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_26 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__31_get_named_range();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 353;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[287], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_27;
            tmp_called_value_35 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[156]);

            if (tmp_called_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_called_value_35 == NULL)) {
                        tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                    }

                    if (tmp_called_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 359;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 359;
            tmp_called_value_34 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[289]);

            Py_DECREF(tmp_called_value_35);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__32_remove_named_range();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 359;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[290], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_36 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__33_mime_type();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 365;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_37 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_29 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__33_mime_type();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 365;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[292], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__34_save();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[294], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_31;
            tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_38 = PyObject_GetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[231]);

            if (unlikely(tmp_called_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[231]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__35_style_names();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 395;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_39 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_31 = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__35_style_names();

            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame.f_lineno = 395;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[296], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__36_copy_worksheet();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[141], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$workbook$workbook$$$function__37_close();

        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[144], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_70dc7ca31d3a2107fcfd9ccd0e21d2d9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[214];
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[214];
        tmp_res = PyObject_SetItem(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50, mod_consts[300], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_40 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[216];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_openpyxl$workbook$workbook$$$class__1_Workbook_50;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_df2d08359ec91780250f86ad8f91e75c->m_frame.f_lineno = 50;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_49 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50);
        locals_openpyxl$workbook$workbook$$$class__1_Workbook_50 = NULL;
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

        Py_DECREF(locals_openpyxl$workbook$workbook$$$class__1_Workbook_50);
        locals_openpyxl$workbook$workbook$$$class__1_Workbook_50 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 50;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_49);
    }
    goto try_end_4;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df2d08359ec91780250f86ad8f91e75c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df2d08359ec91780250f86ad8f91e75c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df2d08359ec91780250f86ad8f91e75c, exception_lineno);
    }



    assertFrameObject(frame_df2d08359ec91780250f86ad8f91e75c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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
    PGO_onModuleExit("openpyxl.workbook.workbook", false);

    Py_INCREF(module_openpyxl$workbook$workbook);
    return module_openpyxl$workbook$workbook;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$workbook$workbook, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("openpyxl$workbook$workbook", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
