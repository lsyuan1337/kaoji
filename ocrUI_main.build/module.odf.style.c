/* Generated code for Python module 'odf.style'
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

/* The "module_odf$style" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_odf$style;
PyDictObject *moduledict_odf$style;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[108];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[108];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("odf.style"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 108; i++) {
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
void checkModuleConstants_odf$style(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 108; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_90e54cdd498c350aa0b89757189de6f1;
static PyCodeObject *codeobj_ef87902f589ee6bd687db302ddfd3e4a;
static PyCodeObject *codeobj_f505dc0e628b19ad13d7d16b8c92d077;
static PyCodeObject *codeobj_ac3848d17b528a92b7f33d322804b64f;
static PyCodeObject *codeobj_5bcc181d00c3299337703b0a45ce6928;
static PyCodeObject *codeobj_49fb17fa37311f0cc68cbb721598e724;
static PyCodeObject *codeobj_a95445a24f3c2ae8d2d8618dacc9fc7d;
static PyCodeObject *codeobj_4997eba9813e417e1f01d84b32ef05ff;
static PyCodeObject *codeobj_945ad5663f138dbffb838257f2d8f2dd;
static PyCodeObject *codeobj_0e03188cac8d9161b8ff57cc25611922;
static PyCodeObject *codeobj_bf64c6701ea1734105392e67dbeb36f9;
static PyCodeObject *codeobj_42e6d8f6f26f16ae554ee5ec0afce33a;
static PyCodeObject *codeobj_21187a4801b435a9f5587b889f88cd6c;
static PyCodeObject *codeobj_7ada0384de80226eda2d7932267216b3;
static PyCodeObject *codeobj_8463828519707a5eeec092458c624fdb;
static PyCodeObject *codeobj_ca02436f34ccd757c5a878bc0061f7fe;
static PyCodeObject *codeobj_9fcad223e288e8f20d59370ad1f06cde;
static PyCodeObject *codeobj_083aebad1a0fba13e93a94080cab09ec;
static PyCodeObject *codeobj_497585e7f7e44df6f449d84329c595d2;
static PyCodeObject *codeobj_382c7fdbb66ff972a7984960e13aefe2;
static PyCodeObject *codeobj_c974afd34055e1053182cc287a913cd7;
static PyCodeObject *codeobj_e0279cab14c5eb038c1118567ac1f8e4;
static PyCodeObject *codeobj_8b9c16bc77e2d1cf9563015c4347040f;
static PyCodeObject *codeobj_7e5b5ca56b19a014a60978069a6cf004;
static PyCodeObject *codeobj_783b6922e50cdd5e1e37c8ba7f9924fe;
static PyCodeObject *codeobj_4f7d00a12bd6c6a2a2b6d28254a47900;
static PyCodeObject *codeobj_5cef09f74a03213300dcab79841b4901;
static PyCodeObject *codeobj_68fa96da5dbe06a780f898affc11db2e;
static PyCodeObject *codeobj_d3e638546bc4027976c0d6ffcda4b033;
static PyCodeObject *codeobj_b147831dcdc4d83c6bfa4f978151d7eb;
static PyCodeObject *codeobj_35958b5a290b694e29bbdb1df96659f4;
static PyCodeObject *codeobj_459430070ae54a43745b734ef7f5efc0;
static PyCodeObject *codeobj_3fc0ce0d9edd9d2d78afa9e99545cbf9;
static PyCodeObject *codeobj_75d22c47b86f8f63b1a5cfcc56476762;
static PyCodeObject *codeobj_47495cd2565d14696aa4c0c065461a0a;
static PyCodeObject *codeobj_deb62c1241171df2578a29ce384b1530;
static PyCodeObject *codeobj_16915f0c4c4a99288475c3b5afce8fc0;
static PyCodeObject *codeobj_3b4b1d4d6c669e83d664b82a29740f9a;
static PyCodeObject *codeobj_19cba3b5756ae887ae9c191f83ecdffd;
static PyCodeObject *codeobj_2e9dac2c0137c46fba95031dd0e50bd3;
static PyCodeObject *codeobj_45bd38052c7aff1894c1a6f42025dac0;
static PyCodeObject *codeobj_c330fd727682eed7461efe642f19ff58;
static PyCodeObject *codeobj_811bd0ebc9303f79b4c8ee154dfee021;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[103]); CHECK_OBJECT(module_filename_obj);
    codeobj_90e54cdd498c350aa0b89757189de6f1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[104], mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_ef87902f589ee6bd687db302ddfd3e4a = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[105], NULL, 0, 0, 0);
    codeobj_f505dc0e628b19ad13d7d16b8c92d077 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[105], NULL, 0, 0, 0);
    codeobj_ac3848d17b528a92b7f33d322804b64f = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[105], NULL, 0, 0, 0);
    codeobj_5bcc181d00c3299337703b0a45ce6928 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[105], NULL, 0, 0, 0);
    codeobj_49fb17fa37311f0cc68cbb721598e724 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[105], NULL, 0, 0, 0);
    codeobj_a95445a24f3c2ae8d2d8618dacc9fc7d = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[105], NULL, 0, 0, 0);
    codeobj_4997eba9813e417e1f01d84b32ef05ff = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[105], NULL, 0, 0, 0);
    codeobj_945ad5663f138dbffb838257f2d8f2dd = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[105], NULL, 0, 0, 0);
    codeobj_0e03188cac8d9161b8ff57cc25611922 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[105], NULL, 0, 0, 0);
    codeobj_bf64c6701ea1734105392e67dbeb36f9 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[105], NULL, 0, 0, 0);
    codeobj_42e6d8f6f26f16ae554ee5ec0afce33a = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[105], NULL, 0, 0, 0);
    codeobj_21187a4801b435a9f5587b889f88cd6c = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[105], NULL, 0, 0, 0);
    codeobj_7ada0384de80226eda2d7932267216b3 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[105], NULL, 0, 0, 0);
    codeobj_8463828519707a5eeec092458c624fdb = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[105], NULL, 0, 0, 0);
    codeobj_ca02436f34ccd757c5a878bc0061f7fe = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[105], NULL, 0, 0, 0);
    codeobj_9fcad223e288e8f20d59370ad1f06cde = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[105], NULL, 0, 0, 0);
    codeobj_083aebad1a0fba13e93a94080cab09ec = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[105], NULL, 0, 0, 0);
    codeobj_497585e7f7e44df6f449d84329c595d2 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[105], NULL, 0, 0, 0);
    codeobj_382c7fdbb66ff972a7984960e13aefe2 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[105], NULL, 0, 0, 0);
    codeobj_c974afd34055e1053182cc287a913cd7 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[105], NULL, 0, 0, 0);
    codeobj_e0279cab14c5eb038c1118567ac1f8e4 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[105], NULL, 0, 0, 0);
    codeobj_8b9c16bc77e2d1cf9563015c4347040f = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[105], NULL, 0, 0, 0);
    codeobj_7e5b5ca56b19a014a60978069a6cf004 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[105], NULL, 0, 0, 0);
    codeobj_783b6922e50cdd5e1e37c8ba7f9924fe = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[105], NULL, 0, 0, 0);
    codeobj_4f7d00a12bd6c6a2a2b6d28254a47900 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[105], NULL, 0, 0, 0);
    codeobj_5cef09f74a03213300dcab79841b4901 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[105], NULL, 0, 0, 0);
    codeobj_68fa96da5dbe06a780f898affc11db2e = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[105], NULL, 0, 0, 0);
    codeobj_d3e638546bc4027976c0d6ffcda4b033 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[105], NULL, 0, 0, 0);
    codeobj_b147831dcdc4d83c6bfa4f978151d7eb = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[105], NULL, 0, 0, 0);
    codeobj_35958b5a290b694e29bbdb1df96659f4 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[105], NULL, 0, 0, 0);
    codeobj_459430070ae54a43745b734ef7f5efc0 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[105], NULL, 0, 0, 0);
    codeobj_3fc0ce0d9edd9d2d78afa9e99545cbf9 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[105], NULL, 0, 0, 0);
    codeobj_75d22c47b86f8f63b1a5cfcc56476762 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[105], NULL, 0, 0, 0);
    codeobj_47495cd2565d14696aa4c0c065461a0a = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[105], NULL, 0, 0, 0);
    codeobj_deb62c1241171df2578a29ce384b1530 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[106], NULL, 0, 0, 0);
    codeobj_16915f0c4c4a99288475c3b5afce8fc0 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[105], NULL, 0, 0, 0);
    codeobj_3b4b1d4d6c669e83d664b82a29740f9a = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[105], NULL, 0, 0, 0);
    codeobj_19cba3b5756ae887ae9c191f83ecdffd = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[105], NULL, 0, 0, 0);
    codeobj_2e9dac2c0137c46fba95031dd0e50bd3 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[105], NULL, 0, 0, 0);
    codeobj_45bd38052c7aff1894c1a6f42025dac0 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[105], NULL, 0, 0, 0);
    codeobj_c330fd727682eed7461efe642f19ff58 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[105], NULL, 0, 0, 0);
    codeobj_811bd0ebc9303f79b4c8ee154dfee021 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[105], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_odf$style$$$function__10_DropCap();


static PyObject *MAKE_FUNCTION_odf$style$$$function__11_FontFace();


static PyObject *MAKE_FUNCTION_odf$style$$$function__12_Footer();


static PyObject *MAKE_FUNCTION_odf$style$$$function__13_FooterLeft();


static PyObject *MAKE_FUNCTION_odf$style$$$function__14_FooterStyle();


static PyObject *MAKE_FUNCTION_odf$style$$$function__15_FootnoteSep();


static PyObject *MAKE_FUNCTION_odf$style$$$function__16_GraphicProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__17_HandoutMaster();


static PyObject *MAKE_FUNCTION_odf$style$$$function__18_Header();


static PyObject *MAKE_FUNCTION_odf$style$$$function__19_HeaderFooterProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__1_StyleElement();


static PyObject *MAKE_FUNCTION_odf$style$$$function__20_HeaderLeft();


static PyObject *MAKE_FUNCTION_odf$style$$$function__21_HeaderStyle();


static PyObject *MAKE_FUNCTION_odf$style$$$function__22_ListLevelLabelAlignment();


static PyObject *MAKE_FUNCTION_odf$style$$$function__23_ListLevelProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__24_Map();


static PyObject *MAKE_FUNCTION_odf$style$$$function__25_MasterPage();


static PyObject *MAKE_FUNCTION_odf$style$$$function__26_PageLayout();


static PyObject *MAKE_FUNCTION_odf$style$$$function__27_PageLayoutProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__28_ParagraphProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__29_PresentationPageLayout();


static PyObject *MAKE_FUNCTION_odf$style$$$function__2_BackgroundImage();


static PyObject *MAKE_FUNCTION_odf$style$$$function__30_RegionCenter();


static PyObject *MAKE_FUNCTION_odf$style$$$function__31_RegionLeft();


static PyObject *MAKE_FUNCTION_odf$style$$$function__32_RegionRight();


static PyObject *MAKE_FUNCTION_odf$style$$$function__33_RubyProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__34_SectionProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__35_Style();


static PyObject *MAKE_FUNCTION_odf$style$$$function__36_TabStop();


static PyObject *MAKE_FUNCTION_odf$style$$$function__37_TabStops();


static PyObject *MAKE_FUNCTION_odf$style$$$function__38_TableCellProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__39_TableColumnProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__3_ChartProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__40_TableProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__41_TableRowProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__42_TextProperties();


static PyObject *MAKE_FUNCTION_odf$style$$$function__4_Column();


static PyObject *MAKE_FUNCTION_odf$style$$$function__5_ColumnSep();


static PyObject *MAKE_FUNCTION_odf$style$$$function__6_Columns();


static PyObject *MAKE_FUNCTION_odf$style$$$function__7_DefaultPageLayout();


static PyObject *MAKE_FUNCTION_odf$style$$$function__8_DefaultStyle();


static PyObject *MAKE_FUNCTION_odf$style$$$function__9_DrawingPageProperties();


// The module function definitions.
static PyObject *impl_odf$style$$$function__1_StyleElement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_deb62c1241171df2578a29ce384b1530;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_deb62c1241171df2578a29ce384b1530 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_deb62c1241171df2578a29ce384b1530)) {
        Py_XDECREF(cache_frame_deb62c1241171df2578a29ce384b1530);

#if _DEBUG_REFCOUNTS
        if (cache_frame_deb62c1241171df2578a29ce384b1530 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_deb62c1241171df2578a29ce384b1530 = MAKE_FUNCTION_FRAME(codeobj_deb62c1241171df2578a29ce384b1530, module_odf$style, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_deb62c1241171df2578a29ce384b1530->m_type_description == NULL);
    frame_deb62c1241171df2578a29ce384b1530 = cache_frame_deb62c1241171df2578a29ce384b1530;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_deb62c1241171df2578a29ce384b1530);
    assert(Py_REFCNT(frame_deb62c1241171df2578a29ce384b1530) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_e == NULL);
        var_e = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[1];
        tmp_default_value_1 = Py_True;
        tmp_cmp_expr_left_1 = DICT_GET_ITEM1(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            tmp_cmp_expr_left_1 = tmp_default_value_1;
            Py_INCREF(tmp_cmp_expr_left_1);
        }
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_dict_arg_value_2;
        tmp_key_value_2 = mod_consts[2];
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_2 = par_args;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_2, tmp_key_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        CHECK_OBJECT(var_e);
        tmp_expression_value_1 = var_e;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[5];
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_3 = par_args;
        tmp_key_value_3 = mod_consts[6];
        tmp_args_element_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_args_element_value_3 == NULL) {
            tmp_args_element_value_3 = Py_None;
        }
        assert(!(tmp_args_element_value_3 == NULL));
        frame_deb62c1241171df2578a29ce384b1530->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    branch_no_1:;
    if (var_e == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_e;
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
        exception_tb = MAKE_TRACEBACK(frame_deb62c1241171df2578a29ce384b1530, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_deb62c1241171df2578a29ce384b1530->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_deb62c1241171df2578a29ce384b1530, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_deb62c1241171df2578a29ce384b1530,
        type_description_1,
        par_args,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_deb62c1241171df2578a29ce384b1530 == cache_frame_deb62c1241171df2578a29ce384b1530) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_deb62c1241171df2578a29ce384b1530);
        cache_frame_deb62c1241171df2578a29ce384b1530 = NULL;
    }

    assertFrameObject(frame_deb62c1241171df2578a29ce384b1530);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_e);
    var_e = NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__2_BackgroundImage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ef87902f589ee6bd687db302ddfd3e4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ef87902f589ee6bd687db302ddfd3e4a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef87902f589ee6bd687db302ddfd3e4a)) {
        Py_XDECREF(cache_frame_ef87902f589ee6bd687db302ddfd3e4a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef87902f589ee6bd687db302ddfd3e4a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef87902f589ee6bd687db302ddfd3e4a = MAKE_FUNCTION_FRAME(codeobj_ef87902f589ee6bd687db302ddfd3e4a, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef87902f589ee6bd687db302ddfd3e4a->m_type_description == NULL);
    frame_ef87902f589ee6bd687db302ddfd3e4a = cache_frame_ef87902f589ee6bd687db302ddfd3e4a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef87902f589ee6bd687db302ddfd3e4a);
    assert(Py_REFCNT(frame_ef87902f589ee6bd687db302ddfd3e4a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_ef87902f589ee6bd687db302ddfd3e4a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef87902f589ee6bd687db302ddfd3e4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef87902f589ee6bd687db302ddfd3e4a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef87902f589ee6bd687db302ddfd3e4a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ef87902f589ee6bd687db302ddfd3e4a == cache_frame_ef87902f589ee6bd687db302ddfd3e4a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef87902f589ee6bd687db302ddfd3e4a);
        cache_frame_ef87902f589ee6bd687db302ddfd3e4a = NULL;
    }

    assertFrameObject(frame_ef87902f589ee6bd687db302ddfd3e4a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__3_ChartProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_f505dc0e628b19ad13d7d16b8c92d077;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f505dc0e628b19ad13d7d16b8c92d077 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f505dc0e628b19ad13d7d16b8c92d077)) {
        Py_XDECREF(cache_frame_f505dc0e628b19ad13d7d16b8c92d077);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f505dc0e628b19ad13d7d16b8c92d077 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f505dc0e628b19ad13d7d16b8c92d077 = MAKE_FUNCTION_FRAME(codeobj_f505dc0e628b19ad13d7d16b8c92d077, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f505dc0e628b19ad13d7d16b8c92d077->m_type_description == NULL);
    frame_f505dc0e628b19ad13d7d16b8c92d077 = cache_frame_f505dc0e628b19ad13d7d16b8c92d077;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f505dc0e628b19ad13d7d16b8c92d077);
    assert(Py_REFCNT(frame_f505dc0e628b19ad13d7d16b8c92d077) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_f505dc0e628b19ad13d7d16b8c92d077, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f505dc0e628b19ad13d7d16b8c92d077->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f505dc0e628b19ad13d7d16b8c92d077, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f505dc0e628b19ad13d7d16b8c92d077,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f505dc0e628b19ad13d7d16b8c92d077 == cache_frame_f505dc0e628b19ad13d7d16b8c92d077) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f505dc0e628b19ad13d7d16b8c92d077);
        cache_frame_f505dc0e628b19ad13d7d16b8c92d077 = NULL;
    }

    assertFrameObject(frame_f505dc0e628b19ad13d7d16b8c92d077);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__4_Column(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ac3848d17b528a92b7f33d322804b64f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ac3848d17b528a92b7f33d322804b64f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac3848d17b528a92b7f33d322804b64f)) {
        Py_XDECREF(cache_frame_ac3848d17b528a92b7f33d322804b64f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac3848d17b528a92b7f33d322804b64f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac3848d17b528a92b7f33d322804b64f = MAKE_FUNCTION_FRAME(codeobj_ac3848d17b528a92b7f33d322804b64f, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac3848d17b528a92b7f33d322804b64f->m_type_description == NULL);
    frame_ac3848d17b528a92b7f33d322804b64f = cache_frame_ac3848d17b528a92b7f33d322804b64f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac3848d17b528a92b7f33d322804b64f);
    assert(Py_REFCNT(frame_ac3848d17b528a92b7f33d322804b64f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[11];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_ac3848d17b528a92b7f33d322804b64f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac3848d17b528a92b7f33d322804b64f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac3848d17b528a92b7f33d322804b64f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac3848d17b528a92b7f33d322804b64f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ac3848d17b528a92b7f33d322804b64f == cache_frame_ac3848d17b528a92b7f33d322804b64f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac3848d17b528a92b7f33d322804b64f);
        cache_frame_ac3848d17b528a92b7f33d322804b64f = NULL;
    }

    assertFrameObject(frame_ac3848d17b528a92b7f33d322804b64f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__5_ColumnSep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5bcc181d00c3299337703b0a45ce6928;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5bcc181d00c3299337703b0a45ce6928 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5bcc181d00c3299337703b0a45ce6928)) {
        Py_XDECREF(cache_frame_5bcc181d00c3299337703b0a45ce6928);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5bcc181d00c3299337703b0a45ce6928 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5bcc181d00c3299337703b0a45ce6928 = MAKE_FUNCTION_FRAME(codeobj_5bcc181d00c3299337703b0a45ce6928, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5bcc181d00c3299337703b0a45ce6928->m_type_description == NULL);
    frame_5bcc181d00c3299337703b0a45ce6928 = cache_frame_5bcc181d00c3299337703b0a45ce6928;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5bcc181d00c3299337703b0a45ce6928);
    assert(Py_REFCNT(frame_5bcc181d00c3299337703b0a45ce6928) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_5bcc181d00c3299337703b0a45ce6928, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5bcc181d00c3299337703b0a45ce6928->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bcc181d00c3299337703b0a45ce6928, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5bcc181d00c3299337703b0a45ce6928,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5bcc181d00c3299337703b0a45ce6928 == cache_frame_5bcc181d00c3299337703b0a45ce6928) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5bcc181d00c3299337703b0a45ce6928);
        cache_frame_5bcc181d00c3299337703b0a45ce6928 = NULL;
    }

    assertFrameObject(frame_5bcc181d00c3299337703b0a45ce6928);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__6_Columns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_49fb17fa37311f0cc68cbb721598e724;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_49fb17fa37311f0cc68cbb721598e724 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_49fb17fa37311f0cc68cbb721598e724)) {
        Py_XDECREF(cache_frame_49fb17fa37311f0cc68cbb721598e724);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49fb17fa37311f0cc68cbb721598e724 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49fb17fa37311f0cc68cbb721598e724 = MAKE_FUNCTION_FRAME(codeobj_49fb17fa37311f0cc68cbb721598e724, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49fb17fa37311f0cc68cbb721598e724->m_type_description == NULL);
    frame_49fb17fa37311f0cc68cbb721598e724 = cache_frame_49fb17fa37311f0cc68cbb721598e724;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49fb17fa37311f0cc68cbb721598e724);
    assert(Py_REFCNT(frame_49fb17fa37311f0cc68cbb721598e724) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[13];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_49fb17fa37311f0cc68cbb721598e724, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49fb17fa37311f0cc68cbb721598e724->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49fb17fa37311f0cc68cbb721598e724, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49fb17fa37311f0cc68cbb721598e724,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_49fb17fa37311f0cc68cbb721598e724 == cache_frame_49fb17fa37311f0cc68cbb721598e724) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49fb17fa37311f0cc68cbb721598e724);
        cache_frame_49fb17fa37311f0cc68cbb721598e724 = NULL;
    }

    assertFrameObject(frame_49fb17fa37311f0cc68cbb721598e724);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__7_DefaultPageLayout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a95445a24f3c2ae8d2d8618dacc9fc7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d)) {
        Py_XDECREF(cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d = MAKE_FUNCTION_FRAME(codeobj_a95445a24f3c2ae8d2d8618dacc9fc7d, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d->m_type_description == NULL);
    frame_a95445a24f3c2ae8d2d8618dacc9fc7d = cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a95445a24f3c2ae8d2d8618dacc9fc7d);
    assert(Py_REFCNT(frame_a95445a24f3c2ae8d2d8618dacc9fc7d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_a95445a24f3c2ae8d2d8618dacc9fc7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a95445a24f3c2ae8d2d8618dacc9fc7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a95445a24f3c2ae8d2d8618dacc9fc7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a95445a24f3c2ae8d2d8618dacc9fc7d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a95445a24f3c2ae8d2d8618dacc9fc7d == cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d);
        cache_frame_a95445a24f3c2ae8d2d8618dacc9fc7d = NULL;
    }

    assertFrameObject(frame_a95445a24f3c2ae8d2d8618dacc9fc7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__8_DefaultStyle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_4997eba9813e417e1f01d84b32ef05ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4997eba9813e417e1f01d84b32ef05ff = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4997eba9813e417e1f01d84b32ef05ff)) {
        Py_XDECREF(cache_frame_4997eba9813e417e1f01d84b32ef05ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4997eba9813e417e1f01d84b32ef05ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4997eba9813e417e1f01d84b32ef05ff = MAKE_FUNCTION_FRAME(codeobj_4997eba9813e417e1f01d84b32ef05ff, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4997eba9813e417e1f01d84b32ef05ff->m_type_description == NULL);
    frame_4997eba9813e417e1f01d84b32ef05ff = cache_frame_4997eba9813e417e1f01d84b32ef05ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4997eba9813e417e1f01d84b32ef05ff);
    assert(Py_REFCNT(frame_4997eba9813e417e1f01d84b32ef05ff) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_4997eba9813e417e1f01d84b32ef05ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4997eba9813e417e1f01d84b32ef05ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4997eba9813e417e1f01d84b32ef05ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4997eba9813e417e1f01d84b32ef05ff,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_4997eba9813e417e1f01d84b32ef05ff == cache_frame_4997eba9813e417e1f01d84b32ef05ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4997eba9813e417e1f01d84b32ef05ff);
        cache_frame_4997eba9813e417e1f01d84b32ef05ff = NULL;
    }

    assertFrameObject(frame_4997eba9813e417e1f01d84b32ef05ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__9_DrawingPageProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_945ad5663f138dbffb838257f2d8f2dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_945ad5663f138dbffb838257f2d8f2dd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_945ad5663f138dbffb838257f2d8f2dd)) {
        Py_XDECREF(cache_frame_945ad5663f138dbffb838257f2d8f2dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_945ad5663f138dbffb838257f2d8f2dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_945ad5663f138dbffb838257f2d8f2dd = MAKE_FUNCTION_FRAME(codeobj_945ad5663f138dbffb838257f2d8f2dd, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_945ad5663f138dbffb838257f2d8f2dd->m_type_description == NULL);
    frame_945ad5663f138dbffb838257f2d8f2dd = cache_frame_945ad5663f138dbffb838257f2d8f2dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_945ad5663f138dbffb838257f2d8f2dd);
    assert(Py_REFCNT(frame_945ad5663f138dbffb838257f2d8f2dd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[16];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
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
        exception_tb = MAKE_TRACEBACK(frame_945ad5663f138dbffb838257f2d8f2dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_945ad5663f138dbffb838257f2d8f2dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_945ad5663f138dbffb838257f2d8f2dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_945ad5663f138dbffb838257f2d8f2dd,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_945ad5663f138dbffb838257f2d8f2dd == cache_frame_945ad5663f138dbffb838257f2d8f2dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_945ad5663f138dbffb838257f2d8f2dd);
        cache_frame_945ad5663f138dbffb838257f2d8f2dd = NULL;
    }

    assertFrameObject(frame_945ad5663f138dbffb838257f2d8f2dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__10_DropCap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_0e03188cac8d9161b8ff57cc25611922;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0e03188cac8d9161b8ff57cc25611922 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e03188cac8d9161b8ff57cc25611922)) {
        Py_XDECREF(cache_frame_0e03188cac8d9161b8ff57cc25611922);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e03188cac8d9161b8ff57cc25611922 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e03188cac8d9161b8ff57cc25611922 = MAKE_FUNCTION_FRAME(codeobj_0e03188cac8d9161b8ff57cc25611922, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e03188cac8d9161b8ff57cc25611922->m_type_description == NULL);
    frame_0e03188cac8d9161b8ff57cc25611922 = cache_frame_0e03188cac8d9161b8ff57cc25611922;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e03188cac8d9161b8ff57cc25611922);
    assert(Py_REFCNT(frame_0e03188cac8d9161b8ff57cc25611922) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[17];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_0e03188cac8d9161b8ff57cc25611922, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e03188cac8d9161b8ff57cc25611922->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e03188cac8d9161b8ff57cc25611922, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e03188cac8d9161b8ff57cc25611922,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_0e03188cac8d9161b8ff57cc25611922 == cache_frame_0e03188cac8d9161b8ff57cc25611922) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e03188cac8d9161b8ff57cc25611922);
        cache_frame_0e03188cac8d9161b8ff57cc25611922 = NULL;
    }

    assertFrameObject(frame_0e03188cac8d9161b8ff57cc25611922);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__11_FontFace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_bf64c6701ea1734105392e67dbeb36f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bf64c6701ea1734105392e67dbeb36f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf64c6701ea1734105392e67dbeb36f9)) {
        Py_XDECREF(cache_frame_bf64c6701ea1734105392e67dbeb36f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf64c6701ea1734105392e67dbeb36f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf64c6701ea1734105392e67dbeb36f9 = MAKE_FUNCTION_FRAME(codeobj_bf64c6701ea1734105392e67dbeb36f9, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf64c6701ea1734105392e67dbeb36f9->m_type_description == NULL);
    frame_bf64c6701ea1734105392e67dbeb36f9 = cache_frame_bf64c6701ea1734105392e67dbeb36f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf64c6701ea1734105392e67dbeb36f9);
    assert(Py_REFCNT(frame_bf64c6701ea1734105392e67dbeb36f9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[18];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
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
        exception_tb = MAKE_TRACEBACK(frame_bf64c6701ea1734105392e67dbeb36f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf64c6701ea1734105392e67dbeb36f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf64c6701ea1734105392e67dbeb36f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf64c6701ea1734105392e67dbeb36f9,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_bf64c6701ea1734105392e67dbeb36f9 == cache_frame_bf64c6701ea1734105392e67dbeb36f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf64c6701ea1734105392e67dbeb36f9);
        cache_frame_bf64c6701ea1734105392e67dbeb36f9 = NULL;
    }

    assertFrameObject(frame_bf64c6701ea1734105392e67dbeb36f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__12_Footer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_42e6d8f6f26f16ae554ee5ec0afce33a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a)) {
        Py_XDECREF(cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a = MAKE_FUNCTION_FRAME(codeobj_42e6d8f6f26f16ae554ee5ec0afce33a, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a->m_type_description == NULL);
    frame_42e6d8f6f26f16ae554ee5ec0afce33a = cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_42e6d8f6f26f16ae554ee5ec0afce33a);
    assert(Py_REFCNT(frame_42e6d8f6f26f16ae554ee5ec0afce33a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[19];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_42e6d8f6f26f16ae554ee5ec0afce33a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42e6d8f6f26f16ae554ee5ec0afce33a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42e6d8f6f26f16ae554ee5ec0afce33a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42e6d8f6f26f16ae554ee5ec0afce33a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_42e6d8f6f26f16ae554ee5ec0afce33a == cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a);
        cache_frame_42e6d8f6f26f16ae554ee5ec0afce33a = NULL;
    }

    assertFrameObject(frame_42e6d8f6f26f16ae554ee5ec0afce33a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__13_FooterLeft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_21187a4801b435a9f5587b889f88cd6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_21187a4801b435a9f5587b889f88cd6c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21187a4801b435a9f5587b889f88cd6c)) {
        Py_XDECREF(cache_frame_21187a4801b435a9f5587b889f88cd6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21187a4801b435a9f5587b889f88cd6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21187a4801b435a9f5587b889f88cd6c = MAKE_FUNCTION_FRAME(codeobj_21187a4801b435a9f5587b889f88cd6c, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21187a4801b435a9f5587b889f88cd6c->m_type_description == NULL);
    frame_21187a4801b435a9f5587b889f88cd6c = cache_frame_21187a4801b435a9f5587b889f88cd6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21187a4801b435a9f5587b889f88cd6c);
    assert(Py_REFCNT(frame_21187a4801b435a9f5587b889f88cd6c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[20];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_21187a4801b435a9f5587b889f88cd6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21187a4801b435a9f5587b889f88cd6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21187a4801b435a9f5587b889f88cd6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21187a4801b435a9f5587b889f88cd6c,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_21187a4801b435a9f5587b889f88cd6c == cache_frame_21187a4801b435a9f5587b889f88cd6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21187a4801b435a9f5587b889f88cd6c);
        cache_frame_21187a4801b435a9f5587b889f88cd6c = NULL;
    }

    assertFrameObject(frame_21187a4801b435a9f5587b889f88cd6c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__14_FooterStyle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7ada0384de80226eda2d7932267216b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7ada0384de80226eda2d7932267216b3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ada0384de80226eda2d7932267216b3)) {
        Py_XDECREF(cache_frame_7ada0384de80226eda2d7932267216b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ada0384de80226eda2d7932267216b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ada0384de80226eda2d7932267216b3 = MAKE_FUNCTION_FRAME(codeobj_7ada0384de80226eda2d7932267216b3, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ada0384de80226eda2d7932267216b3->m_type_description == NULL);
    frame_7ada0384de80226eda2d7932267216b3 = cache_frame_7ada0384de80226eda2d7932267216b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ada0384de80226eda2d7932267216b3);
    assert(Py_REFCNT(frame_7ada0384de80226eda2d7932267216b3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_7ada0384de80226eda2d7932267216b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ada0384de80226eda2d7932267216b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ada0384de80226eda2d7932267216b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ada0384de80226eda2d7932267216b3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7ada0384de80226eda2d7932267216b3 == cache_frame_7ada0384de80226eda2d7932267216b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ada0384de80226eda2d7932267216b3);
        cache_frame_7ada0384de80226eda2d7932267216b3 = NULL;
    }

    assertFrameObject(frame_7ada0384de80226eda2d7932267216b3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__15_FootnoteSep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_8463828519707a5eeec092458c624fdb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8463828519707a5eeec092458c624fdb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8463828519707a5eeec092458c624fdb)) {
        Py_XDECREF(cache_frame_8463828519707a5eeec092458c624fdb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8463828519707a5eeec092458c624fdb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8463828519707a5eeec092458c624fdb = MAKE_FUNCTION_FRAME(codeobj_8463828519707a5eeec092458c624fdb, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8463828519707a5eeec092458c624fdb->m_type_description == NULL);
    frame_8463828519707a5eeec092458c624fdb = cache_frame_8463828519707a5eeec092458c624fdb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8463828519707a5eeec092458c624fdb);
    assert(Py_REFCNT(frame_8463828519707a5eeec092458c624fdb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[22];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_8463828519707a5eeec092458c624fdb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8463828519707a5eeec092458c624fdb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8463828519707a5eeec092458c624fdb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8463828519707a5eeec092458c624fdb,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8463828519707a5eeec092458c624fdb == cache_frame_8463828519707a5eeec092458c624fdb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8463828519707a5eeec092458c624fdb);
        cache_frame_8463828519707a5eeec092458c624fdb = NULL;
    }

    assertFrameObject(frame_8463828519707a5eeec092458c624fdb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__16_GraphicProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ca02436f34ccd757c5a878bc0061f7fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ca02436f34ccd757c5a878bc0061f7fe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca02436f34ccd757c5a878bc0061f7fe)) {
        Py_XDECREF(cache_frame_ca02436f34ccd757c5a878bc0061f7fe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca02436f34ccd757c5a878bc0061f7fe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca02436f34ccd757c5a878bc0061f7fe = MAKE_FUNCTION_FRAME(codeobj_ca02436f34ccd757c5a878bc0061f7fe, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca02436f34ccd757c5a878bc0061f7fe->m_type_description == NULL);
    frame_ca02436f34ccd757c5a878bc0061f7fe = cache_frame_ca02436f34ccd757c5a878bc0061f7fe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca02436f34ccd757c5a878bc0061f7fe);
    assert(Py_REFCNT(frame_ca02436f34ccd757c5a878bc0061f7fe) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[23];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_ca02436f34ccd757c5a878bc0061f7fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca02436f34ccd757c5a878bc0061f7fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca02436f34ccd757c5a878bc0061f7fe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca02436f34ccd757c5a878bc0061f7fe,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ca02436f34ccd757c5a878bc0061f7fe == cache_frame_ca02436f34ccd757c5a878bc0061f7fe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca02436f34ccd757c5a878bc0061f7fe);
        cache_frame_ca02436f34ccd757c5a878bc0061f7fe = NULL;
    }

    assertFrameObject(frame_ca02436f34ccd757c5a878bc0061f7fe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__17_HandoutMaster(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9fcad223e288e8f20d59370ad1f06cde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9fcad223e288e8f20d59370ad1f06cde = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fcad223e288e8f20d59370ad1f06cde)) {
        Py_XDECREF(cache_frame_9fcad223e288e8f20d59370ad1f06cde);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fcad223e288e8f20d59370ad1f06cde == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fcad223e288e8f20d59370ad1f06cde = MAKE_FUNCTION_FRAME(codeobj_9fcad223e288e8f20d59370ad1f06cde, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fcad223e288e8f20d59370ad1f06cde->m_type_description == NULL);
    frame_9fcad223e288e8f20d59370ad1f06cde = cache_frame_9fcad223e288e8f20d59370ad1f06cde;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fcad223e288e8f20d59370ad1f06cde);
    assert(Py_REFCNT(frame_9fcad223e288e8f20d59370ad1f06cde) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[24];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_9fcad223e288e8f20d59370ad1f06cde, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fcad223e288e8f20d59370ad1f06cde->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fcad223e288e8f20d59370ad1f06cde, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fcad223e288e8f20d59370ad1f06cde,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9fcad223e288e8f20d59370ad1f06cde == cache_frame_9fcad223e288e8f20d59370ad1f06cde) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fcad223e288e8f20d59370ad1f06cde);
        cache_frame_9fcad223e288e8f20d59370ad1f06cde = NULL;
    }

    assertFrameObject(frame_9fcad223e288e8f20d59370ad1f06cde);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__18_Header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_083aebad1a0fba13e93a94080cab09ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_083aebad1a0fba13e93a94080cab09ec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_083aebad1a0fba13e93a94080cab09ec)) {
        Py_XDECREF(cache_frame_083aebad1a0fba13e93a94080cab09ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_083aebad1a0fba13e93a94080cab09ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_083aebad1a0fba13e93a94080cab09ec = MAKE_FUNCTION_FRAME(codeobj_083aebad1a0fba13e93a94080cab09ec, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_083aebad1a0fba13e93a94080cab09ec->m_type_description == NULL);
    frame_083aebad1a0fba13e93a94080cab09ec = cache_frame_083aebad1a0fba13e93a94080cab09ec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_083aebad1a0fba13e93a94080cab09ec);
    assert(Py_REFCNT(frame_083aebad1a0fba13e93a94080cab09ec) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[25];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_083aebad1a0fba13e93a94080cab09ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_083aebad1a0fba13e93a94080cab09ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_083aebad1a0fba13e93a94080cab09ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_083aebad1a0fba13e93a94080cab09ec,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_083aebad1a0fba13e93a94080cab09ec == cache_frame_083aebad1a0fba13e93a94080cab09ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_083aebad1a0fba13e93a94080cab09ec);
        cache_frame_083aebad1a0fba13e93a94080cab09ec = NULL;
    }

    assertFrameObject(frame_083aebad1a0fba13e93a94080cab09ec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__19_HeaderFooterProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_497585e7f7e44df6f449d84329c595d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_497585e7f7e44df6f449d84329c595d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_497585e7f7e44df6f449d84329c595d2)) {
        Py_XDECREF(cache_frame_497585e7f7e44df6f449d84329c595d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_497585e7f7e44df6f449d84329c595d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_497585e7f7e44df6f449d84329c595d2 = MAKE_FUNCTION_FRAME(codeobj_497585e7f7e44df6f449d84329c595d2, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_497585e7f7e44df6f449d84329c595d2->m_type_description == NULL);
    frame_497585e7f7e44df6f449d84329c595d2 = cache_frame_497585e7f7e44df6f449d84329c595d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_497585e7f7e44df6f449d84329c595d2);
    assert(Py_REFCNT(frame_497585e7f7e44df6f449d84329c595d2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[26];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_497585e7f7e44df6f449d84329c595d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_497585e7f7e44df6f449d84329c595d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_497585e7f7e44df6f449d84329c595d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_497585e7f7e44df6f449d84329c595d2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_497585e7f7e44df6f449d84329c595d2 == cache_frame_497585e7f7e44df6f449d84329c595d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_497585e7f7e44df6f449d84329c595d2);
        cache_frame_497585e7f7e44df6f449d84329c595d2 = NULL;
    }

    assertFrameObject(frame_497585e7f7e44df6f449d84329c595d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__20_HeaderLeft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_382c7fdbb66ff972a7984960e13aefe2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_382c7fdbb66ff972a7984960e13aefe2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_382c7fdbb66ff972a7984960e13aefe2)) {
        Py_XDECREF(cache_frame_382c7fdbb66ff972a7984960e13aefe2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_382c7fdbb66ff972a7984960e13aefe2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_382c7fdbb66ff972a7984960e13aefe2 = MAKE_FUNCTION_FRAME(codeobj_382c7fdbb66ff972a7984960e13aefe2, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_382c7fdbb66ff972a7984960e13aefe2->m_type_description == NULL);
    frame_382c7fdbb66ff972a7984960e13aefe2 = cache_frame_382c7fdbb66ff972a7984960e13aefe2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_382c7fdbb66ff972a7984960e13aefe2);
    assert(Py_REFCNT(frame_382c7fdbb66ff972a7984960e13aefe2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[27];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_382c7fdbb66ff972a7984960e13aefe2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_382c7fdbb66ff972a7984960e13aefe2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_382c7fdbb66ff972a7984960e13aefe2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_382c7fdbb66ff972a7984960e13aefe2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_382c7fdbb66ff972a7984960e13aefe2 == cache_frame_382c7fdbb66ff972a7984960e13aefe2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_382c7fdbb66ff972a7984960e13aefe2);
        cache_frame_382c7fdbb66ff972a7984960e13aefe2 = NULL;
    }

    assertFrameObject(frame_382c7fdbb66ff972a7984960e13aefe2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__21_HeaderStyle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c974afd34055e1053182cc287a913cd7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c974afd34055e1053182cc287a913cd7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c974afd34055e1053182cc287a913cd7)) {
        Py_XDECREF(cache_frame_c974afd34055e1053182cc287a913cd7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c974afd34055e1053182cc287a913cd7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c974afd34055e1053182cc287a913cd7 = MAKE_FUNCTION_FRAME(codeobj_c974afd34055e1053182cc287a913cd7, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c974afd34055e1053182cc287a913cd7->m_type_description == NULL);
    frame_c974afd34055e1053182cc287a913cd7 = cache_frame_c974afd34055e1053182cc287a913cd7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c974afd34055e1053182cc287a913cd7);
    assert(Py_REFCNT(frame_c974afd34055e1053182cc287a913cd7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[28];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_c974afd34055e1053182cc287a913cd7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c974afd34055e1053182cc287a913cd7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c974afd34055e1053182cc287a913cd7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c974afd34055e1053182cc287a913cd7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c974afd34055e1053182cc287a913cd7 == cache_frame_c974afd34055e1053182cc287a913cd7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c974afd34055e1053182cc287a913cd7);
        cache_frame_c974afd34055e1053182cc287a913cd7 = NULL;
    }

    assertFrameObject(frame_c974afd34055e1053182cc287a913cd7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__22_ListLevelLabelAlignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_e0279cab14c5eb038c1118567ac1f8e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e0279cab14c5eb038c1118567ac1f8e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0279cab14c5eb038c1118567ac1f8e4)) {
        Py_XDECREF(cache_frame_e0279cab14c5eb038c1118567ac1f8e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0279cab14c5eb038c1118567ac1f8e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0279cab14c5eb038c1118567ac1f8e4 = MAKE_FUNCTION_FRAME(codeobj_e0279cab14c5eb038c1118567ac1f8e4, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0279cab14c5eb038c1118567ac1f8e4->m_type_description == NULL);
    frame_e0279cab14c5eb038c1118567ac1f8e4 = cache_frame_e0279cab14c5eb038c1118567ac1f8e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0279cab14c5eb038c1118567ac1f8e4);
    assert(Py_REFCNT(frame_e0279cab14c5eb038c1118567ac1f8e4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_e0279cab14c5eb038c1118567ac1f8e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0279cab14c5eb038c1118567ac1f8e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0279cab14c5eb038c1118567ac1f8e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0279cab14c5eb038c1118567ac1f8e4,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_e0279cab14c5eb038c1118567ac1f8e4 == cache_frame_e0279cab14c5eb038c1118567ac1f8e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0279cab14c5eb038c1118567ac1f8e4);
        cache_frame_e0279cab14c5eb038c1118567ac1f8e4 = NULL;
    }

    assertFrameObject(frame_e0279cab14c5eb038c1118567ac1f8e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__23_ListLevelProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_8b9c16bc77e2d1cf9563015c4347040f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8b9c16bc77e2d1cf9563015c4347040f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b9c16bc77e2d1cf9563015c4347040f)) {
        Py_XDECREF(cache_frame_8b9c16bc77e2d1cf9563015c4347040f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b9c16bc77e2d1cf9563015c4347040f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b9c16bc77e2d1cf9563015c4347040f = MAKE_FUNCTION_FRAME(codeobj_8b9c16bc77e2d1cf9563015c4347040f, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b9c16bc77e2d1cf9563015c4347040f->m_type_description == NULL);
    frame_8b9c16bc77e2d1cf9563015c4347040f = cache_frame_8b9c16bc77e2d1cf9563015c4347040f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b9c16bc77e2d1cf9563015c4347040f);
    assert(Py_REFCNT(frame_8b9c16bc77e2d1cf9563015c4347040f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_8b9c16bc77e2d1cf9563015c4347040f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b9c16bc77e2d1cf9563015c4347040f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b9c16bc77e2d1cf9563015c4347040f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b9c16bc77e2d1cf9563015c4347040f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8b9c16bc77e2d1cf9563015c4347040f == cache_frame_8b9c16bc77e2d1cf9563015c4347040f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b9c16bc77e2d1cf9563015c4347040f);
        cache_frame_8b9c16bc77e2d1cf9563015c4347040f = NULL;
    }

    assertFrameObject(frame_8b9c16bc77e2d1cf9563015c4347040f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__24_Map(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7e5b5ca56b19a014a60978069a6cf004;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7e5b5ca56b19a014a60978069a6cf004 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e5b5ca56b19a014a60978069a6cf004)) {
        Py_XDECREF(cache_frame_7e5b5ca56b19a014a60978069a6cf004);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e5b5ca56b19a014a60978069a6cf004 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e5b5ca56b19a014a60978069a6cf004 = MAKE_FUNCTION_FRAME(codeobj_7e5b5ca56b19a014a60978069a6cf004, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e5b5ca56b19a014a60978069a6cf004->m_type_description == NULL);
    frame_7e5b5ca56b19a014a60978069a6cf004 = cache_frame_7e5b5ca56b19a014a60978069a6cf004;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e5b5ca56b19a014a60978069a6cf004);
    assert(Py_REFCNT(frame_7e5b5ca56b19a014a60978069a6cf004) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[31];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_7e5b5ca56b19a014a60978069a6cf004, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e5b5ca56b19a014a60978069a6cf004->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e5b5ca56b19a014a60978069a6cf004, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e5b5ca56b19a014a60978069a6cf004,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7e5b5ca56b19a014a60978069a6cf004 == cache_frame_7e5b5ca56b19a014a60978069a6cf004) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e5b5ca56b19a014a60978069a6cf004);
        cache_frame_7e5b5ca56b19a014a60978069a6cf004 = NULL;
    }

    assertFrameObject(frame_7e5b5ca56b19a014a60978069a6cf004);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__25_MasterPage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_783b6922e50cdd5e1e37c8ba7f9924fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe)) {
        Py_XDECREF(cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe = MAKE_FUNCTION_FRAME(codeobj_783b6922e50cdd5e1e37c8ba7f9924fe, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe->m_type_description == NULL);
    frame_783b6922e50cdd5e1e37c8ba7f9924fe = cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_783b6922e50cdd5e1e37c8ba7f9924fe);
    assert(Py_REFCNT(frame_783b6922e50cdd5e1e37c8ba7f9924fe) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[33];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_783b6922e50cdd5e1e37c8ba7f9924fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_783b6922e50cdd5e1e37c8ba7f9924fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_783b6922e50cdd5e1e37c8ba7f9924fe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_783b6922e50cdd5e1e37c8ba7f9924fe,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_783b6922e50cdd5e1e37c8ba7f9924fe == cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe);
        cache_frame_783b6922e50cdd5e1e37c8ba7f9924fe = NULL;
    }

    assertFrameObject(frame_783b6922e50cdd5e1e37c8ba7f9924fe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__26_PageLayout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_4f7d00a12bd6c6a2a2b6d28254a47900;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900)) {
        Py_XDECREF(cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900 = MAKE_FUNCTION_FRAME(codeobj_4f7d00a12bd6c6a2a2b6d28254a47900, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900->m_type_description == NULL);
    frame_4f7d00a12bd6c6a2a2b6d28254a47900 = cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f7d00a12bd6c6a2a2b6d28254a47900);
    assert(Py_REFCNT(frame_4f7d00a12bd6c6a2a2b6d28254a47900) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_4f7d00a12bd6c6a2a2b6d28254a47900, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f7d00a12bd6c6a2a2b6d28254a47900->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f7d00a12bd6c6a2a2b6d28254a47900, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f7d00a12bd6c6a2a2b6d28254a47900,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_4f7d00a12bd6c6a2a2b6d28254a47900 == cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900);
        cache_frame_4f7d00a12bd6c6a2a2b6d28254a47900 = NULL;
    }

    assertFrameObject(frame_4f7d00a12bd6c6a2a2b6d28254a47900);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__27_PageLayoutProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5cef09f74a03213300dcab79841b4901;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5cef09f74a03213300dcab79841b4901 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cef09f74a03213300dcab79841b4901)) {
        Py_XDECREF(cache_frame_5cef09f74a03213300dcab79841b4901);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cef09f74a03213300dcab79841b4901 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cef09f74a03213300dcab79841b4901 = MAKE_FUNCTION_FRAME(codeobj_5cef09f74a03213300dcab79841b4901, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5cef09f74a03213300dcab79841b4901->m_type_description == NULL);
    frame_5cef09f74a03213300dcab79841b4901 = cache_frame_5cef09f74a03213300dcab79841b4901;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5cef09f74a03213300dcab79841b4901);
    assert(Py_REFCNT(frame_5cef09f74a03213300dcab79841b4901) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_5cef09f74a03213300dcab79841b4901, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cef09f74a03213300dcab79841b4901->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cef09f74a03213300dcab79841b4901, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cef09f74a03213300dcab79841b4901,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5cef09f74a03213300dcab79841b4901 == cache_frame_5cef09f74a03213300dcab79841b4901) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5cef09f74a03213300dcab79841b4901);
        cache_frame_5cef09f74a03213300dcab79841b4901 = NULL;
    }

    assertFrameObject(frame_5cef09f74a03213300dcab79841b4901);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__28_ParagraphProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_68fa96da5dbe06a780f898affc11db2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_68fa96da5dbe06a780f898affc11db2e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68fa96da5dbe06a780f898affc11db2e)) {
        Py_XDECREF(cache_frame_68fa96da5dbe06a780f898affc11db2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68fa96da5dbe06a780f898affc11db2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68fa96da5dbe06a780f898affc11db2e = MAKE_FUNCTION_FRAME(codeobj_68fa96da5dbe06a780f898affc11db2e, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68fa96da5dbe06a780f898affc11db2e->m_type_description == NULL);
    frame_68fa96da5dbe06a780f898affc11db2e = cache_frame_68fa96da5dbe06a780f898affc11db2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_68fa96da5dbe06a780f898affc11db2e);
    assert(Py_REFCNT(frame_68fa96da5dbe06a780f898affc11db2e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_68fa96da5dbe06a780f898affc11db2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68fa96da5dbe06a780f898affc11db2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68fa96da5dbe06a780f898affc11db2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68fa96da5dbe06a780f898affc11db2e,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_68fa96da5dbe06a780f898affc11db2e == cache_frame_68fa96da5dbe06a780f898affc11db2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68fa96da5dbe06a780f898affc11db2e);
        cache_frame_68fa96da5dbe06a780f898affc11db2e = NULL;
    }

    assertFrameObject(frame_68fa96da5dbe06a780f898affc11db2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__29_PresentationPageLayout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d3e638546bc4027976c0d6ffcda4b033;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d3e638546bc4027976c0d6ffcda4b033 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3e638546bc4027976c0d6ffcda4b033)) {
        Py_XDECREF(cache_frame_d3e638546bc4027976c0d6ffcda4b033);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3e638546bc4027976c0d6ffcda4b033 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3e638546bc4027976c0d6ffcda4b033 = MAKE_FUNCTION_FRAME(codeobj_d3e638546bc4027976c0d6ffcda4b033, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3e638546bc4027976c0d6ffcda4b033->m_type_description == NULL);
    frame_d3e638546bc4027976c0d6ffcda4b033 = cache_frame_d3e638546bc4027976c0d6ffcda4b033;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d3e638546bc4027976c0d6ffcda4b033);
    assert(Py_REFCNT(frame_d3e638546bc4027976c0d6ffcda4b033) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[37];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_d3e638546bc4027976c0d6ffcda4b033, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3e638546bc4027976c0d6ffcda4b033->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3e638546bc4027976c0d6ffcda4b033, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3e638546bc4027976c0d6ffcda4b033,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d3e638546bc4027976c0d6ffcda4b033 == cache_frame_d3e638546bc4027976c0d6ffcda4b033) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3e638546bc4027976c0d6ffcda4b033);
        cache_frame_d3e638546bc4027976c0d6ffcda4b033 = NULL;
    }

    assertFrameObject(frame_d3e638546bc4027976c0d6ffcda4b033);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__30_RegionCenter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b147831dcdc4d83c6bfa4f978151d7eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b147831dcdc4d83c6bfa4f978151d7eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b147831dcdc4d83c6bfa4f978151d7eb)) {
        Py_XDECREF(cache_frame_b147831dcdc4d83c6bfa4f978151d7eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b147831dcdc4d83c6bfa4f978151d7eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b147831dcdc4d83c6bfa4f978151d7eb = MAKE_FUNCTION_FRAME(codeobj_b147831dcdc4d83c6bfa4f978151d7eb, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b147831dcdc4d83c6bfa4f978151d7eb->m_type_description == NULL);
    frame_b147831dcdc4d83c6bfa4f978151d7eb = cache_frame_b147831dcdc4d83c6bfa4f978151d7eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b147831dcdc4d83c6bfa4f978151d7eb);
    assert(Py_REFCNT(frame_b147831dcdc4d83c6bfa4f978151d7eb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[38];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_b147831dcdc4d83c6bfa4f978151d7eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b147831dcdc4d83c6bfa4f978151d7eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b147831dcdc4d83c6bfa4f978151d7eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b147831dcdc4d83c6bfa4f978151d7eb,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b147831dcdc4d83c6bfa4f978151d7eb == cache_frame_b147831dcdc4d83c6bfa4f978151d7eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b147831dcdc4d83c6bfa4f978151d7eb);
        cache_frame_b147831dcdc4d83c6bfa4f978151d7eb = NULL;
    }

    assertFrameObject(frame_b147831dcdc4d83c6bfa4f978151d7eb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__31_RegionLeft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_35958b5a290b694e29bbdb1df96659f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_35958b5a290b694e29bbdb1df96659f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_35958b5a290b694e29bbdb1df96659f4)) {
        Py_XDECREF(cache_frame_35958b5a290b694e29bbdb1df96659f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35958b5a290b694e29bbdb1df96659f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35958b5a290b694e29bbdb1df96659f4 = MAKE_FUNCTION_FRAME(codeobj_35958b5a290b694e29bbdb1df96659f4, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35958b5a290b694e29bbdb1df96659f4->m_type_description == NULL);
    frame_35958b5a290b694e29bbdb1df96659f4 = cache_frame_35958b5a290b694e29bbdb1df96659f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_35958b5a290b694e29bbdb1df96659f4);
    assert(Py_REFCNT(frame_35958b5a290b694e29bbdb1df96659f4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[39];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
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
        exception_tb = MAKE_TRACEBACK(frame_35958b5a290b694e29bbdb1df96659f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35958b5a290b694e29bbdb1df96659f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35958b5a290b694e29bbdb1df96659f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35958b5a290b694e29bbdb1df96659f4,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_35958b5a290b694e29bbdb1df96659f4 == cache_frame_35958b5a290b694e29bbdb1df96659f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35958b5a290b694e29bbdb1df96659f4);
        cache_frame_35958b5a290b694e29bbdb1df96659f4 = NULL;
    }

    assertFrameObject(frame_35958b5a290b694e29bbdb1df96659f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__32_RegionRight(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_459430070ae54a43745b734ef7f5efc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_459430070ae54a43745b734ef7f5efc0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_459430070ae54a43745b734ef7f5efc0)) {
        Py_XDECREF(cache_frame_459430070ae54a43745b734ef7f5efc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_459430070ae54a43745b734ef7f5efc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_459430070ae54a43745b734ef7f5efc0 = MAKE_FUNCTION_FRAME(codeobj_459430070ae54a43745b734ef7f5efc0, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_459430070ae54a43745b734ef7f5efc0->m_type_description == NULL);
    frame_459430070ae54a43745b734ef7f5efc0 = cache_frame_459430070ae54a43745b734ef7f5efc0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_459430070ae54a43745b734ef7f5efc0);
    assert(Py_REFCNT(frame_459430070ae54a43745b734ef7f5efc0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[40];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_459430070ae54a43745b734ef7f5efc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_459430070ae54a43745b734ef7f5efc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_459430070ae54a43745b734ef7f5efc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_459430070ae54a43745b734ef7f5efc0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_459430070ae54a43745b734ef7f5efc0 == cache_frame_459430070ae54a43745b734ef7f5efc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_459430070ae54a43745b734ef7f5efc0);
        cache_frame_459430070ae54a43745b734ef7f5efc0 = NULL;
    }

    assertFrameObject(frame_459430070ae54a43745b734ef7f5efc0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__33_RubyProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_3fc0ce0d9edd9d2d78afa9e99545cbf9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9)) {
        Py_XDECREF(cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9 = MAKE_FUNCTION_FRAME(codeobj_3fc0ce0d9edd9d2d78afa9e99545cbf9, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9->m_type_description == NULL);
    frame_3fc0ce0d9edd9d2d78afa9e99545cbf9 = cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3fc0ce0d9edd9d2d78afa9e99545cbf9);
    assert(Py_REFCNT(frame_3fc0ce0d9edd9d2d78afa9e99545cbf9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[41];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_3fc0ce0d9edd9d2d78afa9e99545cbf9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fc0ce0d9edd9d2d78afa9e99545cbf9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fc0ce0d9edd9d2d78afa9e99545cbf9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3fc0ce0d9edd9d2d78afa9e99545cbf9,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_3fc0ce0d9edd9d2d78afa9e99545cbf9 == cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9);
        cache_frame_3fc0ce0d9edd9d2d78afa9e99545cbf9 = NULL;
    }

    assertFrameObject(frame_3fc0ce0d9edd9d2d78afa9e99545cbf9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__34_SectionProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_75d22c47b86f8f63b1a5cfcc56476762;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_75d22c47b86f8f63b1a5cfcc56476762 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_75d22c47b86f8f63b1a5cfcc56476762)) {
        Py_XDECREF(cache_frame_75d22c47b86f8f63b1a5cfcc56476762);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75d22c47b86f8f63b1a5cfcc56476762 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75d22c47b86f8f63b1a5cfcc56476762 = MAKE_FUNCTION_FRAME(codeobj_75d22c47b86f8f63b1a5cfcc56476762, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75d22c47b86f8f63b1a5cfcc56476762->m_type_description == NULL);
    frame_75d22c47b86f8f63b1a5cfcc56476762 = cache_frame_75d22c47b86f8f63b1a5cfcc56476762;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_75d22c47b86f8f63b1a5cfcc56476762);
    assert(Py_REFCNT(frame_75d22c47b86f8f63b1a5cfcc56476762) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[42];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_75d22c47b86f8f63b1a5cfcc56476762, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75d22c47b86f8f63b1a5cfcc56476762->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75d22c47b86f8f63b1a5cfcc56476762, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75d22c47b86f8f63b1a5cfcc56476762,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_75d22c47b86f8f63b1a5cfcc56476762 == cache_frame_75d22c47b86f8f63b1a5cfcc56476762) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75d22c47b86f8f63b1a5cfcc56476762);
        cache_frame_75d22c47b86f8f63b1a5cfcc56476762 = NULL;
    }

    assertFrameObject(frame_75d22c47b86f8f63b1a5cfcc56476762);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__35_Style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_47495cd2565d14696aa4c0c065461a0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_47495cd2565d14696aa4c0c065461a0a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47495cd2565d14696aa4c0c065461a0a)) {
        Py_XDECREF(cache_frame_47495cd2565d14696aa4c0c065461a0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47495cd2565d14696aa4c0c065461a0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47495cd2565d14696aa4c0c065461a0a = MAKE_FUNCTION_FRAME(codeobj_47495cd2565d14696aa4c0c065461a0a, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47495cd2565d14696aa4c0c065461a0a->m_type_description == NULL);
    frame_47495cd2565d14696aa4c0c065461a0a = cache_frame_47495cd2565d14696aa4c0c065461a0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47495cd2565d14696aa4c0c065461a0a);
    assert(Py_REFCNT(frame_47495cd2565d14696aa4c0c065461a0a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[43];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_47495cd2565d14696aa4c0c065461a0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47495cd2565d14696aa4c0c065461a0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47495cd2565d14696aa4c0c065461a0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47495cd2565d14696aa4c0c065461a0a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_47495cd2565d14696aa4c0c065461a0a == cache_frame_47495cd2565d14696aa4c0c065461a0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47495cd2565d14696aa4c0c065461a0a);
        cache_frame_47495cd2565d14696aa4c0c065461a0a = NULL;
    }

    assertFrameObject(frame_47495cd2565d14696aa4c0c065461a0a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__36_TabStop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_16915f0c4c4a99288475c3b5afce8fc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_16915f0c4c4a99288475c3b5afce8fc0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_16915f0c4c4a99288475c3b5afce8fc0)) {
        Py_XDECREF(cache_frame_16915f0c4c4a99288475c3b5afce8fc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16915f0c4c4a99288475c3b5afce8fc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16915f0c4c4a99288475c3b5afce8fc0 = MAKE_FUNCTION_FRAME(codeobj_16915f0c4c4a99288475c3b5afce8fc0, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16915f0c4c4a99288475c3b5afce8fc0->m_type_description == NULL);
    frame_16915f0c4c4a99288475c3b5afce8fc0 = cache_frame_16915f0c4c4a99288475c3b5afce8fc0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16915f0c4c4a99288475c3b5afce8fc0);
    assert(Py_REFCNT(frame_16915f0c4c4a99288475c3b5afce8fc0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[44];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_16915f0c4c4a99288475c3b5afce8fc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16915f0c4c4a99288475c3b5afce8fc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16915f0c4c4a99288475c3b5afce8fc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16915f0c4c4a99288475c3b5afce8fc0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_16915f0c4c4a99288475c3b5afce8fc0 == cache_frame_16915f0c4c4a99288475c3b5afce8fc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16915f0c4c4a99288475c3b5afce8fc0);
        cache_frame_16915f0c4c4a99288475c3b5afce8fc0 = NULL;
    }

    assertFrameObject(frame_16915f0c4c4a99288475c3b5afce8fc0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__37_TabStops(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_3b4b1d4d6c669e83d664b82a29740f9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3b4b1d4d6c669e83d664b82a29740f9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3b4b1d4d6c669e83d664b82a29740f9a)) {
        Py_XDECREF(cache_frame_3b4b1d4d6c669e83d664b82a29740f9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b4b1d4d6c669e83d664b82a29740f9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b4b1d4d6c669e83d664b82a29740f9a = MAKE_FUNCTION_FRAME(codeobj_3b4b1d4d6c669e83d664b82a29740f9a, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b4b1d4d6c669e83d664b82a29740f9a->m_type_description == NULL);
    frame_3b4b1d4d6c669e83d664b82a29740f9a = cache_frame_3b4b1d4d6c669e83d664b82a29740f9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b4b1d4d6c669e83d664b82a29740f9a);
    assert(Py_REFCNT(frame_3b4b1d4d6c669e83d664b82a29740f9a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[45];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_3b4b1d4d6c669e83d664b82a29740f9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b4b1d4d6c669e83d664b82a29740f9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b4b1d4d6c669e83d664b82a29740f9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b4b1d4d6c669e83d664b82a29740f9a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_3b4b1d4d6c669e83d664b82a29740f9a == cache_frame_3b4b1d4d6c669e83d664b82a29740f9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b4b1d4d6c669e83d664b82a29740f9a);
        cache_frame_3b4b1d4d6c669e83d664b82a29740f9a = NULL;
    }

    assertFrameObject(frame_3b4b1d4d6c669e83d664b82a29740f9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__38_TableCellProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_19cba3b5756ae887ae9c191f83ecdffd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_19cba3b5756ae887ae9c191f83ecdffd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19cba3b5756ae887ae9c191f83ecdffd)) {
        Py_XDECREF(cache_frame_19cba3b5756ae887ae9c191f83ecdffd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19cba3b5756ae887ae9c191f83ecdffd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19cba3b5756ae887ae9c191f83ecdffd = MAKE_FUNCTION_FRAME(codeobj_19cba3b5756ae887ae9c191f83ecdffd, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19cba3b5756ae887ae9c191f83ecdffd->m_type_description == NULL);
    frame_19cba3b5756ae887ae9c191f83ecdffd = cache_frame_19cba3b5756ae887ae9c191f83ecdffd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19cba3b5756ae887ae9c191f83ecdffd);
    assert(Py_REFCNT(frame_19cba3b5756ae887ae9c191f83ecdffd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[46];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_19cba3b5756ae887ae9c191f83ecdffd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19cba3b5756ae887ae9c191f83ecdffd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19cba3b5756ae887ae9c191f83ecdffd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19cba3b5756ae887ae9c191f83ecdffd,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_19cba3b5756ae887ae9c191f83ecdffd == cache_frame_19cba3b5756ae887ae9c191f83ecdffd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19cba3b5756ae887ae9c191f83ecdffd);
        cache_frame_19cba3b5756ae887ae9c191f83ecdffd = NULL;
    }

    assertFrameObject(frame_19cba3b5756ae887ae9c191f83ecdffd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__39_TableColumnProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_2e9dac2c0137c46fba95031dd0e50bd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2e9dac2c0137c46fba95031dd0e50bd3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e9dac2c0137c46fba95031dd0e50bd3)) {
        Py_XDECREF(cache_frame_2e9dac2c0137c46fba95031dd0e50bd3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e9dac2c0137c46fba95031dd0e50bd3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e9dac2c0137c46fba95031dd0e50bd3 = MAKE_FUNCTION_FRAME(codeobj_2e9dac2c0137c46fba95031dd0e50bd3, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e9dac2c0137c46fba95031dd0e50bd3->m_type_description == NULL);
    frame_2e9dac2c0137c46fba95031dd0e50bd3 = cache_frame_2e9dac2c0137c46fba95031dd0e50bd3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e9dac2c0137c46fba95031dd0e50bd3);
    assert(Py_REFCNT(frame_2e9dac2c0137c46fba95031dd0e50bd3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[47];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_2e9dac2c0137c46fba95031dd0e50bd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e9dac2c0137c46fba95031dd0e50bd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e9dac2c0137c46fba95031dd0e50bd3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e9dac2c0137c46fba95031dd0e50bd3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_2e9dac2c0137c46fba95031dd0e50bd3 == cache_frame_2e9dac2c0137c46fba95031dd0e50bd3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e9dac2c0137c46fba95031dd0e50bd3);
        cache_frame_2e9dac2c0137c46fba95031dd0e50bd3 = NULL;
    }

    assertFrameObject(frame_2e9dac2c0137c46fba95031dd0e50bd3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__40_TableProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_45bd38052c7aff1894c1a6f42025dac0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_45bd38052c7aff1894c1a6f42025dac0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_45bd38052c7aff1894c1a6f42025dac0)) {
        Py_XDECREF(cache_frame_45bd38052c7aff1894c1a6f42025dac0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45bd38052c7aff1894c1a6f42025dac0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45bd38052c7aff1894c1a6f42025dac0 = MAKE_FUNCTION_FRAME(codeobj_45bd38052c7aff1894c1a6f42025dac0, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45bd38052c7aff1894c1a6f42025dac0->m_type_description == NULL);
    frame_45bd38052c7aff1894c1a6f42025dac0 = cache_frame_45bd38052c7aff1894c1a6f42025dac0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_45bd38052c7aff1894c1a6f42025dac0);
    assert(Py_REFCNT(frame_45bd38052c7aff1894c1a6f42025dac0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[48];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
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
        exception_tb = MAKE_TRACEBACK(frame_45bd38052c7aff1894c1a6f42025dac0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45bd38052c7aff1894c1a6f42025dac0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45bd38052c7aff1894c1a6f42025dac0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45bd38052c7aff1894c1a6f42025dac0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_45bd38052c7aff1894c1a6f42025dac0 == cache_frame_45bd38052c7aff1894c1a6f42025dac0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45bd38052c7aff1894c1a6f42025dac0);
        cache_frame_45bd38052c7aff1894c1a6f42025dac0 = NULL;
    }

    assertFrameObject(frame_45bd38052c7aff1894c1a6f42025dac0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__41_TableRowProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c330fd727682eed7461efe642f19ff58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c330fd727682eed7461efe642f19ff58 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c330fd727682eed7461efe642f19ff58)) {
        Py_XDECREF(cache_frame_c330fd727682eed7461efe642f19ff58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c330fd727682eed7461efe642f19ff58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c330fd727682eed7461efe642f19ff58 = MAKE_FUNCTION_FRAME(codeobj_c330fd727682eed7461efe642f19ff58, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c330fd727682eed7461efe642f19ff58->m_type_description == NULL);
    frame_c330fd727682eed7461efe642f19ff58 = cache_frame_c330fd727682eed7461efe642f19ff58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c330fd727682eed7461efe642f19ff58);
    assert(Py_REFCNT(frame_c330fd727682eed7461efe642f19ff58) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[49];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_c330fd727682eed7461efe642f19ff58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c330fd727682eed7461efe642f19ff58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c330fd727682eed7461efe642f19ff58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c330fd727682eed7461efe642f19ff58,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c330fd727682eed7461efe642f19ff58 == cache_frame_c330fd727682eed7461efe642f19ff58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c330fd727682eed7461efe642f19ff58);
        cache_frame_c330fd727682eed7461efe642f19ff58 = NULL;
    }

    assertFrameObject(frame_c330fd727682eed7461efe642f19ff58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$style$$$function__42_TextProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_811bd0ebc9303f79b4c8ee154dfee021;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_811bd0ebc9303f79b4c8ee154dfee021 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_811bd0ebc9303f79b4c8ee154dfee021)) {
        Py_XDECREF(cache_frame_811bd0ebc9303f79b4c8ee154dfee021);

#if _DEBUG_REFCOUNTS
        if (cache_frame_811bd0ebc9303f79b4c8ee154dfee021 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_811bd0ebc9303f79b4c8ee154dfee021 = MAKE_FUNCTION_FRAME(codeobj_811bd0ebc9303f79b4c8ee154dfee021, module_odf$style, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_811bd0ebc9303f79b4c8ee154dfee021->m_type_description == NULL);
    frame_811bd0ebc9303f79b4c8ee154dfee021 = cache_frame_811bd0ebc9303f79b4c8ee154dfee021;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_811bd0ebc9303f79b4c8ee154dfee021);
    assert(Py_REFCNT(frame_811bd0ebc9303f79b4c8ee154dfee021) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[8];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[50];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
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
        exception_tb = MAKE_TRACEBACK(frame_811bd0ebc9303f79b4c8ee154dfee021, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_811bd0ebc9303f79b4c8ee154dfee021->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_811bd0ebc9303f79b4c8ee154dfee021, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_811bd0ebc9303f79b4c8ee154dfee021,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_811bd0ebc9303f79b4c8ee154dfee021 == cache_frame_811bd0ebc9303f79b4c8ee154dfee021) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_811bd0ebc9303f79b4c8ee154dfee021);
        cache_frame_811bd0ebc9303f79b4c8ee154dfee021 = NULL;
    }

    assertFrameObject(frame_811bd0ebc9303f79b4c8ee154dfee021);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__10_DropCap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__10_DropCap,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e03188cac8d9161b8ff57cc25611922,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__11_FontFace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__11_FontFace,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf64c6701ea1734105392e67dbeb36f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__12_Footer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__12_Footer,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_42e6d8f6f26f16ae554ee5ec0afce33a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__13_FooterLeft() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__13_FooterLeft,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_21187a4801b435a9f5587b889f88cd6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__14_FooterStyle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__14_FooterStyle,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ada0384de80226eda2d7932267216b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__15_FootnoteSep() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__15_FootnoteSep,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8463828519707a5eeec092458c624fdb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__16_GraphicProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__16_GraphicProperties,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca02436f34ccd757c5a878bc0061f7fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__17_HandoutMaster() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__17_HandoutMaster,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fcad223e288e8f20d59370ad1f06cde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__18_Header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__18_Header,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_083aebad1a0fba13e93a94080cab09ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__19_HeaderFooterProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__19_HeaderFooterProperties,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_497585e7f7e44df6f449d84329c595d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__1_StyleElement() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__1_StyleElement,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_deb62c1241171df2578a29ce384b1530,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__20_HeaderLeft() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__20_HeaderLeft,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_382c7fdbb66ff972a7984960e13aefe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__21_HeaderStyle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__21_HeaderStyle,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c974afd34055e1053182cc287a913cd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__22_ListLevelLabelAlignment() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__22_ListLevelLabelAlignment,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e0279cab14c5eb038c1118567ac1f8e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__23_ListLevelProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__23_ListLevelProperties,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b9c16bc77e2d1cf9563015c4347040f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__24_Map() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__24_Map,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e5b5ca56b19a014a60978069a6cf004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__25_MasterPage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__25_MasterPage,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_783b6922e50cdd5e1e37c8ba7f9924fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__26_PageLayout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__26_PageLayout,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f7d00a12bd6c6a2a2b6d28254a47900,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__27_PageLayoutProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__27_PageLayoutProperties,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5cef09f74a03213300dcab79841b4901,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__28_ParagraphProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__28_ParagraphProperties,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68fa96da5dbe06a780f898affc11db2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__29_PresentationPageLayout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__29_PresentationPageLayout,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d3e638546bc4027976c0d6ffcda4b033,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__2_BackgroundImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__2_BackgroundImage,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef87902f589ee6bd687db302ddfd3e4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__30_RegionCenter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__30_RegionCenter,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b147831dcdc4d83c6bfa4f978151d7eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__31_RegionLeft() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__31_RegionLeft,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35958b5a290b694e29bbdb1df96659f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__32_RegionRight() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__32_RegionRight,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_459430070ae54a43745b734ef7f5efc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__33_RubyProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__33_RubyProperties,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3fc0ce0d9edd9d2d78afa9e99545cbf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__34_SectionProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__34_SectionProperties,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_75d22c47b86f8f63b1a5cfcc56476762,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__35_Style() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__35_Style,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_47495cd2565d14696aa4c0c065461a0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__36_TabStop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__36_TabStop,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_16915f0c4c4a99288475c3b5afce8fc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__37_TabStops() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__37_TabStops,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b4b1d4d6c669e83d664b82a29740f9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__38_TableCellProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__38_TableCellProperties,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19cba3b5756ae887ae9c191f83ecdffd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__39_TableColumnProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__39_TableColumnProperties,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e9dac2c0137c46fba95031dd0e50bd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__3_ChartProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__3_ChartProperties,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f505dc0e628b19ad13d7d16b8c92d077,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__40_TableProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__40_TableProperties,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45bd38052c7aff1894c1a6f42025dac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__41_TableRowProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__41_TableRowProperties,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c330fd727682eed7461efe642f19ff58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__42_TextProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__42_TextProperties,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_811bd0ebc9303f79b4c8ee154dfee021,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__4_Column() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__4_Column,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac3848d17b528a92b7f33d322804b64f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__5_ColumnSep() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__5_ColumnSep,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5bcc181d00c3299337703b0a45ce6928,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__6_Columns() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__6_Columns,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_49fb17fa37311f0cc68cbb721598e724,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__7_DefaultPageLayout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__7_DefaultPageLayout,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a95445a24f3c2ae8d2d8618dacc9fc7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__8_DefaultStyle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__8_DefaultStyle,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4997eba9813e417e1f01d84b32ef05ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$style$$$function__9_DrawingPageProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$style$$$function__9_DrawingPageProperties,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_945ad5663f138dbffb838257f2d8f2dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$style,
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

function_impl_code functable_odf$style[] = {
    impl_odf$style$$$function__1_StyleElement,
    impl_odf$style$$$function__2_BackgroundImage,
    impl_odf$style$$$function__3_ChartProperties,
    impl_odf$style$$$function__4_Column,
    impl_odf$style$$$function__5_ColumnSep,
    impl_odf$style$$$function__6_Columns,
    impl_odf$style$$$function__7_DefaultPageLayout,
    impl_odf$style$$$function__8_DefaultStyle,
    impl_odf$style$$$function__9_DrawingPageProperties,
    impl_odf$style$$$function__10_DropCap,
    impl_odf$style$$$function__11_FontFace,
    impl_odf$style$$$function__12_Footer,
    impl_odf$style$$$function__13_FooterLeft,
    impl_odf$style$$$function__14_FooterStyle,
    impl_odf$style$$$function__15_FootnoteSep,
    impl_odf$style$$$function__16_GraphicProperties,
    impl_odf$style$$$function__17_HandoutMaster,
    impl_odf$style$$$function__18_Header,
    impl_odf$style$$$function__19_HeaderFooterProperties,
    impl_odf$style$$$function__20_HeaderLeft,
    impl_odf$style$$$function__21_HeaderStyle,
    impl_odf$style$$$function__22_ListLevelLabelAlignment,
    impl_odf$style$$$function__23_ListLevelProperties,
    impl_odf$style$$$function__24_Map,
    impl_odf$style$$$function__25_MasterPage,
    impl_odf$style$$$function__26_PageLayout,
    impl_odf$style$$$function__27_PageLayoutProperties,
    impl_odf$style$$$function__28_ParagraphProperties,
    impl_odf$style$$$function__29_PresentationPageLayout,
    impl_odf$style$$$function__30_RegionCenter,
    impl_odf$style$$$function__31_RegionLeft,
    impl_odf$style$$$function__32_RegionRight,
    impl_odf$style$$$function__33_RubyProperties,
    impl_odf$style$$$function__34_SectionProperties,
    impl_odf$style$$$function__35_Style,
    impl_odf$style$$$function__36_TabStop,
    impl_odf$style$$$function__37_TabStops,
    impl_odf$style$$$function__38_TableCellProperties,
    impl_odf$style$$$function__39_TableColumnProperties,
    impl_odf$style$$$function__40_TableProperties,
    impl_odf$style$$$function__41_TableRowProperties,
    impl_odf$style$$$function__42_TextProperties,
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

    function_impl_code *current = functable_odf$style;
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

    if (offset > sizeof(functable_odf$style) || offset < 0) {
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
        functable_odf$style[offset],
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
        module_odf$style,
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
PyObject *modulecode_odf$style(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("odf.style");

    // Store the module for future use.
    module_odf$style = module;

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
        PRINT_STRING("odf.style: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.style: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.style: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initodf$style\n");

    moduledict_odf$style = MODULE_DICT(module_odf$style);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_odf$style,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_odf$style,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[107]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_odf$style,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_odf$style,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_odf$style,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_odf$style);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_odf$style);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_90e54cdd498c350aa0b89757189de6f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_2);
    }
    frame_90e54cdd498c350aa0b89757189de6f1 = MAKE_MODULE_FRAME(codeobj_90e54cdd498c350aa0b89757189de6f1, module_odf$style);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90e54cdd498c350aa0b89757189de6f1);
    assert(Py_REFCNT(frame_90e54cdd498c350aa0b89757189de6f1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[55], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[57];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_odf$style;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[58];
        tmp_level_value_1 = mod_consts[59];
        frame_90e54cdd498c350aa0b89757189de6f1->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_odf$style,
                mod_consts[4],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[60];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_odf$style;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[61];
        tmp_level_value_2 = mod_consts[59];
        frame_90e54cdd498c350aa0b89757189de6f1->m_frame.f_lineno = 22;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_odf$style,
                mod_consts[0],
                mod_consts[59]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90e54cdd498c350aa0b89757189de6f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90e54cdd498c350aa0b89757189de6f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90e54cdd498c350aa0b89757189de6f1, exception_lineno);
    }



    assertFrameObject(frame_90e54cdd498c350aa0b89757189de6f1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_odf$style$$$function__1_StyleElement();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_odf$style$$$function__2_BackgroundImage();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_odf$style$$$function__3_ChartProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_odf$style$$$function__4_Column();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_odf$style$$$function__5_ColumnSep();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_odf$style$$$function__6_Columns();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_odf$style$$$function__7_DefaultPageLayout();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_odf$style$$$function__8_DefaultStyle();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_odf$style$$$function__9_DrawingPageProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_odf$style$$$function__10_DropCap();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_odf$style$$$function__11_FontFace();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_odf$style$$$function__12_Footer();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_odf$style$$$function__13_FooterLeft();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_odf$style$$$function__14_FooterStyle();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_odf$style$$$function__15_FootnoteSep();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_odf$style$$$function__16_GraphicProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_odf$style$$$function__17_HandoutMaster();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_odf$style$$$function__18_Header();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_odf$style$$$function__19_HeaderFooterProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_odf$style$$$function__20_HeaderLeft();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_odf$style$$$function__21_HeaderStyle();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_odf$style$$$function__22_ListLevelLabelAlignment();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_odf$style$$$function__23_ListLevelProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_odf$style$$$function__24_Map();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_odf$style$$$function__25_MasterPage();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_odf$style$$$function__26_PageLayout();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_odf$style$$$function__27_PageLayoutProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_odf$style$$$function__28_ParagraphProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_odf$style$$$function__29_PresentationPageLayout();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_odf$style$$$function__30_RegionCenter();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_odf$style$$$function__31_RegionLeft();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_odf$style$$$function__32_RegionRight();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_odf$style$$$function__33_RubyProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_odf$style$$$function__34_SectionProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_odf$style$$$function__35_Style();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_odf$style$$$function__36_TabStop();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_odf$style$$$function__37_TabStops();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_odf$style$$$function__38_TableCellProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_odf$style$$$function__39_TableColumnProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_odf$style$$$function__40_TableProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_odf$style$$$function__41_TableRowProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_odf$style$$$function__42_TextProperties();

        UPDATE_STRING_DICT1(moduledict_odf$style, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_47);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("odf.style", false);

    Py_INCREF(module_odf$style);
    return module_odf$style;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$style, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("odf$style", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
