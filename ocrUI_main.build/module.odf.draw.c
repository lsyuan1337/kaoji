/* Generated code for Python module 'odf.draw'
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

/* The "module_odf$draw" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_odf$draw;
PyDictObject *moduledict_odf$draw;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[135];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[135];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("odf.draw"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 135; i++) {
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
void checkModuleConstants_odf$draw(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 135; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3caa91a46ce18613bec8e1f85bd53e20;
static PyCodeObject *codeobj_9d5d46e2b2d71e007df556d0b22465f0;
static PyCodeObject *codeobj_5d38c73e6b6e871192f6a9939f17a967;
static PyCodeObject *codeobj_a5742ab0a8d3ece530cb7a014661cde3;
static PyCodeObject *codeobj_044eee3da938a7d27d5e99a6923b33c7;
static PyCodeObject *codeobj_f956ce67c92fe82e1ec7f90b4471d173;
static PyCodeObject *codeobj_a1d308d7a20d9503bd6ab069a0cb9cd0;
static PyCodeObject *codeobj_79587045c920c9b9fa18ed43bea23545;
static PyCodeObject *codeobj_92db24abf89e1f8450547392c7f8fc00;
static PyCodeObject *codeobj_930ef219785471abbfe195e770548f28;
static PyCodeObject *codeobj_b745254f2e39cb01283c14741c8b42e3;
static PyCodeObject *codeobj_12f8ce0e66c00ec4a1085ca8e71ac4d3;
static PyCodeObject *codeobj_186277be97f40d374087ae7a59e05103;
static PyCodeObject *codeobj_8ff79381c284b0b318c46c6fdebc1f7c;
static PyCodeObject *codeobj_de5027a5619cf95e0834a5e1e5d2031d;
static PyCodeObject *codeobj_81d0cca2beeb5ac5edc50842ae6699e7;
static PyCodeObject *codeobj_8fe5a344c3baca733dd0261e59132cfb;
static PyCodeObject *codeobj_4998cf09d9d604c4917036aa56ed7147;
static PyCodeObject *codeobj_af8a2d3bb7a170f3c797143c2a0b4ced;
static PyCodeObject *codeobj_33b55ce5a1f77b987dcada82349ba288;
static PyCodeObject *codeobj_75a99b02363668bb5363e1d610a5832f;
static PyCodeObject *codeobj_dc051c7a7f02453d2394603a3b69f30a;
static PyCodeObject *codeobj_31b598cd2781298c26ddc4bbb1171968;
static PyCodeObject *codeobj_ec12f63e59c27702c6e6c797cfb35e91;
static PyCodeObject *codeobj_ff8bbb6dcb7da2fb98a9fa468f933962;
static PyCodeObject *codeobj_763eec498106e52ee270dda9d8049a2d;
static PyCodeObject *codeobj_4f1464f857678ec31609e10f0117fb7e;
static PyCodeObject *codeobj_9af21c13e50f62f1bb141af75e807254;
static PyCodeObject *codeobj_8f65cb8d5a00bc83ae9941e6ed651ad4;
static PyCodeObject *codeobj_cd5dde57cca099d68b8bcf7d4525ac17;
static PyCodeObject *codeobj_e9f0001045daeb0c034f9879364146ee;
static PyCodeObject *codeobj_b9891c1ea49b98b522af190fe212bb3b;
static PyCodeObject *codeobj_5e4ad3ce263c907661fa6300947b94c7;
static PyCodeObject *codeobj_9d12ecb1414739398dc689be541c055a;
static PyCodeObject *codeobj_cb16c7ed01d962880bbe8d1389e3ec0b;
static PyCodeObject *codeobj_29d9e734cd592b073032d2528f7919cd;
static PyCodeObject *codeobj_7636415731c7ad7d0fe84eddb29dd5ef;
static PyCodeObject *codeobj_d96798477ce8b2f52fca4c05bb7839eb;
static PyCodeObject *codeobj_0b409a5ad6e0b699ddb381116e9f956c;
static PyCodeObject *codeobj_361670c3a35aa5ed01b55fab6ba47913;
static PyCodeObject *codeobj_9358477b80bbc850f5612ffff393c163;
static PyCodeObject *codeobj_a629a180d148ffadc4c02e83aa77a54a;
static PyCodeObject *codeobj_95f8f2d8f4d8db66634e500c5b2af43c;
static PyCodeObject *codeobj_2d466dcd516cf02936b9080eb15e2592;
static PyCodeObject *codeobj_de05ef8e286531af4862beeff9b821b3;
static PyCodeObject *codeobj_258a7d09021cae7e7b25f33424839dcd;
static PyCodeObject *codeobj_1c84665e7c731c12303272098f98fdcf;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[129]); CHECK_OBJECT(module_filename_obj);
    codeobj_3caa91a46ce18613bec8e1f85bd53e20 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[130], mod_consts[130], NULL, NULL, 0, 0, 0);
    codeobj_9d5d46e2b2d71e007df556d0b22465f0 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[131], NULL, 0, 0, 0);
    codeobj_5d38c73e6b6e871192f6a9939f17a967 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[131], NULL, 0, 0, 0);
    codeobj_a5742ab0a8d3ece530cb7a014661cde3 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[131], NULL, 0, 0, 0);
    codeobj_044eee3da938a7d27d5e99a6923b33c7 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[131], NULL, 0, 0, 0);
    codeobj_f956ce67c92fe82e1ec7f90b4471d173 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[131], NULL, 0, 0, 0);
    codeobj_a1d308d7a20d9503bd6ab069a0cb9cd0 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[131], NULL, 0, 0, 0);
    codeobj_79587045c920c9b9fa18ed43bea23545 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[131], NULL, 0, 0, 0);
    codeobj_92db24abf89e1f8450547392c7f8fc00 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[131], NULL, 0, 0, 0);
    codeobj_930ef219785471abbfe195e770548f28 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[131], NULL, 0, 0, 0);
    codeobj_b745254f2e39cb01283c14741c8b42e3 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[131], NULL, 0, 0, 0);
    codeobj_12f8ce0e66c00ec4a1085ca8e71ac4d3 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[131], NULL, 0, 0, 0);
    codeobj_186277be97f40d374087ae7a59e05103 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[131], NULL, 0, 0, 0);
    codeobj_8ff79381c284b0b318c46c6fdebc1f7c = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[132], NULL, 1, 0, 0);
    codeobj_de5027a5619cf95e0834a5e1e5d2031d = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[131], NULL, 0, 0, 0);
    codeobj_81d0cca2beeb5ac5edc50842ae6699e7 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[131], NULL, 0, 0, 0);
    codeobj_8fe5a344c3baca733dd0261e59132cfb = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[131], NULL, 0, 0, 0);
    codeobj_4998cf09d9d604c4917036aa56ed7147 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[131], NULL, 0, 0, 0);
    codeobj_af8a2d3bb7a170f3c797143c2a0b4ced = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[131], NULL, 0, 0, 0);
    codeobj_33b55ce5a1f77b987dcada82349ba288 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[131], NULL, 0, 0, 0);
    codeobj_75a99b02363668bb5363e1d610a5832f = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[131], NULL, 0, 0, 0);
    codeobj_dc051c7a7f02453d2394603a3b69f30a = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[131], NULL, 0, 0, 0);
    codeobj_31b598cd2781298c26ddc4bbb1171968 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[131], NULL, 0, 0, 0);
    codeobj_ec12f63e59c27702c6e6c797cfb35e91 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[131], NULL, 0, 0, 0);
    codeobj_ff8bbb6dcb7da2fb98a9fa468f933962 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[131], NULL, 0, 0, 0);
    codeobj_763eec498106e52ee270dda9d8049a2d = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[131], NULL, 0, 0, 0);
    codeobj_4f1464f857678ec31609e10f0117fb7e = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[131], NULL, 0, 0, 0);
    codeobj_9af21c13e50f62f1bb141af75e807254 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[131], NULL, 0, 0, 0);
    codeobj_8f65cb8d5a00bc83ae9941e6ed651ad4 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[131], NULL, 0, 0, 0);
    codeobj_cd5dde57cca099d68b8bcf7d4525ac17 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[131], NULL, 0, 0, 0);
    codeobj_e9f0001045daeb0c034f9879364146ee = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[131], NULL, 0, 0, 0);
    codeobj_b9891c1ea49b98b522af190fe212bb3b = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[131], NULL, 0, 0, 0);
    codeobj_5e4ad3ce263c907661fa6300947b94c7 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[131], NULL, 0, 0, 0);
    codeobj_9d12ecb1414739398dc689be541c055a = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[131], NULL, 0, 0, 0);
    codeobj_cb16c7ed01d962880bbe8d1389e3ec0b = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[131], NULL, 0, 0, 0);
    codeobj_29d9e734cd592b073032d2528f7919cd = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[131], NULL, 0, 0, 0);
    codeobj_7636415731c7ad7d0fe84eddb29dd5ef = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[131], NULL, 0, 0, 0);
    codeobj_d96798477ce8b2f52fca4c05bb7839eb = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[131], NULL, 0, 0, 0);
    codeobj_0b409a5ad6e0b699ddb381116e9f956c = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[131], NULL, 0, 0, 0);
    codeobj_361670c3a35aa5ed01b55fab6ba47913 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[131], NULL, 0, 0, 0);
    codeobj_9358477b80bbc850f5612ffff393c163 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[131], NULL, 0, 0, 0);
    codeobj_a629a180d148ffadc4c02e83aa77a54a = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[131], NULL, 0, 0, 0);
    codeobj_95f8f2d8f4d8db66634e500c5b2af43c = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[131], NULL, 0, 0, 0);
    codeobj_2d466dcd516cf02936b9080eb15e2592 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[131], NULL, 0, 0, 0);
    codeobj_de05ef8e286531af4862beeff9b821b3 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[131], NULL, 0, 0, 0);
    codeobj_258a7d09021cae7e7b25f33424839dcd = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[133], NULL, 2, 0, 0);
    codeobj_1c84665e7c731c12303272098f98fdcf = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[131], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_odf$draw$$$function__10_Connector();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__11_ContourPath();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__12_ContourPolygon();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__13_Control();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__14_CustomShape();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__15_Ellipse();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__16_EnhancedGeometry();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__17_Equation();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__18_FillImage();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__19_FloatingFrame();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__1_StyleRefElement(PyObject *defaults);


static PyObject *MAKE_FUNCTION_odf$draw$$$function__20_Frame();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__21_G();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__22_GluePoint();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__23_Gradient();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__24_Handle();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__25_Hatch();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__26_Image();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__27_ImageMap();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__28_Layer();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__29_LayerSet();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__2_DrawElement(PyObject *defaults);


static PyObject *MAKE_FUNCTION_odf$draw$$$function__30_Line();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__31_Marker();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__32_Measure();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__33_Object();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__34_ObjectOle();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__35_Opacity();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__36_Page();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__37_PageThumbnail();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__38_Param();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__39_Path();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__3_A();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__40_Plugin();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__41_Polygon();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__42_Polyline();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__43_Rect();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__44_RegularPolygon();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__45_StrokeDash();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__46_TextBox();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__4_Applet();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__5_AreaCircle();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__6_AreaPolygon();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__7_AreaRectangle();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__8_Caption();


static PyObject *MAKE_FUNCTION_odf$draw$$$function__9_Circle();


// The module function definitions.
static PyObject *impl_odf$draw$$$function__1_StyleRefElement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stylename = python_pars[0];
    PyObject *par_classnames = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *var_qattrs = NULL;
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_258a7d09021cae7e7b25f33424839dcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_258a7d09021cae7e7b25f33424839dcd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_qattrs == NULL);
        var_qattrs = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_258a7d09021cae7e7b25f33424839dcd)) {
        Py_XDECREF(cache_frame_258a7d09021cae7e7b25f33424839dcd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_258a7d09021cae7e7b25f33424839dcd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_258a7d09021cae7e7b25f33424839dcd = MAKE_FUNCTION_FRAME(codeobj_258a7d09021cae7e7b25f33424839dcd, module_odf$draw, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_258a7d09021cae7e7b25f33424839dcd->m_type_description == NULL);
    frame_258a7d09021cae7e7b25f33424839dcd = cache_frame_258a7d09021cae7e7b25f33424839dcd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_258a7d09021cae7e7b25f33424839dcd);
    assert(Py_REFCNT(frame_258a7d09021cae7e7b25f33424839dcd) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_stylename);
        tmp_cmp_expr_left_1 = par_stylename;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_stylename);
        tmp_expression_value_1 = par_stylename;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[2];
        frame_258a7d09021cae7e7b25f33424839dcd->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_f);
        tmp_cmp_expr_left_2 = var_f;
        tmp_cmp_expr_right_2 = mod_consts[3];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
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
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_stylename);
        tmp_dictset_value = par_stylename;
        CHECK_OBJECT(var_qattrs);
        tmp_dictset_dict = var_qattrs;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_key = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dictset_key, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[5];
        PyTuple_SET_ITEM0(tmp_dictset_key, 1, tmp_tuple_element_1);
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_f);
        tmp_cmp_expr_left_3 = var_f;
        tmp_cmp_expr_right_3 = mod_consts[6];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
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
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_stylename);
        tmp_dictset_value = par_stylename;
        CHECK_OBJECT(var_qattrs);
        tmp_dictset_dict = var_qattrs;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_key = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dictset_key, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[5];
        PyTuple_SET_ITEM0(tmp_dictset_key, 1, tmp_tuple_element_2);
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[8];
        frame_258a7d09021cae7e7b25f33424839dcd->m_frame.f_lineno = 35;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 35;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_classnames);
        tmp_cmp_expr_left_4 = par_classnames;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_classnames);
        tmp_expression_value_3 = par_classnames;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[2];
        frame_258a7d09021cae7e7b25f33424839dcd->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_f);
        tmp_cmp_expr_left_5 = var_f;
        tmp_cmp_expr_right_5 = mod_consts[3];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_classnames);
        tmp_dictset_value = par_classnames;
        if (var_qattrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var_qattrs;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_key = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dictset_key, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[11];
        PyTuple_SET_ITEM0(tmp_dictset_key, 1, tmp_tuple_element_3);
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_f);
        tmp_cmp_expr_left_6 = var_f;
        tmp_cmp_expr_right_6 = mod_consts[6];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_classnames);
        tmp_dictset_value = par_classnames;
        if (var_qattrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var_qattrs;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_key = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dictset_key, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[11];
        PyTuple_SET_ITEM0(tmp_dictset_key, 1, tmp_tuple_element_4);
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[8];
        frame_258a7d09021cae7e7b25f33424839dcd->m_frame.f_lineno = 43;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 43;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    branch_end_5:;
    branch_no_4:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[13];
        if (var_qattrs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = var_qattrs;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
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


            exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_258a7d09021cae7e7b25f33424839dcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_258a7d09021cae7e7b25f33424839dcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_258a7d09021cae7e7b25f33424839dcd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_258a7d09021cae7e7b25f33424839dcd,
        type_description_1,
        par_stylename,
        par_classnames,
        par_args,
        var_qattrs,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_258a7d09021cae7e7b25f33424839dcd == cache_frame_258a7d09021cae7e7b25f33424839dcd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_258a7d09021cae7e7b25f33424839dcd);
        cache_frame_258a7d09021cae7e7b25f33424839dcd = NULL;
    }

    assertFrameObject(frame_258a7d09021cae7e7b25f33424839dcd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_qattrs);
    var_qattrs = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_qattrs);
    var_qattrs = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_stylename);
    Py_DECREF(par_stylename);
    CHECK_OBJECT(par_classnames);
    Py_DECREF(par_classnames);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stylename);
    Py_DECREF(par_stylename);
    CHECK_OBJECT(par_classnames);
    Py_DECREF(par_classnames);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$draw$$$function__2_DrawElement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_8ff79381c284b0b318c46c6fdebc1f7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ff79381c284b0b318c46c6fdebc1f7c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8ff79381c284b0b318c46c6fdebc1f7c)) {
        Py_XDECREF(cache_frame_8ff79381c284b0b318c46c6fdebc1f7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ff79381c284b0b318c46c6fdebc1f7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ff79381c284b0b318c46c6fdebc1f7c = MAKE_FUNCTION_FRAME(codeobj_8ff79381c284b0b318c46c6fdebc1f7c, module_odf$draw, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ff79381c284b0b318c46c6fdebc1f7c->m_type_description == NULL);
    frame_8ff79381c284b0b318c46c6fdebc1f7c = cache_frame_8ff79381c284b0b318c46c6fdebc1f7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ff79381c284b0b318c46c6fdebc1f7c);
    assert(Py_REFCNT(frame_8ff79381c284b0b318c46c6fdebc1f7c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_name);
        tmp_dict_value_1 = par_name;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_e == NULL);
        var_e = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[15];
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_e);
        tmp_expression_value_1 = var_e;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[17];
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_8ff79381c284b0b318c46c6fdebc1f7c->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (var_e == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 50;
        type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8ff79381c284b0b318c46c6fdebc1f7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ff79381c284b0b318c46c6fdebc1f7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ff79381c284b0b318c46c6fdebc1f7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ff79381c284b0b318c46c6fdebc1f7c,
        type_description_1,
        par_name,
        par_args,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_8ff79381c284b0b318c46c6fdebc1f7c == cache_frame_8ff79381c284b0b318c46c6fdebc1f7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ff79381c284b0b318c46c6fdebc1f7c);
        cache_frame_8ff79381c284b0b318c46c6fdebc1f7c = NULL;
    }

    assertFrameObject(frame_8ff79381c284b0b318c46c6fdebc1f7c);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$draw$$$function__3_A(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_9d5d46e2b2d71e007df556d0b22465f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9d5d46e2b2d71e007df556d0b22465f0 = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[19];
        tmp_default_value_1 = mod_consts[20];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_9d5d46e2b2d71e007df556d0b22465f0)) {
        Py_XDECREF(cache_frame_9d5d46e2b2d71e007df556d0b22465f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d5d46e2b2d71e007df556d0b22465f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d5d46e2b2d71e007df556d0b22465f0 = MAKE_FUNCTION_FRAME(codeobj_9d5d46e2b2d71e007df556d0b22465f0, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d5d46e2b2d71e007df556d0b22465f0->m_type_description == NULL);
    frame_9d5d46e2b2d71e007df556d0b22465f0 = cache_frame_9d5d46e2b2d71e007df556d0b22465f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d5d46e2b2d71e007df556d0b22465f0);
    assert(Py_REFCNT(frame_9d5d46e2b2d71e007df556d0b22465f0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
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


            exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_9d5d46e2b2d71e007df556d0b22465f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d5d46e2b2d71e007df556d0b22465f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d5d46e2b2d71e007df556d0b22465f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d5d46e2b2d71e007df556d0b22465f0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9d5d46e2b2d71e007df556d0b22465f0 == cache_frame_9d5d46e2b2d71e007df556d0b22465f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d5d46e2b2d71e007df556d0b22465f0);
        cache_frame_9d5d46e2b2d71e007df556d0b22465f0 = NULL;
    }

    assertFrameObject(frame_9d5d46e2b2d71e007df556d0b22465f0);

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


static PyObject *impl_odf$draw$$$function__4_Applet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5d38c73e6b6e871192f6a9939f17a967;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5d38c73e6b6e871192f6a9939f17a967 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d38c73e6b6e871192f6a9939f17a967)) {
        Py_XDECREF(cache_frame_5d38c73e6b6e871192f6a9939f17a967);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d38c73e6b6e871192f6a9939f17a967 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d38c73e6b6e871192f6a9939f17a967 = MAKE_FUNCTION_FRAME(codeobj_5d38c73e6b6e871192f6a9939f17a967, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d38c73e6b6e871192f6a9939f17a967->m_type_description == NULL);
    frame_5d38c73e6b6e871192f6a9939f17a967 = cache_frame_5d38c73e6b6e871192f6a9939f17a967;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d38c73e6b6e871192f6a9939f17a967);
    assert(Py_REFCNT(frame_5d38c73e6b6e871192f6a9939f17a967) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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


            exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_5d38c73e6b6e871192f6a9939f17a967, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d38c73e6b6e871192f6a9939f17a967->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d38c73e6b6e871192f6a9939f17a967, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d38c73e6b6e871192f6a9939f17a967,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5d38c73e6b6e871192f6a9939f17a967 == cache_frame_5d38c73e6b6e871192f6a9939f17a967) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d38c73e6b6e871192f6a9939f17a967);
        cache_frame_5d38c73e6b6e871192f6a9939f17a967 = NULL;
    }

    assertFrameObject(frame_5d38c73e6b6e871192f6a9939f17a967);

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


static PyObject *impl_odf$draw$$$function__5_AreaCircle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a5742ab0a8d3ece530cb7a014661cde3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a5742ab0a8d3ece530cb7a014661cde3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5742ab0a8d3ece530cb7a014661cde3)) {
        Py_XDECREF(cache_frame_a5742ab0a8d3ece530cb7a014661cde3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5742ab0a8d3ece530cb7a014661cde3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5742ab0a8d3ece530cb7a014661cde3 = MAKE_FUNCTION_FRAME(codeobj_a5742ab0a8d3ece530cb7a014661cde3, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5742ab0a8d3ece530cb7a014661cde3->m_type_description == NULL);
    frame_a5742ab0a8d3ece530cb7a014661cde3 = cache_frame_a5742ab0a8d3ece530cb7a014661cde3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5742ab0a8d3ece530cb7a014661cde3);
    assert(Py_REFCNT(frame_a5742ab0a8d3ece530cb7a014661cde3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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


            exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_a5742ab0a8d3ece530cb7a014661cde3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5742ab0a8d3ece530cb7a014661cde3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5742ab0a8d3ece530cb7a014661cde3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5742ab0a8d3ece530cb7a014661cde3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a5742ab0a8d3ece530cb7a014661cde3 == cache_frame_a5742ab0a8d3ece530cb7a014661cde3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5742ab0a8d3ece530cb7a014661cde3);
        cache_frame_a5742ab0a8d3ece530cb7a014661cde3 = NULL;
    }

    assertFrameObject(frame_a5742ab0a8d3ece530cb7a014661cde3);

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


static PyObject *impl_odf$draw$$$function__6_AreaPolygon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_044eee3da938a7d27d5e99a6923b33c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_044eee3da938a7d27d5e99a6923b33c7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_044eee3da938a7d27d5e99a6923b33c7)) {
        Py_XDECREF(cache_frame_044eee3da938a7d27d5e99a6923b33c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_044eee3da938a7d27d5e99a6923b33c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_044eee3da938a7d27d5e99a6923b33c7 = MAKE_FUNCTION_FRAME(codeobj_044eee3da938a7d27d5e99a6923b33c7, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_044eee3da938a7d27d5e99a6923b33c7->m_type_description == NULL);
    frame_044eee3da938a7d27d5e99a6923b33c7 = cache_frame_044eee3da938a7d27d5e99a6923b33c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_044eee3da938a7d27d5e99a6923b33c7);
    assert(Py_REFCNT(frame_044eee3da938a7d27d5e99a6923b33c7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
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


            exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_044eee3da938a7d27d5e99a6923b33c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_044eee3da938a7d27d5e99a6923b33c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_044eee3da938a7d27d5e99a6923b33c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_044eee3da938a7d27d5e99a6923b33c7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_044eee3da938a7d27d5e99a6923b33c7 == cache_frame_044eee3da938a7d27d5e99a6923b33c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_044eee3da938a7d27d5e99a6923b33c7);
        cache_frame_044eee3da938a7d27d5e99a6923b33c7 = NULL;
    }

    assertFrameObject(frame_044eee3da938a7d27d5e99a6923b33c7);

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


static PyObject *impl_odf$draw$$$function__7_AreaRectangle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_f956ce67c92fe82e1ec7f90b4471d173;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f956ce67c92fe82e1ec7f90b4471d173 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f956ce67c92fe82e1ec7f90b4471d173)) {
        Py_XDECREF(cache_frame_f956ce67c92fe82e1ec7f90b4471d173);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f956ce67c92fe82e1ec7f90b4471d173 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f956ce67c92fe82e1ec7f90b4471d173 = MAKE_FUNCTION_FRAME(codeobj_f956ce67c92fe82e1ec7f90b4471d173, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f956ce67c92fe82e1ec7f90b4471d173->m_type_description == NULL);
    frame_f956ce67c92fe82e1ec7f90b4471d173 = cache_frame_f956ce67c92fe82e1ec7f90b4471d173;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f956ce67c92fe82e1ec7f90b4471d173);
    assert(Py_REFCNT(frame_f956ce67c92fe82e1ec7f90b4471d173) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
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


            exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_f956ce67c92fe82e1ec7f90b4471d173, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f956ce67c92fe82e1ec7f90b4471d173->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f956ce67c92fe82e1ec7f90b4471d173, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f956ce67c92fe82e1ec7f90b4471d173,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f956ce67c92fe82e1ec7f90b4471d173 == cache_frame_f956ce67c92fe82e1ec7f90b4471d173) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f956ce67c92fe82e1ec7f90b4471d173);
        cache_frame_f956ce67c92fe82e1ec7f90b4471d173 = NULL;
    }

    assertFrameObject(frame_f956ce67c92fe82e1ec7f90b4471d173);

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


static PyObject *impl_odf$draw$$$function__8_Caption(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a1d308d7a20d9503bd6ab069a0cb9cd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0)) {
        Py_XDECREF(cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0 = MAKE_FUNCTION_FRAME(codeobj_a1d308d7a20d9503bd6ab069a0cb9cd0, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0->m_type_description == NULL);
    frame_a1d308d7a20d9503bd6ab069a0cb9cd0 = cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a1d308d7a20d9503bd6ab069a0cb9cd0);
    assert(Py_REFCNT(frame_a1d308d7a20d9503bd6ab069a0cb9cd0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_a1d308d7a20d9503bd6ab069a0cb9cd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a1d308d7a20d9503bd6ab069a0cb9cd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1d308d7a20d9503bd6ab069a0cb9cd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a1d308d7a20d9503bd6ab069a0cb9cd0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a1d308d7a20d9503bd6ab069a0cb9cd0 == cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0);
        cache_frame_a1d308d7a20d9503bd6ab069a0cb9cd0 = NULL;
    }

    assertFrameObject(frame_a1d308d7a20d9503bd6ab069a0cb9cd0);

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


static PyObject *impl_odf$draw$$$function__9_Circle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_79587045c920c9b9fa18ed43bea23545;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_79587045c920c9b9fa18ed43bea23545 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79587045c920c9b9fa18ed43bea23545)) {
        Py_XDECREF(cache_frame_79587045c920c9b9fa18ed43bea23545);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79587045c920c9b9fa18ed43bea23545 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79587045c920c9b9fa18ed43bea23545 = MAKE_FUNCTION_FRAME(codeobj_79587045c920c9b9fa18ed43bea23545, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79587045c920c9b9fa18ed43bea23545->m_type_description == NULL);
    frame_79587045c920c9b9fa18ed43bea23545 = cache_frame_79587045c920c9b9fa18ed43bea23545;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_79587045c920c9b9fa18ed43bea23545);
    assert(Py_REFCNT(frame_79587045c920c9b9fa18ed43bea23545) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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


            exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_79587045c920c9b9fa18ed43bea23545, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79587045c920c9b9fa18ed43bea23545->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79587045c920c9b9fa18ed43bea23545, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79587045c920c9b9fa18ed43bea23545,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_79587045c920c9b9fa18ed43bea23545 == cache_frame_79587045c920c9b9fa18ed43bea23545) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79587045c920c9b9fa18ed43bea23545);
        cache_frame_79587045c920c9b9fa18ed43bea23545 = NULL;
    }

    assertFrameObject(frame_79587045c920c9b9fa18ed43bea23545);

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


static PyObject *impl_odf$draw$$$function__10_Connector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_92db24abf89e1f8450547392c7f8fc00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_92db24abf89e1f8450547392c7f8fc00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_92db24abf89e1f8450547392c7f8fc00)) {
        Py_XDECREF(cache_frame_92db24abf89e1f8450547392c7f8fc00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92db24abf89e1f8450547392c7f8fc00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92db24abf89e1f8450547392c7f8fc00 = MAKE_FUNCTION_FRAME(codeobj_92db24abf89e1f8450547392c7f8fc00, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_92db24abf89e1f8450547392c7f8fc00->m_type_description == NULL);
    frame_92db24abf89e1f8450547392c7f8fc00 = cache_frame_92db24abf89e1f8450547392c7f8fc00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_92db24abf89e1f8450547392c7f8fc00);
    assert(Py_REFCNT(frame_92db24abf89e1f8450547392c7f8fc00) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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


            exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_92db24abf89e1f8450547392c7f8fc00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92db24abf89e1f8450547392c7f8fc00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92db24abf89e1f8450547392c7f8fc00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92db24abf89e1f8450547392c7f8fc00,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_92db24abf89e1f8450547392c7f8fc00 == cache_frame_92db24abf89e1f8450547392c7f8fc00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_92db24abf89e1f8450547392c7f8fc00);
        cache_frame_92db24abf89e1f8450547392c7f8fc00 = NULL;
    }

    assertFrameObject(frame_92db24abf89e1f8450547392c7f8fc00);

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


static PyObject *impl_odf$draw$$$function__11_ContourPath(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_930ef219785471abbfe195e770548f28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_930ef219785471abbfe195e770548f28 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_930ef219785471abbfe195e770548f28)) {
        Py_XDECREF(cache_frame_930ef219785471abbfe195e770548f28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_930ef219785471abbfe195e770548f28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_930ef219785471abbfe195e770548f28 = MAKE_FUNCTION_FRAME(codeobj_930ef219785471abbfe195e770548f28, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_930ef219785471abbfe195e770548f28->m_type_description == NULL);
    frame_930ef219785471abbfe195e770548f28 = cache_frame_930ef219785471abbfe195e770548f28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_930ef219785471abbfe195e770548f28);
    assert(Py_REFCNT(frame_930ef219785471abbfe195e770548f28) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_930ef219785471abbfe195e770548f28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_930ef219785471abbfe195e770548f28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_930ef219785471abbfe195e770548f28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_930ef219785471abbfe195e770548f28,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_930ef219785471abbfe195e770548f28 == cache_frame_930ef219785471abbfe195e770548f28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_930ef219785471abbfe195e770548f28);
        cache_frame_930ef219785471abbfe195e770548f28 = NULL;
    }

    assertFrameObject(frame_930ef219785471abbfe195e770548f28);

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


static PyObject *impl_odf$draw$$$function__12_ContourPolygon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b745254f2e39cb01283c14741c8b42e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b745254f2e39cb01283c14741c8b42e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b745254f2e39cb01283c14741c8b42e3)) {
        Py_XDECREF(cache_frame_b745254f2e39cb01283c14741c8b42e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b745254f2e39cb01283c14741c8b42e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b745254f2e39cb01283c14741c8b42e3 = MAKE_FUNCTION_FRAME(codeobj_b745254f2e39cb01283c14741c8b42e3, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b745254f2e39cb01283c14741c8b42e3->m_type_description == NULL);
    frame_b745254f2e39cb01283c14741c8b42e3 = cache_frame_b745254f2e39cb01283c14741c8b42e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b745254f2e39cb01283c14741c8b42e3);
    assert(Py_REFCNT(frame_b745254f2e39cb01283c14741c8b42e3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[32];
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


            exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_b745254f2e39cb01283c14741c8b42e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b745254f2e39cb01283c14741c8b42e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b745254f2e39cb01283c14741c8b42e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b745254f2e39cb01283c14741c8b42e3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b745254f2e39cb01283c14741c8b42e3 == cache_frame_b745254f2e39cb01283c14741c8b42e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b745254f2e39cb01283c14741c8b42e3);
        cache_frame_b745254f2e39cb01283c14741c8b42e3 = NULL;
    }

    assertFrameObject(frame_b745254f2e39cb01283c14741c8b42e3);

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


static PyObject *impl_odf$draw$$$function__13_Control(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_12f8ce0e66c00ec4a1085ca8e71ac4d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3)) {
        Py_XDECREF(cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3 = MAKE_FUNCTION_FRAME(codeobj_12f8ce0e66c00ec4a1085ca8e71ac4d3, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3->m_type_description == NULL);
    frame_12f8ce0e66c00ec4a1085ca8e71ac4d3 = cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12f8ce0e66c00ec4a1085ca8e71ac4d3);
    assert(Py_REFCNT(frame_12f8ce0e66c00ec4a1085ca8e71ac4d3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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


            exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_12f8ce0e66c00ec4a1085ca8e71ac4d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12f8ce0e66c00ec4a1085ca8e71ac4d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12f8ce0e66c00ec4a1085ca8e71ac4d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12f8ce0e66c00ec4a1085ca8e71ac4d3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_12f8ce0e66c00ec4a1085ca8e71ac4d3 == cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3);
        cache_frame_12f8ce0e66c00ec4a1085ca8e71ac4d3 = NULL;
    }

    assertFrameObject(frame_12f8ce0e66c00ec4a1085ca8e71ac4d3);

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


static PyObject *impl_odf$draw$$$function__14_CustomShape(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_186277be97f40d374087ae7a59e05103;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_186277be97f40d374087ae7a59e05103 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_186277be97f40d374087ae7a59e05103)) {
        Py_XDECREF(cache_frame_186277be97f40d374087ae7a59e05103);

#if _DEBUG_REFCOUNTS
        if (cache_frame_186277be97f40d374087ae7a59e05103 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_186277be97f40d374087ae7a59e05103 = MAKE_FUNCTION_FRAME(codeobj_186277be97f40d374087ae7a59e05103, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_186277be97f40d374087ae7a59e05103->m_type_description == NULL);
    frame_186277be97f40d374087ae7a59e05103 = cache_frame_186277be97f40d374087ae7a59e05103;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_186277be97f40d374087ae7a59e05103);
    assert(Py_REFCNT(frame_186277be97f40d374087ae7a59e05103) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
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


            exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_186277be97f40d374087ae7a59e05103, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_186277be97f40d374087ae7a59e05103->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_186277be97f40d374087ae7a59e05103, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_186277be97f40d374087ae7a59e05103,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_186277be97f40d374087ae7a59e05103 == cache_frame_186277be97f40d374087ae7a59e05103) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_186277be97f40d374087ae7a59e05103);
        cache_frame_186277be97f40d374087ae7a59e05103 = NULL;
    }

    assertFrameObject(frame_186277be97f40d374087ae7a59e05103);

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


static PyObject *impl_odf$draw$$$function__15_Ellipse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_de5027a5619cf95e0834a5e1e5d2031d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_de5027a5619cf95e0834a5e1e5d2031d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de5027a5619cf95e0834a5e1e5d2031d)) {
        Py_XDECREF(cache_frame_de5027a5619cf95e0834a5e1e5d2031d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de5027a5619cf95e0834a5e1e5d2031d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de5027a5619cf95e0834a5e1e5d2031d = MAKE_FUNCTION_FRAME(codeobj_de5027a5619cf95e0834a5e1e5d2031d, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de5027a5619cf95e0834a5e1e5d2031d->m_type_description == NULL);
    frame_de5027a5619cf95e0834a5e1e5d2031d = cache_frame_de5027a5619cf95e0834a5e1e5d2031d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de5027a5619cf95e0834a5e1e5d2031d);
    assert(Py_REFCNT(frame_de5027a5619cf95e0834a5e1e5d2031d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
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


            exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_de5027a5619cf95e0834a5e1e5d2031d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de5027a5619cf95e0834a5e1e5d2031d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de5027a5619cf95e0834a5e1e5d2031d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de5027a5619cf95e0834a5e1e5d2031d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_de5027a5619cf95e0834a5e1e5d2031d == cache_frame_de5027a5619cf95e0834a5e1e5d2031d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de5027a5619cf95e0834a5e1e5d2031d);
        cache_frame_de5027a5619cf95e0834a5e1e5d2031d = NULL;
    }

    assertFrameObject(frame_de5027a5619cf95e0834a5e1e5d2031d);

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


static PyObject *impl_odf$draw$$$function__16_EnhancedGeometry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_81d0cca2beeb5ac5edc50842ae6699e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_81d0cca2beeb5ac5edc50842ae6699e7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81d0cca2beeb5ac5edc50842ae6699e7)) {
        Py_XDECREF(cache_frame_81d0cca2beeb5ac5edc50842ae6699e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81d0cca2beeb5ac5edc50842ae6699e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81d0cca2beeb5ac5edc50842ae6699e7 = MAKE_FUNCTION_FRAME(codeobj_81d0cca2beeb5ac5edc50842ae6699e7, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81d0cca2beeb5ac5edc50842ae6699e7->m_type_description == NULL);
    frame_81d0cca2beeb5ac5edc50842ae6699e7 = cache_frame_81d0cca2beeb5ac5edc50842ae6699e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81d0cca2beeb5ac5edc50842ae6699e7);
    assert(Py_REFCNT(frame_81d0cca2beeb5ac5edc50842ae6699e7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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


            exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_81d0cca2beeb5ac5edc50842ae6699e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81d0cca2beeb5ac5edc50842ae6699e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81d0cca2beeb5ac5edc50842ae6699e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81d0cca2beeb5ac5edc50842ae6699e7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_81d0cca2beeb5ac5edc50842ae6699e7 == cache_frame_81d0cca2beeb5ac5edc50842ae6699e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81d0cca2beeb5ac5edc50842ae6699e7);
        cache_frame_81d0cca2beeb5ac5edc50842ae6699e7 = NULL;
    }

    assertFrameObject(frame_81d0cca2beeb5ac5edc50842ae6699e7);

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


static PyObject *impl_odf$draw$$$function__17_Equation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_8fe5a344c3baca733dd0261e59132cfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8fe5a344c3baca733dd0261e59132cfb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8fe5a344c3baca733dd0261e59132cfb)) {
        Py_XDECREF(cache_frame_8fe5a344c3baca733dd0261e59132cfb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fe5a344c3baca733dd0261e59132cfb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fe5a344c3baca733dd0261e59132cfb = MAKE_FUNCTION_FRAME(codeobj_8fe5a344c3baca733dd0261e59132cfb, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8fe5a344c3baca733dd0261e59132cfb->m_type_description == NULL);
    frame_8fe5a344c3baca733dd0261e59132cfb = cache_frame_8fe5a344c3baca733dd0261e59132cfb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8fe5a344c3baca733dd0261e59132cfb);
    assert(Py_REFCNT(frame_8fe5a344c3baca733dd0261e59132cfb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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


            exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_8fe5a344c3baca733dd0261e59132cfb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fe5a344c3baca733dd0261e59132cfb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fe5a344c3baca733dd0261e59132cfb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fe5a344c3baca733dd0261e59132cfb,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8fe5a344c3baca733dd0261e59132cfb == cache_frame_8fe5a344c3baca733dd0261e59132cfb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8fe5a344c3baca733dd0261e59132cfb);
        cache_frame_8fe5a344c3baca733dd0261e59132cfb = NULL;
    }

    assertFrameObject(frame_8fe5a344c3baca733dd0261e59132cfb);

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


static PyObject *impl_odf$draw$$$function__18_FillImage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_4998cf09d9d604c4917036aa56ed7147;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4998cf09d9d604c4917036aa56ed7147 = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[19];
        tmp_default_value_1 = mod_consts[20];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_4998cf09d9d604c4917036aa56ed7147)) {
        Py_XDECREF(cache_frame_4998cf09d9d604c4917036aa56ed7147);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4998cf09d9d604c4917036aa56ed7147 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4998cf09d9d604c4917036aa56ed7147 = MAKE_FUNCTION_FRAME(codeobj_4998cf09d9d604c4917036aa56ed7147, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4998cf09d9d604c4917036aa56ed7147->m_type_description == NULL);
    frame_4998cf09d9d604c4917036aa56ed7147 = cache_frame_4998cf09d9d604c4917036aa56ed7147;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4998cf09d9d604c4917036aa56ed7147);
    assert(Py_REFCNT(frame_4998cf09d9d604c4917036aa56ed7147) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
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


            exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_4998cf09d9d604c4917036aa56ed7147, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4998cf09d9d604c4917036aa56ed7147->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4998cf09d9d604c4917036aa56ed7147, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4998cf09d9d604c4917036aa56ed7147,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_4998cf09d9d604c4917036aa56ed7147 == cache_frame_4998cf09d9d604c4917036aa56ed7147) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4998cf09d9d604c4917036aa56ed7147);
        cache_frame_4998cf09d9d604c4917036aa56ed7147 = NULL;
    }

    assertFrameObject(frame_4998cf09d9d604c4917036aa56ed7147);

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


static PyObject *impl_odf$draw$$$function__19_FloatingFrame(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_af8a2d3bb7a170f3c797143c2a0b4ced;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[19];
        tmp_default_value_1 = mod_consts[20];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced)) {
        Py_XDECREF(cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced = MAKE_FUNCTION_FRAME(codeobj_af8a2d3bb7a170f3c797143c2a0b4ced, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced->m_type_description == NULL);
    frame_af8a2d3bb7a170f3c797143c2a0b4ced = cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af8a2d3bb7a170f3c797143c2a0b4ced);
    assert(Py_REFCNT(frame_af8a2d3bb7a170f3c797143c2a0b4ced) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_af8a2d3bb7a170f3c797143c2a0b4ced, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af8a2d3bb7a170f3c797143c2a0b4ced->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af8a2d3bb7a170f3c797143c2a0b4ced, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af8a2d3bb7a170f3c797143c2a0b4ced,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_af8a2d3bb7a170f3c797143c2a0b4ced == cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced);
        cache_frame_af8a2d3bb7a170f3c797143c2a0b4ced = NULL;
    }

    assertFrameObject(frame_af8a2d3bb7a170f3c797143c2a0b4ced);

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


static PyObject *impl_odf$draw$$$function__20_Frame(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_33b55ce5a1f77b987dcada82349ba288;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_33b55ce5a1f77b987dcada82349ba288 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_33b55ce5a1f77b987dcada82349ba288)) {
        Py_XDECREF(cache_frame_33b55ce5a1f77b987dcada82349ba288);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33b55ce5a1f77b987dcada82349ba288 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33b55ce5a1f77b987dcada82349ba288 = MAKE_FUNCTION_FRAME(codeobj_33b55ce5a1f77b987dcada82349ba288, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_33b55ce5a1f77b987dcada82349ba288->m_type_description == NULL);
    frame_33b55ce5a1f77b987dcada82349ba288 = cache_frame_33b55ce5a1f77b987dcada82349ba288;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_33b55ce5a1f77b987dcada82349ba288);
    assert(Py_REFCNT(frame_33b55ce5a1f77b987dcada82349ba288) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_33b55ce5a1f77b987dcada82349ba288, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33b55ce5a1f77b987dcada82349ba288->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33b55ce5a1f77b987dcada82349ba288, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33b55ce5a1f77b987dcada82349ba288,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_33b55ce5a1f77b987dcada82349ba288 == cache_frame_33b55ce5a1f77b987dcada82349ba288) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_33b55ce5a1f77b987dcada82349ba288);
        cache_frame_33b55ce5a1f77b987dcada82349ba288 = NULL;
    }

    assertFrameObject(frame_33b55ce5a1f77b987dcada82349ba288);

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


static PyObject *impl_odf$draw$$$function__21_G(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_75a99b02363668bb5363e1d610a5832f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_75a99b02363668bb5363e1d610a5832f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_75a99b02363668bb5363e1d610a5832f)) {
        Py_XDECREF(cache_frame_75a99b02363668bb5363e1d610a5832f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75a99b02363668bb5363e1d610a5832f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75a99b02363668bb5363e1d610a5832f = MAKE_FUNCTION_FRAME(codeobj_75a99b02363668bb5363e1d610a5832f, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75a99b02363668bb5363e1d610a5832f->m_type_description == NULL);
    frame_75a99b02363668bb5363e1d610a5832f = cache_frame_75a99b02363668bb5363e1d610a5832f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_75a99b02363668bb5363e1d610a5832f);
    assert(Py_REFCNT(frame_75a99b02363668bb5363e1d610a5832f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_75a99b02363668bb5363e1d610a5832f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75a99b02363668bb5363e1d610a5832f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75a99b02363668bb5363e1d610a5832f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75a99b02363668bb5363e1d610a5832f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_75a99b02363668bb5363e1d610a5832f == cache_frame_75a99b02363668bb5363e1d610a5832f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75a99b02363668bb5363e1d610a5832f);
        cache_frame_75a99b02363668bb5363e1d610a5832f = NULL;
    }

    assertFrameObject(frame_75a99b02363668bb5363e1d610a5832f);

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


static PyObject *impl_odf$draw$$$function__22_GluePoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_dc051c7a7f02453d2394603a3b69f30a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dc051c7a7f02453d2394603a3b69f30a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc051c7a7f02453d2394603a3b69f30a)) {
        Py_XDECREF(cache_frame_dc051c7a7f02453d2394603a3b69f30a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc051c7a7f02453d2394603a3b69f30a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc051c7a7f02453d2394603a3b69f30a = MAKE_FUNCTION_FRAME(codeobj_dc051c7a7f02453d2394603a3b69f30a, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc051c7a7f02453d2394603a3b69f30a->m_type_description == NULL);
    frame_dc051c7a7f02453d2394603a3b69f30a = cache_frame_dc051c7a7f02453d2394603a3b69f30a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc051c7a7f02453d2394603a3b69f30a);
    assert(Py_REFCNT(frame_dc051c7a7f02453d2394603a3b69f30a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_dc051c7a7f02453d2394603a3b69f30a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc051c7a7f02453d2394603a3b69f30a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc051c7a7f02453d2394603a3b69f30a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc051c7a7f02453d2394603a3b69f30a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_dc051c7a7f02453d2394603a3b69f30a == cache_frame_dc051c7a7f02453d2394603a3b69f30a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc051c7a7f02453d2394603a3b69f30a);
        cache_frame_dc051c7a7f02453d2394603a3b69f30a = NULL;
    }

    assertFrameObject(frame_dc051c7a7f02453d2394603a3b69f30a);

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


static PyObject *impl_odf$draw$$$function__23_Gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_31b598cd2781298c26ddc4bbb1171968;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_31b598cd2781298c26ddc4bbb1171968 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31b598cd2781298c26ddc4bbb1171968)) {
        Py_XDECREF(cache_frame_31b598cd2781298c26ddc4bbb1171968);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31b598cd2781298c26ddc4bbb1171968 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31b598cd2781298c26ddc4bbb1171968 = MAKE_FUNCTION_FRAME(codeobj_31b598cd2781298c26ddc4bbb1171968, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31b598cd2781298c26ddc4bbb1171968->m_type_description == NULL);
    frame_31b598cd2781298c26ddc4bbb1171968 = cache_frame_31b598cd2781298c26ddc4bbb1171968;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31b598cd2781298c26ddc4bbb1171968);
    assert(Py_REFCNT(frame_31b598cd2781298c26ddc4bbb1171968) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_31b598cd2781298c26ddc4bbb1171968, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31b598cd2781298c26ddc4bbb1171968->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31b598cd2781298c26ddc4bbb1171968, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31b598cd2781298c26ddc4bbb1171968,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_31b598cd2781298c26ddc4bbb1171968 == cache_frame_31b598cd2781298c26ddc4bbb1171968) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31b598cd2781298c26ddc4bbb1171968);
        cache_frame_31b598cd2781298c26ddc4bbb1171968 = NULL;
    }

    assertFrameObject(frame_31b598cd2781298c26ddc4bbb1171968);

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


static PyObject *impl_odf$draw$$$function__24_Handle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ec12f63e59c27702c6e6c797cfb35e91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ec12f63e59c27702c6e6c797cfb35e91 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec12f63e59c27702c6e6c797cfb35e91)) {
        Py_XDECREF(cache_frame_ec12f63e59c27702c6e6c797cfb35e91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec12f63e59c27702c6e6c797cfb35e91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec12f63e59c27702c6e6c797cfb35e91 = MAKE_FUNCTION_FRAME(codeobj_ec12f63e59c27702c6e6c797cfb35e91, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec12f63e59c27702c6e6c797cfb35e91->m_type_description == NULL);
    frame_ec12f63e59c27702c6e6c797cfb35e91 = cache_frame_ec12f63e59c27702c6e6c797cfb35e91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec12f63e59c27702c6e6c797cfb35e91);
    assert(Py_REFCNT(frame_ec12f63e59c27702c6e6c797cfb35e91) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_ec12f63e59c27702c6e6c797cfb35e91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec12f63e59c27702c6e6c797cfb35e91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec12f63e59c27702c6e6c797cfb35e91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec12f63e59c27702c6e6c797cfb35e91,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ec12f63e59c27702c6e6c797cfb35e91 == cache_frame_ec12f63e59c27702c6e6c797cfb35e91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec12f63e59c27702c6e6c797cfb35e91);
        cache_frame_ec12f63e59c27702c6e6c797cfb35e91 = NULL;
    }

    assertFrameObject(frame_ec12f63e59c27702c6e6c797cfb35e91);

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


static PyObject *impl_odf$draw$$$function__25_Hatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ff8bbb6dcb7da2fb98a9fa468f933962;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962)) {
        Py_XDECREF(cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962 = MAKE_FUNCTION_FRAME(codeobj_ff8bbb6dcb7da2fb98a9fa468f933962, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962->m_type_description == NULL);
    frame_ff8bbb6dcb7da2fb98a9fa468f933962 = cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff8bbb6dcb7da2fb98a9fa468f933962);
    assert(Py_REFCNT(frame_ff8bbb6dcb7da2fb98a9fa468f933962) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_ff8bbb6dcb7da2fb98a9fa468f933962, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff8bbb6dcb7da2fb98a9fa468f933962->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff8bbb6dcb7da2fb98a9fa468f933962, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff8bbb6dcb7da2fb98a9fa468f933962,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ff8bbb6dcb7da2fb98a9fa468f933962 == cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962);
        cache_frame_ff8bbb6dcb7da2fb98a9fa468f933962 = NULL;
    }

    assertFrameObject(frame_ff8bbb6dcb7da2fb98a9fa468f933962);

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


static PyObject *impl_odf$draw$$$function__26_Image(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_763eec498106e52ee270dda9d8049a2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_763eec498106e52ee270dda9d8049a2d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_763eec498106e52ee270dda9d8049a2d)) {
        Py_XDECREF(cache_frame_763eec498106e52ee270dda9d8049a2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_763eec498106e52ee270dda9d8049a2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_763eec498106e52ee270dda9d8049a2d = MAKE_FUNCTION_FRAME(codeobj_763eec498106e52ee270dda9d8049a2d, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_763eec498106e52ee270dda9d8049a2d->m_type_description == NULL);
    frame_763eec498106e52ee270dda9d8049a2d = cache_frame_763eec498106e52ee270dda9d8049a2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_763eec498106e52ee270dda9d8049a2d);
    assert(Py_REFCNT(frame_763eec498106e52ee270dda9d8049a2d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_763eec498106e52ee270dda9d8049a2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_763eec498106e52ee270dda9d8049a2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_763eec498106e52ee270dda9d8049a2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_763eec498106e52ee270dda9d8049a2d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_763eec498106e52ee270dda9d8049a2d == cache_frame_763eec498106e52ee270dda9d8049a2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_763eec498106e52ee270dda9d8049a2d);
        cache_frame_763eec498106e52ee270dda9d8049a2d = NULL;
    }

    assertFrameObject(frame_763eec498106e52ee270dda9d8049a2d);

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


static PyObject *impl_odf$draw$$$function__27_ImageMap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_4f1464f857678ec31609e10f0117fb7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4f1464f857678ec31609e10f0117fb7e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f1464f857678ec31609e10f0117fb7e)) {
        Py_XDECREF(cache_frame_4f1464f857678ec31609e10f0117fb7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f1464f857678ec31609e10f0117fb7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f1464f857678ec31609e10f0117fb7e = MAKE_FUNCTION_FRAME(codeobj_4f1464f857678ec31609e10f0117fb7e, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f1464f857678ec31609e10f0117fb7e->m_type_description == NULL);
    frame_4f1464f857678ec31609e10f0117fb7e = cache_frame_4f1464f857678ec31609e10f0117fb7e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f1464f857678ec31609e10f0117fb7e);
    assert(Py_REFCNT(frame_4f1464f857678ec31609e10f0117fb7e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_4f1464f857678ec31609e10f0117fb7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f1464f857678ec31609e10f0117fb7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f1464f857678ec31609e10f0117fb7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f1464f857678ec31609e10f0117fb7e,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_4f1464f857678ec31609e10f0117fb7e == cache_frame_4f1464f857678ec31609e10f0117fb7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f1464f857678ec31609e10f0117fb7e);
        cache_frame_4f1464f857678ec31609e10f0117fb7e = NULL;
    }

    assertFrameObject(frame_4f1464f857678ec31609e10f0117fb7e);

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


static PyObject *impl_odf$draw$$$function__28_Layer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9af21c13e50f62f1bb141af75e807254;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9af21c13e50f62f1bb141af75e807254 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9af21c13e50f62f1bb141af75e807254)) {
        Py_XDECREF(cache_frame_9af21c13e50f62f1bb141af75e807254);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9af21c13e50f62f1bb141af75e807254 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9af21c13e50f62f1bb141af75e807254 = MAKE_FUNCTION_FRAME(codeobj_9af21c13e50f62f1bb141af75e807254, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9af21c13e50f62f1bb141af75e807254->m_type_description == NULL);
    frame_9af21c13e50f62f1bb141af75e807254 = cache_frame_9af21c13e50f62f1bb141af75e807254;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9af21c13e50f62f1bb141af75e807254);
    assert(Py_REFCNT(frame_9af21c13e50f62f1bb141af75e807254) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_9af21c13e50f62f1bb141af75e807254, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9af21c13e50f62f1bb141af75e807254->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9af21c13e50f62f1bb141af75e807254, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9af21c13e50f62f1bb141af75e807254,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9af21c13e50f62f1bb141af75e807254 == cache_frame_9af21c13e50f62f1bb141af75e807254) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9af21c13e50f62f1bb141af75e807254);
        cache_frame_9af21c13e50f62f1bb141af75e807254 = NULL;
    }

    assertFrameObject(frame_9af21c13e50f62f1bb141af75e807254);

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


static PyObject *impl_odf$draw$$$function__29_LayerSet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_8f65cb8d5a00bc83ae9941e6ed651ad4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4)) {
        Py_XDECREF(cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4 = MAKE_FUNCTION_FRAME(codeobj_8f65cb8d5a00bc83ae9941e6ed651ad4, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4->m_type_description == NULL);
    frame_8f65cb8d5a00bc83ae9941e6ed651ad4 = cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f65cb8d5a00bc83ae9941e6ed651ad4);
    assert(Py_REFCNT(frame_8f65cb8d5a00bc83ae9941e6ed651ad4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        exception_tb = MAKE_TRACEBACK(frame_8f65cb8d5a00bc83ae9941e6ed651ad4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f65cb8d5a00bc83ae9941e6ed651ad4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f65cb8d5a00bc83ae9941e6ed651ad4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f65cb8d5a00bc83ae9941e6ed651ad4,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8f65cb8d5a00bc83ae9941e6ed651ad4 == cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4);
        cache_frame_8f65cb8d5a00bc83ae9941e6ed651ad4 = NULL;
    }

    assertFrameObject(frame_8f65cb8d5a00bc83ae9941e6ed651ad4);

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


static PyObject *impl_odf$draw$$$function__30_Line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cd5dde57cca099d68b8bcf7d4525ac17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cd5dde57cca099d68b8bcf7d4525ac17 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd5dde57cca099d68b8bcf7d4525ac17)) {
        Py_XDECREF(cache_frame_cd5dde57cca099d68b8bcf7d4525ac17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd5dde57cca099d68b8bcf7d4525ac17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd5dde57cca099d68b8bcf7d4525ac17 = MAKE_FUNCTION_FRAME(codeobj_cd5dde57cca099d68b8bcf7d4525ac17, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd5dde57cca099d68b8bcf7d4525ac17->m_type_description == NULL);
    frame_cd5dde57cca099d68b8bcf7d4525ac17 = cache_frame_cd5dde57cca099d68b8bcf7d4525ac17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cd5dde57cca099d68b8bcf7d4525ac17);
    assert(Py_REFCNT(frame_cd5dde57cca099d68b8bcf7d4525ac17) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_tuple_element_1 = mod_consts[51];
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
        exception_tb = MAKE_TRACEBACK(frame_cd5dde57cca099d68b8bcf7d4525ac17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd5dde57cca099d68b8bcf7d4525ac17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd5dde57cca099d68b8bcf7d4525ac17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd5dde57cca099d68b8bcf7d4525ac17,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cd5dde57cca099d68b8bcf7d4525ac17 == cache_frame_cd5dde57cca099d68b8bcf7d4525ac17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd5dde57cca099d68b8bcf7d4525ac17);
        cache_frame_cd5dde57cca099d68b8bcf7d4525ac17 = NULL;
    }

    assertFrameObject(frame_cd5dde57cca099d68b8bcf7d4525ac17);

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


static PyObject *impl_odf$draw$$$function__31_Marker(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_e9f0001045daeb0c034f9879364146ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e9f0001045daeb0c034f9879364146ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e9f0001045daeb0c034f9879364146ee)) {
        Py_XDECREF(cache_frame_e9f0001045daeb0c034f9879364146ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9f0001045daeb0c034f9879364146ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9f0001045daeb0c034f9879364146ee = MAKE_FUNCTION_FRAME(codeobj_e9f0001045daeb0c034f9879364146ee, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e9f0001045daeb0c034f9879364146ee->m_type_description == NULL);
    frame_e9f0001045daeb0c034f9879364146ee = cache_frame_e9f0001045daeb0c034f9879364146ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e9f0001045daeb0c034f9879364146ee);
    assert(Py_REFCNT(frame_e9f0001045daeb0c034f9879364146ee) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_tuple_element_1 = mod_consts[52];
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
        exception_tb = MAKE_TRACEBACK(frame_e9f0001045daeb0c034f9879364146ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9f0001045daeb0c034f9879364146ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9f0001045daeb0c034f9879364146ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9f0001045daeb0c034f9879364146ee,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_e9f0001045daeb0c034f9879364146ee == cache_frame_e9f0001045daeb0c034f9879364146ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e9f0001045daeb0c034f9879364146ee);
        cache_frame_e9f0001045daeb0c034f9879364146ee = NULL;
    }

    assertFrameObject(frame_e9f0001045daeb0c034f9879364146ee);

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


static PyObject *impl_odf$draw$$$function__32_Measure(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b9891c1ea49b98b522af190fe212bb3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b9891c1ea49b98b522af190fe212bb3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9891c1ea49b98b522af190fe212bb3b)) {
        Py_XDECREF(cache_frame_b9891c1ea49b98b522af190fe212bb3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9891c1ea49b98b522af190fe212bb3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9891c1ea49b98b522af190fe212bb3b = MAKE_FUNCTION_FRAME(codeobj_b9891c1ea49b98b522af190fe212bb3b, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9891c1ea49b98b522af190fe212bb3b->m_type_description == NULL);
    frame_b9891c1ea49b98b522af190fe212bb3b = cache_frame_b9891c1ea49b98b522af190fe212bb3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9891c1ea49b98b522af190fe212bb3b);
    assert(Py_REFCNT(frame_b9891c1ea49b98b522af190fe212bb3b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_tuple_element_1 = mod_consts[53];
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
        exception_tb = MAKE_TRACEBACK(frame_b9891c1ea49b98b522af190fe212bb3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9891c1ea49b98b522af190fe212bb3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9891c1ea49b98b522af190fe212bb3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9891c1ea49b98b522af190fe212bb3b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b9891c1ea49b98b522af190fe212bb3b == cache_frame_b9891c1ea49b98b522af190fe212bb3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9891c1ea49b98b522af190fe212bb3b);
        cache_frame_b9891c1ea49b98b522af190fe212bb3b = NULL;
    }

    assertFrameObject(frame_b9891c1ea49b98b522af190fe212bb3b);

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


static PyObject *impl_odf$draw$$$function__33_Object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5e4ad3ce263c907661fa6300947b94c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5e4ad3ce263c907661fa6300947b94c7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e4ad3ce263c907661fa6300947b94c7)) {
        Py_XDECREF(cache_frame_5e4ad3ce263c907661fa6300947b94c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e4ad3ce263c907661fa6300947b94c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e4ad3ce263c907661fa6300947b94c7 = MAKE_FUNCTION_FRAME(codeobj_5e4ad3ce263c907661fa6300947b94c7, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e4ad3ce263c907661fa6300947b94c7->m_type_description == NULL);
    frame_5e4ad3ce263c907661fa6300947b94c7 = cache_frame_5e4ad3ce263c907661fa6300947b94c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5e4ad3ce263c907661fa6300947b94c7);
    assert(Py_REFCNT(frame_5e4ad3ce263c907661fa6300947b94c7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_tuple_element_1 = mod_consts[54];
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
        exception_tb = MAKE_TRACEBACK(frame_5e4ad3ce263c907661fa6300947b94c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e4ad3ce263c907661fa6300947b94c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e4ad3ce263c907661fa6300947b94c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e4ad3ce263c907661fa6300947b94c7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5e4ad3ce263c907661fa6300947b94c7 == cache_frame_5e4ad3ce263c907661fa6300947b94c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e4ad3ce263c907661fa6300947b94c7);
        cache_frame_5e4ad3ce263c907661fa6300947b94c7 = NULL;
    }

    assertFrameObject(frame_5e4ad3ce263c907661fa6300947b94c7);

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


static PyObject *impl_odf$draw$$$function__34_ObjectOle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9d12ecb1414739398dc689be541c055a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9d12ecb1414739398dc689be541c055a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d12ecb1414739398dc689be541c055a)) {
        Py_XDECREF(cache_frame_9d12ecb1414739398dc689be541c055a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d12ecb1414739398dc689be541c055a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d12ecb1414739398dc689be541c055a = MAKE_FUNCTION_FRAME(codeobj_9d12ecb1414739398dc689be541c055a, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d12ecb1414739398dc689be541c055a->m_type_description == NULL);
    frame_9d12ecb1414739398dc689be541c055a = cache_frame_9d12ecb1414739398dc689be541c055a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d12ecb1414739398dc689be541c055a);
    assert(Py_REFCNT(frame_9d12ecb1414739398dc689be541c055a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_tuple_element_1 = mod_consts[55];
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
        exception_tb = MAKE_TRACEBACK(frame_9d12ecb1414739398dc689be541c055a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d12ecb1414739398dc689be541c055a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d12ecb1414739398dc689be541c055a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d12ecb1414739398dc689be541c055a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9d12ecb1414739398dc689be541c055a == cache_frame_9d12ecb1414739398dc689be541c055a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d12ecb1414739398dc689be541c055a);
        cache_frame_9d12ecb1414739398dc689be541c055a = NULL;
    }

    assertFrameObject(frame_9d12ecb1414739398dc689be541c055a);

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


static PyObject *impl_odf$draw$$$function__35_Opacity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cb16c7ed01d962880bbe8d1389e3ec0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b)) {
        Py_XDECREF(cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b = MAKE_FUNCTION_FRAME(codeobj_cb16c7ed01d962880bbe8d1389e3ec0b, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b->m_type_description == NULL);
    frame_cb16c7ed01d962880bbe8d1389e3ec0b = cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb16c7ed01d962880bbe8d1389e3ec0b);
    assert(Py_REFCNT(frame_cb16c7ed01d962880bbe8d1389e3ec0b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

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
        tmp_tuple_element_1 = mod_consts[56];
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
        exception_tb = MAKE_TRACEBACK(frame_cb16c7ed01d962880bbe8d1389e3ec0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb16c7ed01d962880bbe8d1389e3ec0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb16c7ed01d962880bbe8d1389e3ec0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb16c7ed01d962880bbe8d1389e3ec0b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cb16c7ed01d962880bbe8d1389e3ec0b == cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b);
        cache_frame_cb16c7ed01d962880bbe8d1389e3ec0b = NULL;
    }

    assertFrameObject(frame_cb16c7ed01d962880bbe8d1389e3ec0b);

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


static PyObject *impl_odf$draw$$$function__36_Page(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_29d9e734cd592b073032d2528f7919cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_29d9e734cd592b073032d2528f7919cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29d9e734cd592b073032d2528f7919cd)) {
        Py_XDECREF(cache_frame_29d9e734cd592b073032d2528f7919cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29d9e734cd592b073032d2528f7919cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29d9e734cd592b073032d2528f7919cd = MAKE_FUNCTION_FRAME(codeobj_29d9e734cd592b073032d2528f7919cd, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29d9e734cd592b073032d2528f7919cd->m_type_description == NULL);
    frame_29d9e734cd592b073032d2528f7919cd = cache_frame_29d9e734cd592b073032d2528f7919cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_29d9e734cd592b073032d2528f7919cd);
    assert(Py_REFCNT(frame_29d9e734cd592b073032d2528f7919cd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[57];
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


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_29d9e734cd592b073032d2528f7919cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29d9e734cd592b073032d2528f7919cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29d9e734cd592b073032d2528f7919cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29d9e734cd592b073032d2528f7919cd,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_29d9e734cd592b073032d2528f7919cd == cache_frame_29d9e734cd592b073032d2528f7919cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29d9e734cd592b073032d2528f7919cd);
        cache_frame_29d9e734cd592b073032d2528f7919cd = NULL;
    }

    assertFrameObject(frame_29d9e734cd592b073032d2528f7919cd);

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


static PyObject *impl_odf$draw$$$function__37_PageThumbnail(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7636415731c7ad7d0fe84eddb29dd5ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7636415731c7ad7d0fe84eddb29dd5ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7636415731c7ad7d0fe84eddb29dd5ef)) {
        Py_XDECREF(cache_frame_7636415731c7ad7d0fe84eddb29dd5ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7636415731c7ad7d0fe84eddb29dd5ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7636415731c7ad7d0fe84eddb29dd5ef = MAKE_FUNCTION_FRAME(codeobj_7636415731c7ad7d0fe84eddb29dd5ef, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7636415731c7ad7d0fe84eddb29dd5ef->m_type_description == NULL);
    frame_7636415731c7ad7d0fe84eddb29dd5ef = cache_frame_7636415731c7ad7d0fe84eddb29dd5ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7636415731c7ad7d0fe84eddb29dd5ef);
    assert(Py_REFCNT(frame_7636415731c7ad7d0fe84eddb29dd5ef) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[58];
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


            exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_7636415731c7ad7d0fe84eddb29dd5ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7636415731c7ad7d0fe84eddb29dd5ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7636415731c7ad7d0fe84eddb29dd5ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7636415731c7ad7d0fe84eddb29dd5ef,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7636415731c7ad7d0fe84eddb29dd5ef == cache_frame_7636415731c7ad7d0fe84eddb29dd5ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7636415731c7ad7d0fe84eddb29dd5ef);
        cache_frame_7636415731c7ad7d0fe84eddb29dd5ef = NULL;
    }

    assertFrameObject(frame_7636415731c7ad7d0fe84eddb29dd5ef);

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


static PyObject *impl_odf$draw$$$function__38_Param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d96798477ce8b2f52fca4c05bb7839eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d96798477ce8b2f52fca4c05bb7839eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d96798477ce8b2f52fca4c05bb7839eb)) {
        Py_XDECREF(cache_frame_d96798477ce8b2f52fca4c05bb7839eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d96798477ce8b2f52fca4c05bb7839eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d96798477ce8b2f52fca4c05bb7839eb = MAKE_FUNCTION_FRAME(codeobj_d96798477ce8b2f52fca4c05bb7839eb, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d96798477ce8b2f52fca4c05bb7839eb->m_type_description == NULL);
    frame_d96798477ce8b2f52fca4c05bb7839eb = cache_frame_d96798477ce8b2f52fca4c05bb7839eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d96798477ce8b2f52fca4c05bb7839eb);
    assert(Py_REFCNT(frame_d96798477ce8b2f52fca4c05bb7839eb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[59];
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
        exception_tb = MAKE_TRACEBACK(frame_d96798477ce8b2f52fca4c05bb7839eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d96798477ce8b2f52fca4c05bb7839eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d96798477ce8b2f52fca4c05bb7839eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d96798477ce8b2f52fca4c05bb7839eb,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d96798477ce8b2f52fca4c05bb7839eb == cache_frame_d96798477ce8b2f52fca4c05bb7839eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d96798477ce8b2f52fca4c05bb7839eb);
        cache_frame_d96798477ce8b2f52fca4c05bb7839eb = NULL;
    }

    assertFrameObject(frame_d96798477ce8b2f52fca4c05bb7839eb);

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


static PyObject *impl_odf$draw$$$function__39_Path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_0b409a5ad6e0b699ddb381116e9f956c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0b409a5ad6e0b699ddb381116e9f956c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b409a5ad6e0b699ddb381116e9f956c)) {
        Py_XDECREF(cache_frame_0b409a5ad6e0b699ddb381116e9f956c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b409a5ad6e0b699ddb381116e9f956c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b409a5ad6e0b699ddb381116e9f956c = MAKE_FUNCTION_FRAME(codeobj_0b409a5ad6e0b699ddb381116e9f956c, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b409a5ad6e0b699ddb381116e9f956c->m_type_description == NULL);
    frame_0b409a5ad6e0b699ddb381116e9f956c = cache_frame_0b409a5ad6e0b699ddb381116e9f956c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b409a5ad6e0b699ddb381116e9f956c);
    assert(Py_REFCNT(frame_0b409a5ad6e0b699ddb381116e9f956c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[60];
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


            exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_0b409a5ad6e0b699ddb381116e9f956c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b409a5ad6e0b699ddb381116e9f956c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b409a5ad6e0b699ddb381116e9f956c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b409a5ad6e0b699ddb381116e9f956c,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_0b409a5ad6e0b699ddb381116e9f956c == cache_frame_0b409a5ad6e0b699ddb381116e9f956c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b409a5ad6e0b699ddb381116e9f956c);
        cache_frame_0b409a5ad6e0b699ddb381116e9f956c = NULL;
    }

    assertFrameObject(frame_0b409a5ad6e0b699ddb381116e9f956c);

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


static PyObject *impl_odf$draw$$$function__40_Plugin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_361670c3a35aa5ed01b55fab6ba47913;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_361670c3a35aa5ed01b55fab6ba47913 = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[19];
        tmp_default_value_1 = mod_consts[20];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_361670c3a35aa5ed01b55fab6ba47913)) {
        Py_XDECREF(cache_frame_361670c3a35aa5ed01b55fab6ba47913);

#if _DEBUG_REFCOUNTS
        if (cache_frame_361670c3a35aa5ed01b55fab6ba47913 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_361670c3a35aa5ed01b55fab6ba47913 = MAKE_FUNCTION_FRAME(codeobj_361670c3a35aa5ed01b55fab6ba47913, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_361670c3a35aa5ed01b55fab6ba47913->m_type_description == NULL);
    frame_361670c3a35aa5ed01b55fab6ba47913 = cache_frame_361670c3a35aa5ed01b55fab6ba47913;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_361670c3a35aa5ed01b55fab6ba47913);
    assert(Py_REFCNT(frame_361670c3a35aa5ed01b55fab6ba47913) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[61];
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


            exception_lineno = 169;
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
        exception_tb = MAKE_TRACEBACK(frame_361670c3a35aa5ed01b55fab6ba47913, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_361670c3a35aa5ed01b55fab6ba47913->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_361670c3a35aa5ed01b55fab6ba47913, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_361670c3a35aa5ed01b55fab6ba47913,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_361670c3a35aa5ed01b55fab6ba47913 == cache_frame_361670c3a35aa5ed01b55fab6ba47913) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_361670c3a35aa5ed01b55fab6ba47913);
        cache_frame_361670c3a35aa5ed01b55fab6ba47913 = NULL;
    }

    assertFrameObject(frame_361670c3a35aa5ed01b55fab6ba47913);

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


static PyObject *impl_odf$draw$$$function__41_Polygon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9358477b80bbc850f5612ffff393c163;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9358477b80bbc850f5612ffff393c163 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9358477b80bbc850f5612ffff393c163)) {
        Py_XDECREF(cache_frame_9358477b80bbc850f5612ffff393c163);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9358477b80bbc850f5612ffff393c163 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9358477b80bbc850f5612ffff393c163 = MAKE_FUNCTION_FRAME(codeobj_9358477b80bbc850f5612ffff393c163, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9358477b80bbc850f5612ffff393c163->m_type_description == NULL);
    frame_9358477b80bbc850f5612ffff393c163 = cache_frame_9358477b80bbc850f5612ffff393c163;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9358477b80bbc850f5612ffff393c163);
    assert(Py_REFCNT(frame_9358477b80bbc850f5612ffff393c163) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[62];
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


            exception_lineno = 172;
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
        exception_tb = MAKE_TRACEBACK(frame_9358477b80bbc850f5612ffff393c163, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9358477b80bbc850f5612ffff393c163->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9358477b80bbc850f5612ffff393c163, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9358477b80bbc850f5612ffff393c163,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9358477b80bbc850f5612ffff393c163 == cache_frame_9358477b80bbc850f5612ffff393c163) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9358477b80bbc850f5612ffff393c163);
        cache_frame_9358477b80bbc850f5612ffff393c163 = NULL;
    }

    assertFrameObject(frame_9358477b80bbc850f5612ffff393c163);

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


static PyObject *impl_odf$draw$$$function__42_Polyline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a629a180d148ffadc4c02e83aa77a54a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a629a180d148ffadc4c02e83aa77a54a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a629a180d148ffadc4c02e83aa77a54a)) {
        Py_XDECREF(cache_frame_a629a180d148ffadc4c02e83aa77a54a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a629a180d148ffadc4c02e83aa77a54a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a629a180d148ffadc4c02e83aa77a54a = MAKE_FUNCTION_FRAME(codeobj_a629a180d148ffadc4c02e83aa77a54a, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a629a180d148ffadc4c02e83aa77a54a->m_type_description == NULL);
    frame_a629a180d148ffadc4c02e83aa77a54a = cache_frame_a629a180d148ffadc4c02e83aa77a54a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a629a180d148ffadc4c02e83aa77a54a);
    assert(Py_REFCNT(frame_a629a180d148ffadc4c02e83aa77a54a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[63];
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
        exception_tb = MAKE_TRACEBACK(frame_a629a180d148ffadc4c02e83aa77a54a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a629a180d148ffadc4c02e83aa77a54a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a629a180d148ffadc4c02e83aa77a54a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a629a180d148ffadc4c02e83aa77a54a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a629a180d148ffadc4c02e83aa77a54a == cache_frame_a629a180d148ffadc4c02e83aa77a54a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a629a180d148ffadc4c02e83aa77a54a);
        cache_frame_a629a180d148ffadc4c02e83aa77a54a = NULL;
    }

    assertFrameObject(frame_a629a180d148ffadc4c02e83aa77a54a);

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


static PyObject *impl_odf$draw$$$function__43_Rect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_95f8f2d8f4d8db66634e500c5b2af43c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_95f8f2d8f4d8db66634e500c5b2af43c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_95f8f2d8f4d8db66634e500c5b2af43c)) {
        Py_XDECREF(cache_frame_95f8f2d8f4d8db66634e500c5b2af43c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95f8f2d8f4d8db66634e500c5b2af43c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95f8f2d8f4d8db66634e500c5b2af43c = MAKE_FUNCTION_FRAME(codeobj_95f8f2d8f4d8db66634e500c5b2af43c, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_95f8f2d8f4d8db66634e500c5b2af43c->m_type_description == NULL);
    frame_95f8f2d8f4d8db66634e500c5b2af43c = cache_frame_95f8f2d8f4d8db66634e500c5b2af43c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_95f8f2d8f4d8db66634e500c5b2af43c);
    assert(Py_REFCNT(frame_95f8f2d8f4d8db66634e500c5b2af43c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[64];
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


            exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_95f8f2d8f4d8db66634e500c5b2af43c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95f8f2d8f4d8db66634e500c5b2af43c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95f8f2d8f4d8db66634e500c5b2af43c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95f8f2d8f4d8db66634e500c5b2af43c,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_95f8f2d8f4d8db66634e500c5b2af43c == cache_frame_95f8f2d8f4d8db66634e500c5b2af43c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_95f8f2d8f4d8db66634e500c5b2af43c);
        cache_frame_95f8f2d8f4d8db66634e500c5b2af43c = NULL;
    }

    assertFrameObject(frame_95f8f2d8f4d8db66634e500c5b2af43c);

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


static PyObject *impl_odf$draw$$$function__44_RegularPolygon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_2d466dcd516cf02936b9080eb15e2592;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2d466dcd516cf02936b9080eb15e2592 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d466dcd516cf02936b9080eb15e2592)) {
        Py_XDECREF(cache_frame_2d466dcd516cf02936b9080eb15e2592);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d466dcd516cf02936b9080eb15e2592 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d466dcd516cf02936b9080eb15e2592 = MAKE_FUNCTION_FRAME(codeobj_2d466dcd516cf02936b9080eb15e2592, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d466dcd516cf02936b9080eb15e2592->m_type_description == NULL);
    frame_2d466dcd516cf02936b9080eb15e2592 = cache_frame_2d466dcd516cf02936b9080eb15e2592;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d466dcd516cf02936b9080eb15e2592);
    assert(Py_REFCNT(frame_2d466dcd516cf02936b9080eb15e2592) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[65];
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


            exception_lineno = 181;
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
        exception_tb = MAKE_TRACEBACK(frame_2d466dcd516cf02936b9080eb15e2592, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d466dcd516cf02936b9080eb15e2592->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d466dcd516cf02936b9080eb15e2592, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d466dcd516cf02936b9080eb15e2592,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_2d466dcd516cf02936b9080eb15e2592 == cache_frame_2d466dcd516cf02936b9080eb15e2592) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d466dcd516cf02936b9080eb15e2592);
        cache_frame_2d466dcd516cf02936b9080eb15e2592 = NULL;
    }

    assertFrameObject(frame_2d466dcd516cf02936b9080eb15e2592);

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


static PyObject *impl_odf$draw$$$function__45_StrokeDash(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_de05ef8e286531af4862beeff9b821b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_de05ef8e286531af4862beeff9b821b3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de05ef8e286531af4862beeff9b821b3)) {
        Py_XDECREF(cache_frame_de05ef8e286531af4862beeff9b821b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de05ef8e286531af4862beeff9b821b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de05ef8e286531af4862beeff9b821b3 = MAKE_FUNCTION_FRAME(codeobj_de05ef8e286531af4862beeff9b821b3, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de05ef8e286531af4862beeff9b821b3->m_type_description == NULL);
    frame_de05ef8e286531af4862beeff9b821b3 = cache_frame_de05ef8e286531af4862beeff9b821b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de05ef8e286531af4862beeff9b821b3);
    assert(Py_REFCNT(frame_de05ef8e286531af4862beeff9b821b3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[66];
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


            exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_de05ef8e286531af4862beeff9b821b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de05ef8e286531af4862beeff9b821b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de05ef8e286531af4862beeff9b821b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de05ef8e286531af4862beeff9b821b3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_de05ef8e286531af4862beeff9b821b3 == cache_frame_de05ef8e286531af4862beeff9b821b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de05ef8e286531af4862beeff9b821b3);
        cache_frame_de05ef8e286531af4862beeff9b821b3 = NULL;
    }

    assertFrameObject(frame_de05ef8e286531af4862beeff9b821b3);

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


static PyObject *impl_odf$draw$$$function__46_TextBox(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_1c84665e7c731c12303272098f98fdcf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1c84665e7c731c12303272098f98fdcf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c84665e7c731c12303272098f98fdcf)) {
        Py_XDECREF(cache_frame_1c84665e7c731c12303272098f98fdcf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c84665e7c731c12303272098f98fdcf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c84665e7c731c12303272098f98fdcf = MAKE_FUNCTION_FRAME(codeobj_1c84665e7c731c12303272098f98fdcf, module_odf$draw, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c84665e7c731c12303272098f98fdcf->m_type_description == NULL);
    frame_1c84665e7c731c12303272098f98fdcf = cache_frame_1c84665e7c731c12303272098f98fdcf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c84665e7c731c12303272098f98fdcf);
    assert(Py_REFCNT(frame_1c84665e7c731c12303272098f98fdcf) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[67];
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


            exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_1c84665e7c731c12303272098f98fdcf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c84665e7c731c12303272098f98fdcf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c84665e7c731c12303272098f98fdcf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c84665e7c731c12303272098f98fdcf,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_1c84665e7c731c12303272098f98fdcf == cache_frame_1c84665e7c731c12303272098f98fdcf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c84665e7c731c12303272098f98fdcf);
        cache_frame_1c84665e7c731c12303272098f98fdcf = NULL;
    }

    assertFrameObject(frame_1c84665e7c731c12303272098f98fdcf);

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



static PyObject *MAKE_FUNCTION_odf$draw$$$function__10_Connector() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__10_Connector,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92db24abf89e1f8450547392c7f8fc00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__11_ContourPath() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__11_ContourPath,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_930ef219785471abbfe195e770548f28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__12_ContourPolygon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__12_ContourPolygon,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b745254f2e39cb01283c14741c8b42e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__13_Control() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__13_Control,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12f8ce0e66c00ec4a1085ca8e71ac4d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__14_CustomShape() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__14_CustomShape,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_186277be97f40d374087ae7a59e05103,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__15_Ellipse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__15_Ellipse,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de5027a5619cf95e0834a5e1e5d2031d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__16_EnhancedGeometry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__16_EnhancedGeometry,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81d0cca2beeb5ac5edc50842ae6699e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__17_Equation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__17_Equation,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8fe5a344c3baca733dd0261e59132cfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__18_FillImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__18_FillImage,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4998cf09d9d604c4917036aa56ed7147,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__19_FloatingFrame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__19_FloatingFrame,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af8a2d3bb7a170f3c797143c2a0b4ced,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__1_StyleRefElement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__1_StyleRefElement,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_258a7d09021cae7e7b25f33424839dcd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__20_Frame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__20_Frame,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33b55ce5a1f77b987dcada82349ba288,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__21_G() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__21_G,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_75a99b02363668bb5363e1d610a5832f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__22_GluePoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__22_GluePoint,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc051c7a7f02453d2394603a3b69f30a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__23_Gradient() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__23_Gradient,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_31b598cd2781298c26ddc4bbb1171968,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__24_Handle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__24_Handle,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec12f63e59c27702c6e6c797cfb35e91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__25_Hatch() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__25_Hatch,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff8bbb6dcb7da2fb98a9fa468f933962,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__26_Image() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__26_Image,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_763eec498106e52ee270dda9d8049a2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__27_ImageMap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__27_ImageMap,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f1464f857678ec31609e10f0117fb7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__28_Layer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__28_Layer,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9af21c13e50f62f1bb141af75e807254,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__29_LayerSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__29_LayerSet,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f65cb8d5a00bc83ae9941e6ed651ad4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__2_DrawElement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__2_DrawElement,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ff79381c284b0b318c46c6fdebc1f7c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__30_Line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__30_Line,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd5dde57cca099d68b8bcf7d4525ac17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__31_Marker() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__31_Marker,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9f0001045daeb0c034f9879364146ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__32_Measure() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__32_Measure,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9891c1ea49b98b522af190fe212bb3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__33_Object() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__33_Object,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e4ad3ce263c907661fa6300947b94c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__34_ObjectOle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__34_ObjectOle,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d12ecb1414739398dc689be541c055a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__35_Opacity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__35_Opacity,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb16c7ed01d962880bbe8d1389e3ec0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__36_Page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__36_Page,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29d9e734cd592b073032d2528f7919cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__37_PageThumbnail() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__37_PageThumbnail,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7636415731c7ad7d0fe84eddb29dd5ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__38_Param() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__38_Param,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d96798477ce8b2f52fca4c05bb7839eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__39_Path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__39_Path,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b409a5ad6e0b699ddb381116e9f956c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__3_A() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__3_A,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d5d46e2b2d71e007df556d0b22465f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__40_Plugin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__40_Plugin,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_361670c3a35aa5ed01b55fab6ba47913,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__41_Polygon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__41_Polygon,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9358477b80bbc850f5612ffff393c163,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__42_Polyline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__42_Polyline,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a629a180d148ffadc4c02e83aa77a54a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__43_Rect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__43_Rect,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_95f8f2d8f4d8db66634e500c5b2af43c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__44_RegularPolygon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__44_RegularPolygon,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d466dcd516cf02936b9080eb15e2592,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__45_StrokeDash() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__45_StrokeDash,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de05ef8e286531af4862beeff9b821b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__46_TextBox() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__46_TextBox,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c84665e7c731c12303272098f98fdcf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__4_Applet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__4_Applet,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d38c73e6b6e871192f6a9939f17a967,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__5_AreaCircle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__5_AreaCircle,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5742ab0a8d3ece530cb7a014661cde3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__6_AreaPolygon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__6_AreaPolygon,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_044eee3da938a7d27d5e99a6923b33c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__7_AreaRectangle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__7_AreaRectangle,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f956ce67c92fe82e1ec7f90b4471d173,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__8_Caption() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__8_Caption,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a1d308d7a20d9503bd6ab069a0cb9cd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$draw$$$function__9_Circle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$draw$$$function__9_Circle,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_79587045c920c9b9fa18ed43bea23545,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$draw,
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

function_impl_code functable_odf$draw[] = {
    impl_odf$draw$$$function__1_StyleRefElement,
    impl_odf$draw$$$function__2_DrawElement,
    impl_odf$draw$$$function__3_A,
    impl_odf$draw$$$function__4_Applet,
    impl_odf$draw$$$function__5_AreaCircle,
    impl_odf$draw$$$function__6_AreaPolygon,
    impl_odf$draw$$$function__7_AreaRectangle,
    impl_odf$draw$$$function__8_Caption,
    impl_odf$draw$$$function__9_Circle,
    impl_odf$draw$$$function__10_Connector,
    impl_odf$draw$$$function__11_ContourPath,
    impl_odf$draw$$$function__12_ContourPolygon,
    impl_odf$draw$$$function__13_Control,
    impl_odf$draw$$$function__14_CustomShape,
    impl_odf$draw$$$function__15_Ellipse,
    impl_odf$draw$$$function__16_EnhancedGeometry,
    impl_odf$draw$$$function__17_Equation,
    impl_odf$draw$$$function__18_FillImage,
    impl_odf$draw$$$function__19_FloatingFrame,
    impl_odf$draw$$$function__20_Frame,
    impl_odf$draw$$$function__21_G,
    impl_odf$draw$$$function__22_GluePoint,
    impl_odf$draw$$$function__23_Gradient,
    impl_odf$draw$$$function__24_Handle,
    impl_odf$draw$$$function__25_Hatch,
    impl_odf$draw$$$function__26_Image,
    impl_odf$draw$$$function__27_ImageMap,
    impl_odf$draw$$$function__28_Layer,
    impl_odf$draw$$$function__29_LayerSet,
    impl_odf$draw$$$function__30_Line,
    impl_odf$draw$$$function__31_Marker,
    impl_odf$draw$$$function__32_Measure,
    impl_odf$draw$$$function__33_Object,
    impl_odf$draw$$$function__34_ObjectOle,
    impl_odf$draw$$$function__35_Opacity,
    impl_odf$draw$$$function__36_Page,
    impl_odf$draw$$$function__37_PageThumbnail,
    impl_odf$draw$$$function__38_Param,
    impl_odf$draw$$$function__39_Path,
    impl_odf$draw$$$function__40_Plugin,
    impl_odf$draw$$$function__41_Polygon,
    impl_odf$draw$$$function__42_Polyline,
    impl_odf$draw$$$function__43_Rect,
    impl_odf$draw$$$function__44_RegularPolygon,
    impl_odf$draw$$$function__45_StrokeDash,
    impl_odf$draw$$$function__46_TextBox,
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

    function_impl_code *current = functable_odf$draw;
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

    if (offset > sizeof(functable_odf$draw) || offset < 0) {
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
        functable_odf$draw[offset],
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
        module_odf$draw,
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
PyObject *modulecode_odf$draw(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("odf.draw");

    // Store the module for future use.
    module_odf$draw = module;

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
        PRINT_STRING("odf.draw: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.draw: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.draw: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initodf$draw\n");

    moduledict_odf$draw = MODULE_DICT(module_odf$draw);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_odf$draw,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_odf$draw,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[134]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_odf$draw,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_odf$draw,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_odf$draw,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_odf$draw);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_odf$draw);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_3caa91a46ce18613bec8e1f85bd53e20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_2);
    }
    frame_3caa91a46ce18613bec8e1f85bd53e20 = MAKE_MODULE_FRAME(codeobj_3caa91a46ce18613bec8e1f85bd53e20, module_odf$draw);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3caa91a46ce18613bec8e1f85bd53e20);
    assert(Py_REFCNT(frame_3caa91a46ce18613bec8e1f85bd53e20) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[71], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[72], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[75];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_odf$draw;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[9];
        frame_3caa91a46ce18613bec8e1f85bd53e20->m_frame.f_lineno = 21;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[60]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[77]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[60]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_3caa91a46ce18613bec8e1f85bd53e20->m_frame.f_lineno = 22;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_3caa91a46ce18613bec8e1f85bd53e20->m_frame.f_lineno = 22;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[79];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_odf$draw;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[80];
        tmp_level_value_2 = mod_consts[9];
        frame_3caa91a46ce18613bec8e1f85bd53e20->m_frame.f_lineno = 23;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_odf$draw,
                mod_consts[4],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[4]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_odf$draw,
                mod_consts[1],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[1]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_odf$draw,
                mod_consts[7],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[7]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[81];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_odf$draw;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[82];
        tmp_level_value_3 = mod_consts[9];
        frame_3caa91a46ce18613bec8e1f85bd53e20->m_frame.f_lineno = 24;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_odf$draw,
                mod_consts[12],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_10);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3caa91a46ce18613bec8e1f85bd53e20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3caa91a46ce18613bec8e1f85bd53e20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3caa91a46ce18613bec8e1f85bd53e20, exception_lineno);
    }



    assertFrameObject(frame_3caa91a46ce18613bec8e1f85bd53e20);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[83];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_11 = MAKE_FUNCTION_odf$draw$$$function__1_StyleRefElement(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[84];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_12 = MAKE_FUNCTION_odf$draw$$$function__2_DrawElement(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_odf$draw$$$function__3_A();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_odf$draw$$$function__4_Applet();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_odf$draw$$$function__5_AreaCircle();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_odf$draw$$$function__6_AreaPolygon();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_odf$draw$$$function__7_AreaRectangle();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_odf$draw$$$function__8_Caption();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_odf$draw$$$function__9_Circle();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_odf$draw$$$function__10_Connector();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_odf$draw$$$function__11_ContourPath();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_odf$draw$$$function__12_ContourPolygon();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_odf$draw$$$function__13_Control();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_odf$draw$$$function__14_CustomShape();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_odf$draw$$$function__15_Ellipse();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_odf$draw$$$function__16_EnhancedGeometry();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_odf$draw$$$function__17_Equation();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_odf$draw$$$function__18_FillImage();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_odf$draw$$$function__19_FloatingFrame();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_odf$draw$$$function__20_Frame();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_odf$draw$$$function__21_G();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_odf$draw$$$function__22_GluePoint();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_odf$draw$$$function__23_Gradient();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_odf$draw$$$function__24_Handle();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_odf$draw$$$function__25_Hatch();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_odf$draw$$$function__26_Image();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_odf$draw$$$function__27_ImageMap();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_odf$draw$$$function__28_Layer();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_odf$draw$$$function__29_LayerSet();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_odf$draw$$$function__30_Line();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_odf$draw$$$function__31_Marker();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_odf$draw$$$function__32_Measure();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_odf$draw$$$function__33_Object();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_odf$draw$$$function__34_ObjectOle();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_odf$draw$$$function__35_Opacity();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_odf$draw$$$function__36_Page();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_odf$draw$$$function__37_PageThumbnail();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_odf$draw$$$function__38_Param();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_odf$draw$$$function__39_Path();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_odf$draw$$$function__40_Plugin();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_odf$draw$$$function__41_Polygon();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_odf$draw$$$function__42_Polyline();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_odf$draw$$$function__43_Rect();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_odf$draw$$$function__44_RegularPolygon();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_odf$draw$$$function__45_StrokeDash();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_odf$draw$$$function__46_TextBox();

        UPDATE_STRING_DICT1(moduledict_odf$draw, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_56);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("odf.draw", false);

    Py_INCREF(module_odf$draw);
    return module_odf$draw;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$draw, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("odf$draw", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
