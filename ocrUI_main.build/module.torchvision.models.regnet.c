/* Generated code for Python module 'torchvision.models.regnet'
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

/* The "module_torchvision$models$regnet" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$models$regnet;
PyDictObject *moduledict_torchvision$models$regnet;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[261];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[261];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.models.regnet"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 261; i++) {
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
void checkModuleConstants_torchvision$models$regnet(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 261; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8ca3586ae310834c3cc51b960bc8565b;
static PyCodeObject *codeobj_89ea1dfbcacebd38650183c914a4788f;
static PyCodeObject *codeobj_933dc676c02c4199ea2f8f3add5ca6aa;
static PyCodeObject *codeobj_daf8d608be7823af4d4780989c433da8;
static PyCodeObject *codeobj_4b9d0e5758c7fd126a28839cfac5b1a0;
static PyCodeObject *codeobj_ef08806edfae42e30b1ff66a95a6eaac;
static PyCodeObject *codeobj_737653abf8e6cb9537045d1c7be05549;
static PyCodeObject *codeobj_88e3b1bb7b8bc458fdfd7f3174549dcd;
static PyCodeObject *codeobj_9a0d405c27f2082abd29fd21aa81256e;
static PyCodeObject *codeobj_393f238f45b3a95d5f291b60ec73b79d;
static PyCodeObject *codeobj_18c0694ac39853437c0d4a52285f248b;
static PyCodeObject *codeobj_71444a1b2f73acffa622c929403b589c;
static PyCodeObject *codeobj_13a34c086cbeb97d0c5d1588574eb34e;
static PyCodeObject *codeobj_a832e466e434474816b9b72e2f47f39f;
static PyCodeObject *codeobj_9894675c4060138b6552489f693624cc;
static PyCodeObject *codeobj_047fb1b8ed4f1b9906abbf7bd08cc9f1;
static PyCodeObject *codeobj_fd355d3b3b893972d0a4ccf0dff22cac;
static PyCodeObject *codeobj_83b5ec65c2d8fa42f2ee2598aed20988;
static PyCodeObject *codeobj_d804e0c4398d4991c4122d1bb30a5ecf;
static PyCodeObject *codeobj_1bb704e667686890b55422254685d241;
static PyCodeObject *codeobj_85034b37c3345cc576ba093c6facbbc2;
static PyCodeObject *codeobj_057f35011dae2bc68bd0cb0a1a7d4aa2;
static PyCodeObject *codeobj_40ae1a3b4378dcd723b2d38706aa2a15;
static PyCodeObject *codeobj_56e90e86304896f829e9bf993c9a541c;
static PyCodeObject *codeobj_a2fcd1c4b10dc748a541b20c53327f84;
static PyCodeObject *codeobj_aea72ef4726b8cb2d9cff565228778bf;
static PyCodeObject *codeobj_c3e9c05bfa94432c3337bd7cc93bcd1a;
static PyCodeObject *codeobj_94e9da0ddad59357fa3768fef1d7c12f;
static PyCodeObject *codeobj_c2a8e3d156411be5dd2868aa055b6b02;
static PyCodeObject *codeobj_f73ebf8c5c87891bb533a86506959d7d;
static PyCodeObject *codeobj_f35f3599c10974bd0976386593e70f4b;
static PyCodeObject *codeobj_4543672a6f308be83f2af5dc0ace2662;
static PyCodeObject *codeobj_e24d86b510b78bf52d59ae473aea38e3;
static PyCodeObject *codeobj_e744cb27df934ae2a901c7d5e17f21ed;
static PyCodeObject *codeobj_9747e5f58b20ca2010d43612c33d75a9;
static PyCodeObject *codeobj_31622e7d7c9a7ccf1adb21bf7ee4ea12;
static PyCodeObject *codeobj_22364210bf382bb334119dd59d08118b;
static PyCodeObject *codeobj_4f65ba3ba68e9c10f3a215aca614a46d;
static PyCodeObject *codeobj_f45b653811a541b055d0886f5565ecf6;
static PyCodeObject *codeobj_abebfbbb1412713b584c9407f18699da;
static PyCodeObject *codeobj_259acd052c1ede10457b7ba5c8bd6c7e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[238]); CHECK_OBJECT(module_filename_obj);
    codeobj_8ca3586ae310834c3cc51b960bc8565b = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[240], NULL, 1, 0, 0);
    codeobj_89ea1dfbcacebd38650183c914a4788f = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[241], NULL, 1, 0, 0);
    codeobj_933dc676c02c4199ea2f8f3add5ca6aa = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[242], NULL, 1, 0, 0);
    codeobj_daf8d608be7823af4d4780989c433da8 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[243], NULL, 1, 0, 0);
    codeobj_4b9d0e5758c7fd126a28839cfac5b1a0 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[244], NULL, 1, 0, 0);
    codeobj_ef08806edfae42e30b1ff66a95a6eaac = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[245], NULL, 1, 0, 0);
    codeobj_737653abf8e6cb9537045d1c7be05549 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[246], NULL, 1, 0, 0);
    codeobj_88e3b1bb7b8bc458fdfd7f3174549dcd = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[247], mod_consts[247], NULL, NULL, 0, 0, 0);
    codeobj_9a0d405c27f2082abd29fd21aa81256e = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[248], NULL, 0, 0, 0);
    codeobj_393f238f45b3a95d5f291b60ec73b79d = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[248], NULL, 0, 0, 0);
    codeobj_18c0694ac39853437c0d4a52285f248b = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[248], NULL, 0, 0, 0);
    codeobj_71444a1b2f73acffa622c929403b589c = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[248], NULL, 0, 0, 0);
    codeobj_13a34c086cbeb97d0c5d1588574eb34e = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[248], NULL, 0, 0, 0);
    codeobj_a832e466e434474816b9b72e2f47f39f = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[248], NULL, 0, 0, 0);
    codeobj_9894675c4060138b6552489f693624cc = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[249], mod_consts[248], 8, 0, 0);
    codeobj_047fb1b8ed4f1b9906abbf7bd08cc9f1 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[250], NULL, 7, 0, 0);
    codeobj_fd355d3b3b893972d0a4ccf0dff22cac = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[251], mod_consts[248], 5, 0, 0);
    codeobj_83b5ec65c2d8fa42f2ee2598aed20988 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[252], mod_consts[248], 12, 0, 0);
    codeobj_d804e0c4398d4991c4122d1bb30a5ecf = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[253], mod_consts[248], 9, 0, 0);
    codeobj_1bb704e667686890b55422254685d241 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[254], mod_consts[248], 9, 0, 0);
    codeobj_85034b37c3345cc576ba093c6facbbc2 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[255], NULL, 3, 0, 0);
    codeobj_057f35011dae2bc68bd0cb0a1a7d4aa2 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[256], NULL, 1, 0, 0);
    codeobj_40ae1a3b4378dcd723b2d38706aa2a15 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[257], NULL, 4, 0, 0);
    codeobj_56e90e86304896f829e9bf993c9a541c = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[258], NULL, 2, 0, 0);
    codeobj_a2fcd1c4b10dc748a541b20c53327f84 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[258], NULL, 2, 0, 0);
    codeobj_aea72ef4726b8cb2d9cff565228778bf = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[259], NULL, 8, 0, 0);
    codeobj_c3e9c05bfa94432c3337bd7cc93bcd1a = MAKE_CODE_OBJECT(module_filename_obj, 582, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[260], NULL, 2, 0, 0);
    codeobj_94e9da0ddad59357fa3768fef1d7c12f = MAKE_CODE_OBJECT(module_filename_obj, 543, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[260], NULL, 2, 0, 0);
    codeobj_c2a8e3d156411be5dd2868aa055b6b02 = MAKE_CODE_OBJECT(module_filename_obj, 595, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[260], NULL, 2, 0, 0);
    codeobj_f73ebf8c5c87891bb533a86506959d7d = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[260], NULL, 2, 0, 0);
    codeobj_f35f3599c10974bd0976386593e70f4b = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[260], NULL, 2, 0, 0);
    codeobj_4543672a6f308be83f2af5dc0ace2662 = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[260], NULL, 2, 0, 0);
    codeobj_e24d86b510b78bf52d59ae473aea38e3 = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[260], NULL, 2, 0, 0);
    codeobj_e744cb27df934ae2a901c7d5e17f21ed = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[260], NULL, 2, 0, 0);
    codeobj_9747e5f58b20ca2010d43612c33d75a9 = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[260], NULL, 2, 0, 0);
    codeobj_31622e7d7c9a7ccf1adb21bf7ee4ea12 = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[260], NULL, 2, 0, 0);
    codeobj_22364210bf382bb334119dd59d08118b = MAKE_CODE_OBJECT(module_filename_obj, 490, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[260], NULL, 2, 0, 0);
    codeobj_4f65ba3ba68e9c10f3a215aca614a46d = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[260], NULL, 2, 0, 0);
    codeobj_f45b653811a541b055d0886f5565ecf6 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[260], NULL, 2, 0, 0);
    codeobj_abebfbbb1412713b584c9407f18699da = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[260], NULL, 2, 0, 0);
    codeobj_259acd052c1ede10457b7ba5c8bd6c7e = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[260], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__10___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__11_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__12__regnet(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__13_regnet_y_400mf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__14_regnet_y_800mf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__15_regnet_y_1_6gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__16_regnet_y_3_2gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__17_regnet_y_8gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__18_regnet_y_16gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__19_regnet_y_32gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__1___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__20_regnet_y_128gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__21_regnet_x_400mf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__22_regnet_x_800mf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__23_regnet_x_1_6gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__24_regnet_x_3_2gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__25_regnet_x_8gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__26_regnet_x_16gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__27_regnet_x_32gf(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__2___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__4_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__6___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__7_from_init_params(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__8__get_expanded_params();


static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__9__adjust_widths_groups_compatibilty(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$models$regnet$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width_in = python_pars[1];
    PyObject *par_width_out = python_pars[2];
    PyObject *par_norm_layer = python_pars[3];
    PyObject *par_activation_layer = python_pars[4];
    struct Nuitka_FrameObject *frame_fd355d3b3b893972d0a4ccf0dff22cac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd355d3b3b893972d0a4ccf0dff22cac = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd355d3b3b893972d0a4ccf0dff22cac)) {
        Py_XDECREF(cache_frame_fd355d3b3b893972d0a4ccf0dff22cac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd355d3b3b893972d0a4ccf0dff22cac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd355d3b3b893972d0a4ccf0dff22cac = MAKE_FUNCTION_FRAME(codeobj_fd355d3b3b893972d0a4ccf0dff22cac, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd355d3b3b893972d0a4ccf0dff22cac->m_type_description == NULL);
    frame_fd355d3b3b893972d0a4ccf0dff22cac = cache_frame_fd355d3b3b893972d0a4ccf0dff22cac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd355d3b3b893972d0a4ccf0dff22cac);
    assert(Py_REFCNT(frame_fd355d3b3b893972d0a4ccf0dff22cac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_torchvision$models$regnet, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width_in);
        tmp_kw_call_arg_value_0_1 = par_width_in;
        CHECK_OBJECT(par_width_out);
        tmp_kw_call_arg_value_1_1 = par_width_out;
        tmp_kw_call_dict_value_0_1 = mod_consts[2];
        tmp_kw_call_dict_value_1_1 = mod_consts[3];
        CHECK_OBJECT(par_norm_layer);
        tmp_kw_call_dict_value_2_1 = par_norm_layer;
        CHECK_OBJECT(par_activation_layer);
        tmp_kw_call_dict_value_3_1 = par_activation_layer;
        frame_fd355d3b3b893972d0a4ccf0dff22cac->m_frame.f_lineno = 68;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[4]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd355d3b3b893972d0a4ccf0dff22cac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd355d3b3b893972d0a4ccf0dff22cac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd355d3b3b893972d0a4ccf0dff22cac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd355d3b3b893972d0a4ccf0dff22cac,
        type_description_1,
        par_self,
        par_width_in,
        par_width_out,
        par_norm_layer,
        par_activation_layer,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fd355d3b3b893972d0a4ccf0dff22cac == cache_frame_fd355d3b3b893972d0a4ccf0dff22cac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd355d3b3b893972d0a4ccf0dff22cac);
        cache_frame_fd355d3b3b893972d0a4ccf0dff22cac = NULL;
    }

    assertFrameObject(frame_fd355d3b3b893972d0a4ccf0dff22cac);

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
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width_in = python_pars[1];
    PyObject *par_width_out = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_norm_layer = python_pars[4];
    PyObject *par_activation_layer = python_pars[5];
    PyObject *par_group_width = python_pars[6];
    PyObject *par_bottleneck_multiplier = python_pars[7];
    PyObject *par_se_ratio = python_pars[8];
    PyObject *var_layers = NULL;
    PyObject *var_w_b = NULL;
    PyObject *var_g = NULL;
    PyObject *var_width_se_out = NULL;
    struct Nuitka_FrameObject *frame_d804e0c4398d4991c4122d1bb30a5ecf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d804e0c4398d4991c4122d1bb30a5ecf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d804e0c4398d4991c4122d1bb30a5ecf)) {
        Py_XDECREF(cache_frame_d804e0c4398d4991c4122d1bb30a5ecf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d804e0c4398d4991c4122d1bb30a5ecf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d804e0c4398d4991c4122d1bb30a5ecf = MAKE_FUNCTION_FRAME(codeobj_d804e0c4398d4991c4122d1bb30a5ecf, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d804e0c4398d4991c4122d1bb30a5ecf->m_type_description == NULL);
    frame_d804e0c4398d4991c4122d1bb30a5ecf = cache_frame_d804e0c4398d4991c4122d1bb30a5ecf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d804e0c4398d4991c4122d1bb30a5ecf);
    assert(Py_REFCNT(frame_d804e0c4398d4991c4122d1bb30a5ecf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 87;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_layers == NULL);
        var_layers = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_width_out);
        tmp_mult_expr_left_1 = par_width_out;
        CHECK_OBJECT(par_bottleneck_multiplier);
        tmp_mult_expr_right_1 = par_bottleneck_multiplier;
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 88;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_w_b == NULL);
        var_w_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        CHECK_OBJECT(var_w_b);
        tmp_floordiv_expr_left_1 = var_w_b;
        CHECK_OBJECT(par_group_width);
        tmp_floordiv_expr_right_1 = par_group_width;
        tmp_assign_source_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width_in);
        tmp_kw_call_arg_value_0_1 = par_width_in;
        CHECK_OBJECT(var_w_b);
        tmp_kw_call_arg_value_1_1 = var_w_b;
        tmp_kw_call_dict_value_0_1 = mod_consts[8];
        tmp_kw_call_dict_value_1_1 = mod_consts[8];
        CHECK_OBJECT(par_norm_layer);
        tmp_kw_call_dict_value_2_1 = par_norm_layer;
        CHECK_OBJECT(par_activation_layer);
        tmp_kw_call_dict_value_3_1 = par_activation_layer;
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 91;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[4]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_layers);
        tmp_ass_subscribed_1 = var_layers;
        tmp_ass_subscript_1 = mod_consts[9];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_w_b);
        tmp_kw_call_arg_value_0_2 = var_w_b;
        CHECK_OBJECT(var_w_b);
        tmp_kw_call_arg_value_1_2 = var_w_b;
        tmp_kw_call_dict_value_0_2 = mod_consts[2];
        CHECK_OBJECT(par_stride);
        tmp_kw_call_dict_value_1_2 = par_stride;
        CHECK_OBJECT(var_g);
        tmp_kw_call_dict_value_2_2 = var_g;
        CHECK_OBJECT(par_norm_layer);
        tmp_kw_call_dict_value_3_2 = par_norm_layer;
        CHECK_OBJECT(par_activation_layer);
        tmp_kw_call_dict_value_4_1 = par_activation_layer;
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_1};
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[10]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_layers);
        tmp_ass_subscribed_2 = var_layers;
        tmp_ass_subscript_2 = mod_consts[11];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_se_ratio);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_se_ratio);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooc";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_5 != NULL);
        CHECK_OBJECT(par_se_ratio);
        tmp_mult_expr_left_2 = par_se_ratio;
        CHECK_OBJECT(par_width_in);
        tmp_mult_expr_right_2 = par_width_in;
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 101;
        tmp_int_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_width_se_out == NULL);
        var_width_se_out = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_w_b);
        tmp_kw_call_value_0_1 = var_w_b;
        CHECK_OBJECT(var_width_se_out);
        tmp_kw_call_value_1_1 = var_width_se_out;
        CHECK_OBJECT(par_activation_layer);
        tmp_kw_call_value_2_1 = par_activation_layer;
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 102;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[13]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_layers);
        tmp_ass_subscribed_3 = var_layers;
        tmp_ass_subscript_3 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_3;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_w_b);
        tmp_kw_call_arg_value_0_3 = var_w_b;
        CHECK_OBJECT(par_width_out);
        tmp_kw_call_arg_value_1_3 = par_width_out;
        tmp_kw_call_dict_value_0_3 = mod_consts[8];
        tmp_kw_call_dict_value_1_3 = mod_consts[8];
        CHECK_OBJECT(par_norm_layer);
        tmp_kw_call_dict_value_2_3 = par_norm_layer;
        tmp_kw_call_dict_value_3_3 = Py_None;
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 108;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3};
            tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[4]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_layers);
        tmp_ass_subscribed_4 = var_layers;
        tmp_ass_subscript_4 = mod_consts[15];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$regnet, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_layers);
        tmp_args_element_value_3 = var_layers;
        frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d804e0c4398d4991c4122d1bb30a5ecf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d804e0c4398d4991c4122d1bb30a5ecf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d804e0c4398d4991c4122d1bb30a5ecf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d804e0c4398d4991c4122d1bb30a5ecf,
        type_description_1,
        par_self,
        par_width_in,
        par_width_out,
        par_stride,
        par_norm_layer,
        par_activation_layer,
        par_group_width,
        par_bottleneck_multiplier,
        par_se_ratio,
        var_layers,
        var_w_b,
        var_g,
        var_width_se_out,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d804e0c4398d4991c4122d1bb30a5ecf == cache_frame_d804e0c4398d4991c4122d1bb30a5ecf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d804e0c4398d4991c4122d1bb30a5ecf);
        cache_frame_d804e0c4398d4991c4122d1bb30a5ecf = NULL;
    }

    assertFrameObject(frame_d804e0c4398d4991c4122d1bb30a5ecf);

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
    CHECK_OBJECT(var_layers);
    Py_DECREF(var_layers);
    var_layers = NULL;
    CHECK_OBJECT(var_w_b);
    Py_DECREF(var_w_b);
    var_w_b = NULL;
    CHECK_OBJECT(var_g);
    Py_DECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_width_se_out);
    var_width_se_out = NULL;
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

    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_w_b);
    var_w_b = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_width_se_out);
    var_width_se_out = NULL;
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
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width_in = python_pars[1];
    PyObject *par_width_out = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_norm_layer = python_pars[4];
    PyObject *par_activation_layer = python_pars[5];
    PyObject *par_group_width = python_pars[6];
    PyObject *par_bottleneck_multiplier = python_pars[7];
    PyObject *par_se_ratio = python_pars[8];
    PyObject *var_should_proj = NULL;
    struct Nuitka_FrameObject *frame_1bb704e667686890b55422254685d241;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1bb704e667686890b55422254685d241 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1bb704e667686890b55422254685d241)) {
        Py_XDECREF(cache_frame_1bb704e667686890b55422254685d241);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bb704e667686890b55422254685d241 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bb704e667686890b55422254685d241 = MAKE_FUNCTION_FRAME(codeobj_1bb704e667686890b55422254685d241, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bb704e667686890b55422254685d241->m_type_description == NULL);
    frame_1bb704e667686890b55422254685d241 = cache_frame_1bb704e667686890b55422254685d241;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bb704e667686890b55422254685d241);
    assert(Py_REFCNT(frame_1bb704e667686890b55422254685d241) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$regnet, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1bb704e667686890b55422254685d241->m_frame.f_lineno = 128;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_width_in);
        tmp_cmp_expr_left_1 = par_width_in;
        CHECK_OBJECT(par_width_out);
        tmp_cmp_expr_right_1 = par_width_out;
        tmp_or_left_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_stride);
        tmp_cmp_expr_left_2 = par_stride;
        tmp_cmp_expr_right_2 = mod_consts[8];
        tmp_or_right_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_should_proj == NULL);
        var_should_proj = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_should_proj);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_should_proj);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooc";
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width_in);
        tmp_kw_call_arg_value_0_1 = par_width_in;
        CHECK_OBJECT(par_width_out);
        tmp_kw_call_arg_value_1_1 = par_width_out;
        tmp_kw_call_dict_value_0_1 = mod_consts[8];
        CHECK_OBJECT(par_stride);
        tmp_kw_call_dict_value_1_1 = par_stride;
        CHECK_OBJECT(par_norm_layer);
        tmp_kw_call_dict_value_2_1 = par_norm_layer;
        tmp_kw_call_dict_value_3_1 = Py_None;
        frame_1bb704e667686890b55422254685d241->m_frame.f_lineno = 134;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[4]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[16], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_width_in == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_width_in;
        if (par_width_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_width_out;
        if (par_stride == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_stride;
        if (par_norm_layer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_norm_layer;
        CHECK_OBJECT(par_activation_layer);
        tmp_args_element_value_5 = par_activation_layer;
        CHECK_OBJECT(par_group_width);
        tmp_args_element_value_6 = par_group_width;
        CHECK_OBJECT(par_bottleneck_multiplier);
        tmp_args_element_value_7 = par_bottleneck_multiplier;
        CHECK_OBJECT(par_se_ratio);
        tmp_args_element_value_8 = par_se_ratio;
        frame_1bb704e667686890b55422254685d241->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_2, call_args);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[22], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_activation_layer);
        tmp_called_value_3 = par_activation_layer;
        frame_1bb704e667686890b55422254685d241->m_frame.f_lineno = 147;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[23], 0), mod_consts[24]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[25], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bb704e667686890b55422254685d241, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bb704e667686890b55422254685d241->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bb704e667686890b55422254685d241, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bb704e667686890b55422254685d241,
        type_description_1,
        par_self,
        par_width_in,
        par_width_out,
        par_stride,
        par_norm_layer,
        par_activation_layer,
        par_group_width,
        par_bottleneck_multiplier,
        par_se_ratio,
        var_should_proj,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1bb704e667686890b55422254685d241 == cache_frame_1bb704e667686890b55422254685d241) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bb704e667686890b55422254685d241);
        cache_frame_1bb704e667686890b55422254685d241 = NULL;
    }

    assertFrameObject(frame_1bb704e667686890b55422254685d241);

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
    CHECK_OBJECT(var_should_proj);
    Py_DECREF(var_should_proj);
    var_should_proj = NULL;
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

    Py_XDECREF(var_should_proj);
    var_should_proj = NULL;
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
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__4_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_56e90e86304896f829e9bf993c9a541c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_56e90e86304896f829e9bf993c9a541c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_56e90e86304896f829e9bf993c9a541c)) {
        Py_XDECREF(cache_frame_56e90e86304896f829e9bf993c9a541c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56e90e86304896f829e9bf993c9a541c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56e90e86304896f829e9bf993c9a541c = MAKE_FUNCTION_FRAME(codeobj_56e90e86304896f829e9bf993c9a541c, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56e90e86304896f829e9bf993c9a541c->m_type_description == NULL);
    frame_56e90e86304896f829e9bf993c9a541c = cache_frame_56e90e86304896f829e9bf993c9a541c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56e90e86304896f829e9bf993c9a541c);
    assert(Py_REFCNT(frame_56e90e86304896f829e9bf993c9a541c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_56e90e86304896f829e9bf993c9a541c->m_frame.f_lineno = 151;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_56e90e86304896f829e9bf993c9a541c->m_frame.f_lineno = 151;
        tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[22], tmp_args_element_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_x);
        tmp_add_expr_left_2 = par_x;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_56e90e86304896f829e9bf993c9a541c->m_frame.f_lineno = 153;
        tmp_add_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[22], tmp_args_element_value_3);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        frame_56e90e86304896f829e9bf993c9a541c->m_frame.f_lineno = 154;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[25], tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
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
        exception_tb = MAKE_TRACEBACK(frame_56e90e86304896f829e9bf993c9a541c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56e90e86304896f829e9bf993c9a541c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56e90e86304896f829e9bf993c9a541c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56e90e86304896f829e9bf993c9a541c,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_56e90e86304896f829e9bf993c9a541c == cache_frame_56e90e86304896f829e9bf993c9a541c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56e90e86304896f829e9bf993c9a541c);
        cache_frame_56e90e86304896f829e9bf993c9a541c = NULL;
    }

    assertFrameObject(frame_56e90e86304896f829e9bf993c9a541c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$regnet$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width_in = python_pars[1];
    PyObject *par_width_out = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_depth = python_pars[4];
    PyObject *par_block_constructor = python_pars[5];
    PyObject *par_norm_layer = python_pars[6];
    PyObject *par_activation_layer = python_pars[7];
    PyObject *par_group_width = python_pars[8];
    PyObject *par_bottleneck_multiplier = python_pars[9];
    PyObject *par_se_ratio = python_pars[10];
    PyObject *par_stage_index = python_pars[11];
    PyObject *var_i = NULL;
    PyObject *var_block = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_83b5ec65c2d8fa42f2ee2598aed20988;
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
    static struct Nuitka_FrameObject *cache_frame_83b5ec65c2d8fa42f2ee2598aed20988 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_83b5ec65c2d8fa42f2ee2598aed20988)) {
        Py_XDECREF(cache_frame_83b5ec65c2d8fa42f2ee2598aed20988);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83b5ec65c2d8fa42f2ee2598aed20988 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83b5ec65c2d8fa42f2ee2598aed20988 = MAKE_FUNCTION_FRAME(codeobj_83b5ec65c2d8fa42f2ee2598aed20988, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83b5ec65c2d8fa42f2ee2598aed20988->m_type_description == NULL);
    frame_83b5ec65c2d8fa42f2ee2598aed20988 = cache_frame_83b5ec65c2d8fa42f2ee2598aed20988;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83b5ec65c2d8fa42f2ee2598aed20988);
    assert(Py_REFCNT(frame_83b5ec65c2d8fa42f2ee2598aed20988) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$regnet, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_83b5ec65c2d8fa42f2ee2598aed20988->m_frame.f_lineno = 174;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(par_depth);
        tmp_xrange_low_1 = par_depth;
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooc";
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
                type_description_1 = "ooooooooooooooc";
                exception_lineno = 176;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        if (par_block_constructor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_called_value_1 = par_block_constructor;
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_left_1 = var_i;
        tmp_cmp_expr_right_1 = mod_consts[27];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_width_in);
        tmp_args_element_value_1 = par_width_in;
        goto condexpr_end_1;
        condexpr_false_1:;
        if (par_width_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_width_out;
        condexpr_end_1:;
        if (par_width_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_width_out;
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_left_2 = var_i;
        tmp_cmp_expr_right_2 = mod_consts[27];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_3 = par_stride;
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_args_element_value_3 = mod_consts[8];
        condexpr_end_2:;
        if (par_norm_layer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_norm_layer;
        if (par_activation_layer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_activation_layer;
        if (par_group_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_group_width;
        if (par_bottleneck_multiplier == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_bottleneck_multiplier;
        if (par_se_ratio == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_se_ratio;
        frame_83b5ec65c2d8fa42f2ee2598aed20988->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_block;
            var_block = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[34];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_stage_index);
            tmp_format_value_1 = par_stage_index;
            tmp_format_spec_1 = mod_consts[35];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "ooooooooooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_i);
            tmp_format_value_2 = var_i;
            tmp_format_spec_2 = mod_consts[35];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "ooooooooooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[35], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_block);
        tmp_args_element_value_10 = var_block;
        frame_83b5ec65c2d8fa42f2ee2598aed20988->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 176;
        type_description_1 = "ooooooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_83b5ec65c2d8fa42f2ee2598aed20988, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83b5ec65c2d8fa42f2ee2598aed20988->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83b5ec65c2d8fa42f2ee2598aed20988, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83b5ec65c2d8fa42f2ee2598aed20988,
        type_description_1,
        par_self,
        par_width_in,
        par_width_out,
        par_stride,
        par_depth,
        par_block_constructor,
        par_norm_layer,
        par_activation_layer,
        par_group_width,
        par_bottleneck_multiplier,
        par_se_ratio,
        par_stage_index,
        var_i,
        var_block,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_83b5ec65c2d8fa42f2ee2598aed20988 == cache_frame_83b5ec65c2d8fa42f2ee2598aed20988) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83b5ec65c2d8fa42f2ee2598aed20988);
        cache_frame_83b5ec65c2d8fa42f2ee2598aed20988 = NULL;
    }

    assertFrameObject(frame_83b5ec65c2d8fa42f2ee2598aed20988);

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
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_block);
    var_block = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_block);
    var_block = NULL;
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
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_depth);
    Py_DECREF(par_depth);
    CHECK_OBJECT(par_block_constructor);
    Py_DECREF(par_block_constructor);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    CHECK_OBJECT(par_stage_index);
    Py_DECREF(par_stage_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_width_in);
    Py_DECREF(par_width_in);
    CHECK_OBJECT(par_width_out);
    Py_DECREF(par_width_out);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_depth);
    Py_DECREF(par_depth);
    CHECK_OBJECT(par_block_constructor);
    Py_DECREF(par_block_constructor);
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    CHECK_OBJECT(par_activation_layer);
    Py_DECREF(par_activation_layer);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    CHECK_OBJECT(par_stage_index);
    Py_DECREF(par_stage_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_depths = python_pars[1];
    PyObject *par_widths = python_pars[2];
    PyObject *par_group_widths = python_pars[3];
    PyObject *par_bottleneck_multipliers = python_pars[4];
    PyObject *par_strides = python_pars[5];
    PyObject *par_se_ratio = python_pars[6];
    struct Nuitka_FrameObject *frame_047fb1b8ed4f1b9906abbf7bd08cc9f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1)) {
        Py_XDECREF(cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1 = MAKE_FUNCTION_FRAME(codeobj_047fb1b8ed4f1b9906abbf7bd08cc9f1, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1->m_type_description == NULL);
    frame_047fb1b8ed4f1b9906abbf7bd08cc9f1 = cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_047fb1b8ed4f1b9906abbf7bd08cc9f1);
    assert(Py_REFCNT(frame_047fb1b8ed4f1b9906abbf7bd08cc9f1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_depths);
        tmp_assattr_value_1 = par_depths;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_widths);
        tmp_assattr_value_2 = par_widths;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_group_widths);
        tmp_assattr_value_3 = par_group_widths;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[39], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_bottleneck_multipliers);
        tmp_assattr_value_4 = par_bottleneck_multipliers;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_strides);
        tmp_assattr_value_5 = par_strides;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[41], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_se_ratio);
        tmp_assattr_value_6 = par_se_ratio;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[31], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_047fb1b8ed4f1b9906abbf7bd08cc9f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_047fb1b8ed4f1b9906abbf7bd08cc9f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_047fb1b8ed4f1b9906abbf7bd08cc9f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_047fb1b8ed4f1b9906abbf7bd08cc9f1,
        type_description_1,
        par_self,
        par_depths,
        par_widths,
        par_group_widths,
        par_bottleneck_multipliers,
        par_strides,
        par_se_ratio
    );


    // Release cached frame if used for exception.
    if (frame_047fb1b8ed4f1b9906abbf7bd08cc9f1 == cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1);
        cache_frame_047fb1b8ed4f1b9906abbf7bd08cc9f1 = NULL;
    }

    assertFrameObject(frame_047fb1b8ed4f1b9906abbf7bd08cc9f1);

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
    CHECK_OBJECT(par_depths);
    Py_DECREF(par_depths);
    CHECK_OBJECT(par_widths);
    Py_DECREF(par_widths);
    CHECK_OBJECT(par_group_widths);
    Py_DECREF(par_group_widths);
    CHECK_OBJECT(par_bottleneck_multipliers);
    Py_DECREF(par_bottleneck_multipliers);
    CHECK_OBJECT(par_strides);
    Py_DECREF(par_strides);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_depths);
    Py_DECREF(par_depths);
    CHECK_OBJECT(par_widths);
    Py_DECREF(par_widths);
    CHECK_OBJECT(par_group_widths);
    Py_DECREF(par_group_widths);
    CHECK_OBJECT(par_bottleneck_multipliers);
    Py_DECREF(par_bottleneck_multipliers);
    CHECK_OBJECT(par_strides);
    Py_DECREF(par_strides);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__7_from_init_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_depth = python_pars[1];
    PyObject *par_w_0 = python_pars[2];
    PyObject *par_w_a = python_pars[3];
    PyObject *par_w_m = python_pars[4];
    PyObject *par_group_width = python_pars[5];
    PyObject *par_bottleneck_multiplier = python_pars[6];
    PyObject *par_se_ratio = python_pars[7];
    PyObject *par_kwargs = python_pars[8];
    PyObject *var_widths_cont = NULL;
    PyObject *var_block_capacity = NULL;
    PyObject *var_block_widths = NULL;
    PyObject *var_num_stages = NULL;
    PyObject *var_split_helper = NULL;
    PyObject *var_splits = NULL;
    PyObject *var_stage_widths = NULL;
    PyObject *var_stage_depths = NULL;
    PyObject *var_strides = NULL;
    PyObject *var_bottleneck_multipliers = NULL;
    PyObject *var_group_widths = NULL;
    PyObject *outline_0_var_w = NULL;
    PyObject *outline_0_var_wp = NULL;
    PyObject *outline_0_var_r = NULL;
    PyObject *outline_0_var_rp = NULL;
    PyObject *outline_1_var_w = NULL;
    PyObject *outline_1_var_t = NULL;
    PyObject *outline_2_var_d = NULL;
    PyObject *outline_2_var_t = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_aea72ef4726b8cb2d9cff565228778bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_4b9d0e5758c7fd126a28839cfac5b1a0_2;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_daf8d608be7823af4d4780989c433da8_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_daf8d608be7823af4d4780989c433da8_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_8ca3586ae310834c3cc51b960bc8565b_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_8ca3586ae310834c3cc51b960bc8565b_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aea72ef4726b8cb2d9cff565228778bf = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aea72ef4726b8cb2d9cff565228778bf)) {
        Py_XDECREF(cache_frame_aea72ef4726b8cb2d9cff565228778bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aea72ef4726b8cb2d9cff565228778bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aea72ef4726b8cb2d9cff565228778bf = MAKE_FUNCTION_FRAME(codeobj_aea72ef4726b8cb2d9cff565228778bf, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aea72ef4726b8cb2d9cff565228778bf->m_type_description == NULL);
    frame_aea72ef4726b8cb2d9cff565228778bf = cache_frame_aea72ef4726b8cb2d9cff565228778bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aea72ef4726b8cb2d9cff565228778bf);
    assert(Py_REFCNT(frame_aea72ef4726b8cb2d9cff565228778bf) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_w_a);
        tmp_cmp_expr_left_1 = par_w_a;
        tmp_cmp_expr_right_1 = mod_consts[27];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_w_0);
        tmp_cmp_expr_left_2 = par_w_0;
        tmp_cmp_expr_right_2 = mod_consts[27];
        tmp_or_left_value_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_w_m);
        tmp_cmp_expr_left_3 = par_w_m;
        tmp_cmp_expr_right_3 = mod_consts[8];
        tmp_or_left_value_3 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(par_w_0);
        tmp_mod_expr_left_1 = par_w_0;
        tmp_mod_expr_right_1 = mod_consts[42];
        tmp_cmp_expr_left_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[27];
        tmp_or_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
        tmp_make_exception_arg_1 = mod_consts[43];
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 244;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 244;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooNNooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_depth);
        tmp_args_element_value_1 = par_depth;
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 246;
        tmp_mult_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[45], tmp_args_element_value_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_w_a);
        tmp_mult_expr_right_1 = par_w_a;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_w_0 == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_1 = par_w_0;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widths_cont == NULL);
        var_widths_cont = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_widths_cont);
        tmp_truediv_expr_left_2 = var_widths_cont;
        if (par_w_0 == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_2 = par_w_0;
        tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 247;
        tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_w_m);
        tmp_args_element_value_4 = par_w_m;
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 247;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[47], tmp_args_element_value_4);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 247;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_block_capacity == NULL);
        var_block_capacity = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_w_0 == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_3 = par_w_0;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_w_m);
        tmp_args_element_value_7 = par_w_m;
        CHECK_OBJECT(var_block_capacity);
        tmp_args_element_value_8 = var_block_capacity;
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_mult_expr_right_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[50],
                call_args
            );
        }

        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[42];
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_9};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 248;
        tmp_mult_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[42];
        tmp_called_instance_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 248;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[51]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 248;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[52]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_block_widths == NULL);
        var_block_widths = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_set_arg_1;
        CHECK_OBJECT(var_block_widths);
        tmp_set_arg_1 = var_block_widths;
        tmp_len_arg_1 = PySet_New(tmp_set_arg_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_stages == NULL);
        var_num_stages = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        tmp_called_value_5 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_block_widths);
        tmp_add_expr_left_2 = var_block_widths;
        tmp_add_expr_right_2 = MAKE_LIST1(mod_consts[27]);
        tmp_args_element_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = MAKE_LIST1(mod_consts[27]);
        CHECK_OBJECT(var_block_widths);
        tmp_add_expr_right_3 = var_block_widths;
        tmp_args_element_value_11 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 254;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_block_widths);
        tmp_add_expr_left_4 = var_block_widths;
        tmp_add_expr_right_4 = MAKE_LIST1(mod_consts[27]);
        tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 255;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = MAKE_LIST1(mod_consts[27]);
        CHECK_OBJECT(var_block_widths);
        tmp_add_expr_right_5 = var_block_widths;
        tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 256;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_helper == NULL);
        var_split_helper = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_split_helper);
            tmp_iter_arg_1 = var_split_helper;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooooooooNNooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2)) {
            Py_XDECREF(cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2 = MAKE_FUNCTION_FRAME(codeobj_4b9d0e5758c7fd126a28839cfac5b1a0, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2->m_type_description == NULL);
        frame_4b9d0e5758c7fd126a28839cfac5b1a0_2 = cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4b9d0e5758c7fd126a28839cfac5b1a0_2);
        assert(Py_REFCNT(frame_4b9d0e5758c7fd126a28839cfac5b1a0_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oooo";
                    exception_lineno = 258;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "oooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
            if (tmp_assign_source_11 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oooo";
                exception_lineno = 258;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
            if (tmp_assign_source_12 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oooo";
                exception_lineno = 258;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
            if (tmp_assign_source_13 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oooo";
                exception_lineno = 258;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_3;
                tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
            if (tmp_assign_source_14 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oooo";
                exception_lineno = 258;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_4;
                tmp_listcomp$tuple_unpack_1__element_4 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oooo";
                        exception_lineno = 258;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[53];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oooo";
                exception_lineno = 258;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
        tmp_listcomp$tuple_unpack_1__element_3 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
        tmp_listcomp$tuple_unpack_1__element_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_15 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_w;
                outline_0_var_w = tmp_assign_source_15;
                Py_INCREF(outline_0_var_w);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_16 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_wp;
                outline_0_var_wp = tmp_assign_source_16;
                Py_INCREF(outline_0_var_wp);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_3);
            tmp_assign_source_17 = tmp_listcomp$tuple_unpack_1__element_3;
            {
                PyObject *old = outline_0_var_r;
                outline_0_var_r = tmp_assign_source_17;
                Py_INCREF(outline_0_var_r);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
        tmp_listcomp$tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_4);
            tmp_assign_source_18 = tmp_listcomp$tuple_unpack_1__element_4;
            {
                PyObject *old = outline_0_var_rp;
                outline_0_var_rp = tmp_assign_source_18;
                Py_INCREF(outline_0_var_rp);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
        tmp_listcomp$tuple_unpack_1__element_4 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            int tmp_or_left_truth_4;
            PyObject *tmp_or_left_value_4;
            PyObject *tmp_or_right_value_4;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_w);
            tmp_cmp_expr_left_5 = outline_0_var_w;
            CHECK_OBJECT(outline_0_var_wp);
            tmp_cmp_expr_right_5 = outline_0_var_wp;
            tmp_or_left_value_4 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_or_left_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
            tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
            if (tmp_or_left_truth_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_4);

                exception_lineno = 258;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
            if (tmp_or_left_truth_4 == 1) {
                goto or_left_4;
            } else {
                goto or_right_4;
            }
            or_right_4:;
            Py_DECREF(tmp_or_left_value_4);
            CHECK_OBJECT(outline_0_var_r);
            tmp_cmp_expr_left_6 = outline_0_var_r;
            CHECK_OBJECT(outline_0_var_rp);
            tmp_cmp_expr_right_6 = outline_0_var_rp;
            tmp_or_right_value_4 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_or_right_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = tmp_or_right_value_4;
            goto or_end_4;
            or_left_4:;
            tmp_append_value_1 = tmp_or_left_value_4;
            or_end_4:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "oooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_2 = "oooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_6);
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
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b9d0e5758c7fd126a28839cfac5b1a0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b9d0e5758c7fd126a28839cfac5b1a0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b9d0e5758c7fd126a28839cfac5b1a0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b9d0e5758c7fd126a28839cfac5b1a0_2,
            type_description_2,
            outline_0_var_w,
            outline_0_var_wp,
            outline_0_var_r,
            outline_0_var_rp
        );


        // Release cached frame if used for exception.
        if (frame_4b9d0e5758c7fd126a28839cfac5b1a0_2 == cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2);
            cache_frame_4b9d0e5758c7fd126a28839cfac5b1a0_2 = NULL;
        }

        assertFrameObject(frame_4b9d0e5758c7fd126a28839cfac5b1a0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooNNooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_w);
        outline_0_var_w = NULL;
        Py_XDECREF(outline_0_var_wp);
        outline_0_var_wp = NULL;
        Py_XDECREF(outline_0_var_r);
        outline_0_var_r = NULL;
        Py_XDECREF(outline_0_var_rp);
        outline_0_var_rp = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_w);
        outline_0_var_w = NULL;
        Py_XDECREF(outline_0_var_wp);
        outline_0_var_wp = NULL;
        Py_XDECREF(outline_0_var_r);
        outline_0_var_r = NULL;
        Py_XDECREF(outline_0_var_rp);
        outline_0_var_rp = NULL;
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
        exception_lineno = 258;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_splits == NULL);
        var_splits = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            tmp_called_value_6 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_block_widths);
            tmp_args_element_value_14 = var_block_widths;
            CHECK_OBJECT(var_splits);
            tmp_expression_value_5 = var_splits;
            tmp_subscript_value_1 = mod_consts[54];
            tmp_args_element_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_1 = "oooooooooNNooooooooooo";
                goto try_except_handler_6;
            }
            frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 260;
            {
                PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
            }

            Py_DECREF(tmp_args_element_value_15);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_1 = "oooooooooNNooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_1 = "oooooooooNNooooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_21;
        }
        if (isFrameUnusable(cache_frame_daf8d608be7823af4d4780989c433da8_3)) {
            Py_XDECREF(cache_frame_daf8d608be7823af4d4780989c433da8_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_daf8d608be7823af4d4780989c433da8_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_daf8d608be7823af4d4780989c433da8_3 = MAKE_FUNCTION_FRAME(codeobj_daf8d608be7823af4d4780989c433da8, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_daf8d608be7823af4d4780989c433da8_3->m_type_description == NULL);
        frame_daf8d608be7823af4d4780989c433da8_3 = cache_frame_daf8d608be7823af4d4780989c433da8_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_daf8d608be7823af4d4780989c433da8_3);
        assert(Py_REFCNT(frame_daf8d608be7823af4d4780989c433da8_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 260;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_4 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_5 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
            if (tmp_assign_source_24 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 260;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_6 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
            if (tmp_assign_source_25 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 260;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 260;
                        goto try_except_handler_9;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[55];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 260;
                goto try_except_handler_9;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_26 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_w;
                outline_1_var_w = tmp_assign_source_26;
                Py_INCREF(outline_1_var_w);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_27 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_t;
                outline_1_var_t = tmp_assign_source_27;
                Py_INCREF(outline_1_var_t);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT(outline_1_var_t);
            tmp_truth_name_1 = CHECK_IF_TRUE(outline_1_var_t);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_w);
            tmp_append_value_2 = outline_1_var_w;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_19 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_daf8d608be7823af4d4780989c433da8_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_daf8d608be7823af4d4780989c433da8_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_daf8d608be7823af4d4780989c433da8_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_daf8d608be7823af4d4780989c433da8_3,
            type_description_2,
            outline_1_var_w,
            outline_1_var_t
        );


        // Release cached frame if used for exception.
        if (frame_daf8d608be7823af4d4780989c433da8_3 == cache_frame_daf8d608be7823af4d4780989c433da8_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_daf8d608be7823af4d4780989c433da8_3);
            cache_frame_daf8d608be7823af4d4780989c433da8_3 = NULL;
        }

        assertFrameObject(frame_daf8d608be7823af4d4780989c433da8_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooNNooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_w);
        outline_1_var_w = NULL;
        Py_XDECREF(outline_1_var_t);
        outline_1_var_t = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_w);
        outline_1_var_w = NULL;
        Py_XDECREF(outline_1_var_t);
        outline_1_var_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 260;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_stage_widths == NULL);
        var_stage_widths = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[56]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[57]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_9 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(var_splits);
            tmp_args_element_value_18 = var_splits;
            frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 261;
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_18);
            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "oooooooooNNooooooooooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "oooooooooNNooooooooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_30;
        }
        if (isFrameUnusable(cache_frame_8ca3586ae310834c3cc51b960bc8565b_4)) {
            Py_XDECREF(cache_frame_8ca3586ae310834c3cc51b960bc8565b_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8ca3586ae310834c3cc51b960bc8565b_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8ca3586ae310834c3cc51b960bc8565b_4 = MAKE_FUNCTION_FRAME(codeobj_8ca3586ae310834c3cc51b960bc8565b, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_8ca3586ae310834c3cc51b960bc8565b_4->m_type_description == NULL);
        frame_8ca3586ae310834c3cc51b960bc8565b_4 = cache_frame_8ca3586ae310834c3cc51b960bc8565b_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8ca3586ae310834c3cc51b960bc8565b_4);
        assert(Py_REFCNT(frame_8ca3586ae310834c3cc51b960bc8565b_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_31 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 261;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_iter_arg_6 = tmp_listcomp_3__iter_value_0;
            tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__source_iter;
                tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_7 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
            if (tmp_assign_source_33 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 261;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_1;
                tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_8 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
            if (tmp_assign_source_34 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 261;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_2;
                tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_3__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 261;
                        goto try_except_handler_13;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[55];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 261;
                goto try_except_handler_13;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_12;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_1);
            tmp_assign_source_35 = tmp_listcomp$tuple_unpack_3__element_1;
            {
                PyObject *old = outline_2_var_d;
                outline_2_var_d = tmp_assign_source_35;
                Py_INCREF(outline_2_var_d);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_2);
            tmp_assign_source_36 = tmp_listcomp$tuple_unpack_3__element_2;
            {
                PyObject *old = outline_2_var_t;
                outline_2_var_t = tmp_assign_source_36;
                Py_INCREF(outline_2_var_t);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT(outline_2_var_t);
            tmp_truth_name_2 = CHECK_IF_TRUE(outline_2_var_t);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_d);
            tmp_append_value_3 = outline_2_var_d;
            tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_2 = "oo";
            goto try_except_handler_11;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_args_element_value_17 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_args_element_value_17);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ca3586ae310834c3cc51b960bc8565b_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ca3586ae310834c3cc51b960bc8565b_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ca3586ae310834c3cc51b960bc8565b_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ca3586ae310834c3cc51b960bc8565b_4,
            type_description_2,
            outline_2_var_d,
            outline_2_var_t
        );


        // Release cached frame if used for exception.
        if (frame_8ca3586ae310834c3cc51b960bc8565b_4 == cache_frame_8ca3586ae310834c3cc51b960bc8565b_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_8ca3586ae310834c3cc51b960bc8565b_4);
            cache_frame_8ca3586ae310834c3cc51b960bc8565b_4 = NULL;
        }

        assertFrameObject(frame_8ca3586ae310834c3cc51b960bc8565b_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooooNNooooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_2_var_d);
        outline_2_var_d = NULL;
        Py_XDECREF(outline_2_var_t);
        outline_2_var_t = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_d);
        outline_2_var_d = NULL;
        Py_XDECREF(outline_2_var_t);
        outline_2_var_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 261;
        goto frame_exception_exit_1;
        outline_result_3:;
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 261;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 261;
        tmp_called_instance_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 261;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[51]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 261;
        tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[52]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stage_depths == NULL);
        var_stage_depths = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = MAKE_LIST1(mod_consts[3]);
        CHECK_OBJECT(var_num_stages);
        tmp_mult_expr_right_4 = var_num_stages;
        tmp_assign_source_37 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        assert(!(tmp_assign_source_37 == NULL));
        assert(var_strides == NULL);
        var_strides = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_bottleneck_multiplier);
        tmp_list_element_1 = par_bottleneck_multiplier;
        tmp_mult_expr_left_5 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mult_expr_left_5, 0, tmp_list_element_1);
        CHECK_OBJECT(var_num_stages);
        tmp_mult_expr_right_5 = var_num_stages;
        tmp_assign_source_38 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        assert(!(tmp_assign_source_38 == NULL));
        assert(var_bottleneck_multipliers == NULL);
        var_bottleneck_multipliers = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(par_group_width);
        tmp_list_element_2 = par_group_width;
        tmp_mult_expr_left_6 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mult_expr_left_6, 0, tmp_list_element_2);
        CHECK_OBJECT(var_num_stages);
        tmp_mult_expr_right_6 = var_num_stages;
        tmp_assign_source_39 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        assert(!(tmp_assign_source_39 == NULL));
        assert(var_group_widths == NULL);
        var_group_widths = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_8 = par_cls;
        CHECK_OBJECT(var_stage_widths);
        tmp_args_element_value_19 = var_stage_widths;
        CHECK_OBJECT(var_bottleneck_multipliers);
        tmp_args_element_value_20 = var_bottleneck_multipliers;
        CHECK_OBJECT(var_group_widths);
        tmp_args_element_value_21 = var_group_widths;
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_iter_arg_7 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_8,
                mod_consts[58],
                call_args
            );
        }

        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooNNooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_40 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooNNooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_41 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNNooooooooooo";
            exception_lineno = 268;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_42 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooNNooooooooooo";
            exception_lineno = 268;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_42;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooNNooooooooooo";
                    exception_lineno = 268;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[55];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooNNooooooooooo";
            exception_lineno = 268;
            goto try_except_handler_15;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_43 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_stage_widths;
            assert(old != NULL);
            var_stage_widths = tmp_assign_source_43;
            Py_INCREF(var_stage_widths);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_44 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_group_widths;
            assert(old != NULL);
            var_group_widths = tmp_assign_source_44;
            Py_INCREF(var_group_widths);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        CHECK_OBJECT(par_cls);
        tmp_called_value_10 = par_cls;
        CHECK_OBJECT(var_stage_depths);
        tmp_kw_call_value_0_1 = var_stage_depths;
        CHECK_OBJECT(var_stage_widths);
        tmp_kw_call_value_1_1 = var_stage_widths;
        CHECK_OBJECT(var_group_widths);
        tmp_kw_call_value_2_1 = var_group_widths;
        CHECK_OBJECT(var_bottleneck_multipliers);
        tmp_kw_call_value_3_1 = var_bottleneck_multipliers;
        CHECK_OBJECT(var_strides);
        tmp_kw_call_value_4_1 = var_strides;
        CHECK_OBJECT(par_se_ratio);
        tmp_kw_call_value_5_1 = par_se_ratio;
        frame_aea72ef4726b8cb2d9cff565228778bf->m_frame.f_lineno = 272;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[59]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooNNooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aea72ef4726b8cb2d9cff565228778bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aea72ef4726b8cb2d9cff565228778bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aea72ef4726b8cb2d9cff565228778bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aea72ef4726b8cb2d9cff565228778bf,
        type_description_1,
        par_cls,
        par_depth,
        par_w_0,
        par_w_a,
        par_w_m,
        par_group_width,
        par_bottleneck_multiplier,
        par_se_ratio,
        par_kwargs,
        NULL,
        NULL,
        var_widths_cont,
        var_block_capacity,
        var_block_widths,
        var_num_stages,
        var_split_helper,
        var_splits,
        var_stage_widths,
        var_stage_depths,
        var_strides,
        var_bottleneck_multipliers,
        var_group_widths
    );


    // Release cached frame if used for exception.
    if (frame_aea72ef4726b8cb2d9cff565228778bf == cache_frame_aea72ef4726b8cb2d9cff565228778bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aea72ef4726b8cb2d9cff565228778bf);
        cache_frame_aea72ef4726b8cb2d9cff565228778bf = NULL;
    }

    assertFrameObject(frame_aea72ef4726b8cb2d9cff565228778bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_widths_cont);
    Py_DECREF(var_widths_cont);
    var_widths_cont = NULL;
    CHECK_OBJECT(var_block_capacity);
    Py_DECREF(var_block_capacity);
    var_block_capacity = NULL;
    CHECK_OBJECT(var_block_widths);
    Py_DECREF(var_block_widths);
    var_block_widths = NULL;
    CHECK_OBJECT(var_num_stages);
    Py_DECREF(var_num_stages);
    var_num_stages = NULL;
    CHECK_OBJECT(var_split_helper);
    Py_DECREF(var_split_helper);
    var_split_helper = NULL;
    CHECK_OBJECT(var_splits);
    Py_DECREF(var_splits);
    var_splits = NULL;
    CHECK_OBJECT(var_stage_widths);
    Py_DECREF(var_stage_widths);
    var_stage_widths = NULL;
    CHECK_OBJECT(var_stage_depths);
    Py_DECREF(var_stage_depths);
    var_stage_depths = NULL;
    CHECK_OBJECT(var_strides);
    Py_DECREF(var_strides);
    var_strides = NULL;
    CHECK_OBJECT(var_bottleneck_multipliers);
    Py_DECREF(var_bottleneck_multipliers);
    var_bottleneck_multipliers = NULL;
    CHECK_OBJECT(var_group_widths);
    Py_DECREF(var_group_widths);
    var_group_widths = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_widths_cont);
    var_widths_cont = NULL;
    Py_XDECREF(var_block_capacity);
    var_block_capacity = NULL;
    Py_XDECREF(var_block_widths);
    var_block_widths = NULL;
    Py_XDECREF(var_num_stages);
    var_num_stages = NULL;
    Py_XDECREF(var_split_helper);
    var_split_helper = NULL;
    Py_XDECREF(var_splits);
    var_splits = NULL;
    Py_XDECREF(var_stage_widths);
    var_stage_widths = NULL;
    Py_XDECREF(var_stage_depths);
    var_stage_depths = NULL;
    Py_XDECREF(var_strides);
    var_strides = NULL;
    Py_XDECREF(var_bottleneck_multipliers);
    var_bottleneck_multipliers = NULL;
    Py_XDECREF(var_group_widths);
    var_group_widths = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_depth);
    Py_DECREF(par_depth);
    CHECK_OBJECT(par_w_0);
    Py_DECREF(par_w_0);
    CHECK_OBJECT(par_w_a);
    Py_DECREF(par_w_a);
    CHECK_OBJECT(par_w_m);
    Py_DECREF(par_w_m);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_depth);
    Py_DECREF(par_depth);
    CHECK_OBJECT(par_w_0);
    Py_DECREF(par_w_0);
    CHECK_OBJECT(par_w_a);
    Py_DECREF(par_w_a);
    CHECK_OBJECT(par_w_m);
    Py_DECREF(par_w_m);
    CHECK_OBJECT(par_group_width);
    Py_DECREF(par_group_width);
    CHECK_OBJECT(par_bottleneck_multiplier);
    Py_DECREF(par_bottleneck_multiplier);
    CHECK_OBJECT(par_se_ratio);
    Py_DECREF(par_se_ratio);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__8__get_expanded_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_057f35011dae2bc68bd0cb0a1a7d4aa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2)) {
        Py_XDECREF(cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2 = MAKE_FUNCTION_FRAME(codeobj_057f35011dae2bc68bd0cb0a1a7d4aa2, module_torchvision$models$regnet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2->m_type_description == NULL);
    frame_057f35011dae2bc68bd0cb0a1a7d4aa2 = cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_057f35011dae2bc68bd0cb0a1a7d4aa2);
    assert(Py_REFCNT(frame_057f35011dae2bc68bd0cb0a1a7d4aa2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 282;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_057f35011dae2bc68bd0cb0a1a7d4aa2->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_057f35011dae2bc68bd0cb0a1a7d4aa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_057f35011dae2bc68bd0cb0a1a7d4aa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_057f35011dae2bc68bd0cb0a1a7d4aa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_057f35011dae2bc68bd0cb0a1a7d4aa2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_057f35011dae2bc68bd0cb0a1a7d4aa2 == cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2);
        cache_frame_057f35011dae2bc68bd0cb0a1a7d4aa2 = NULL;
    }

    assertFrameObject(frame_057f35011dae2bc68bd0cb0a1a7d4aa2);

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


static PyObject *impl_torchvision$models$regnet$$$function__9__adjust_widths_groups_compatibilty(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stage_widths = python_pars[0];
    PyObject *par_bottleneck_ratios = python_pars[1];
    PyObject *par_group_widths = python_pars[2];
    PyObject *var_widths = NULL;
    PyObject *var_group_widths_min = NULL;
    PyObject *var_ws_bot = NULL;
    PyObject *outline_0_var_w = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *outline_1_var_g = NULL;
    PyObject *outline_1_var_w_bot = NULL;
    PyObject *outline_2_var_w_bot = NULL;
    PyObject *outline_2_var_g = NULL;
    PyObject *outline_3_var_w_bot = NULL;
    PyObject *outline_3_var_b = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_85034b37c3345cc576ba093c6facbbc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_933dc676c02c4199ea2f8f3add5ca6aa_2;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_89ea1dfbcacebd38650183c914a4788f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_89ea1dfbcacebd38650183c914a4788f_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_737653abf8e6cb9537045d1c7be05549_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_737653abf8e6cb9537045d1c7be05549_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_FrameObject *frame_ef08806edfae42e30b1ff66a95a6eaac_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    static struct Nuitka_FrameObject *cache_frame_85034b37c3345cc576ba093c6facbbc2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_85034b37c3345cc576ba093c6facbbc2)) {
        Py_XDECREF(cache_frame_85034b37c3345cc576ba093c6facbbc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85034b37c3345cc576ba093c6facbbc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85034b37c3345cc576ba093c6facbbc2 = MAKE_FUNCTION_FRAME(codeobj_85034b37c3345cc576ba093c6facbbc2, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85034b37c3345cc576ba093c6facbbc2->m_type_description == NULL);
    frame_85034b37c3345cc576ba093c6facbbc2 = cache_frame_85034b37c3345cc576ba093c6facbbc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_85034b37c3345cc576ba093c6facbbc2);
    assert(Py_REFCNT(frame_85034b37c3345cc576ba093c6facbbc2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_1 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_stage_widths);
            tmp_args_element_value_1 = par_stage_widths;
            CHECK_OBJECT(par_bottleneck_ratios);
            tmp_args_element_value_2 = par_bottleneck_ratios;
            frame_85034b37c3345cc576ba093c6facbbc2->m_frame.f_lineno = 293;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
        if (isFrameUnusable(cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2)) {
            Py_XDECREF(cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2 = MAKE_FUNCTION_FRAME(codeobj_933dc676c02c4199ea2f8f3add5ca6aa, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2->m_type_description == NULL);
        frame_933dc676c02c4199ea2f8f3add5ca6aa_2 = cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_933dc676c02c4199ea2f8f3add5ca6aa_2);
        assert(Py_REFCNT(frame_933dc676c02c4199ea2f8f3add5ca6aa_2) == 2);

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
                    exception_lineno = 293;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 293;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 293;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 293;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[55];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 293;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_w;
                outline_0_var_w = tmp_assign_source_8;
                Py_INCREF(outline_0_var_w);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_9;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_w);
            tmp_mult_expr_left_1 = outline_0_var_w;
            CHECK_OBJECT(outline_0_var_b);
            tmp_mult_expr_right_1 = outline_0_var_b;
            tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            if (tmp_int_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_933dc676c02c4199ea2f8f3add5ca6aa_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_933dc676c02c4199ea2f8f3add5ca6aa_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_933dc676c02c4199ea2f8f3add5ca6aa_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_933dc676c02c4199ea2f8f3add5ca6aa_2,
            type_description_2,
            outline_0_var_w,
            outline_0_var_b
        );


        // Release cached frame if used for exception.
        if (frame_933dc676c02c4199ea2f8f3add5ca6aa_2 == cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2);
            cache_frame_933dc676c02c4199ea2f8f3add5ca6aa_2 = NULL;
        }

        assertFrameObject(frame_933dc676c02c4199ea2f8f3add5ca6aa_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_w);
        outline_0_var_w = NULL;
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_w);
        outline_0_var_w = NULL;
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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
        exception_lineno = 293;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_widths == NULL);
        var_widths = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_2 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_group_widths);
            tmp_args_element_value_3 = par_group_widths;
            CHECK_OBJECT(var_widths);
            tmp_args_element_value_4 = var_widths;
            frame_85034b37c3345cc576ba093c6facbbc2->m_frame.f_lineno = 294;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_89ea1dfbcacebd38650183c914a4788f_3)) {
            Py_XDECREF(cache_frame_89ea1dfbcacebd38650183c914a4788f_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_89ea1dfbcacebd38650183c914a4788f_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_89ea1dfbcacebd38650183c914a4788f_3 = MAKE_FUNCTION_FRAME(codeobj_89ea1dfbcacebd38650183c914a4788f, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_89ea1dfbcacebd38650183c914a4788f_3->m_type_description == NULL);
        frame_89ea1dfbcacebd38650183c914a4788f_3 = cache_frame_89ea1dfbcacebd38650183c914a4788f_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_89ea1dfbcacebd38650183c914a4788f_3);
        assert(Py_REFCNT(frame_89ea1dfbcacebd38650183c914a4788f_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 294;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_4 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_15 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 294;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_16 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 294;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 294;
                        goto try_except_handler_9;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[55];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 294;
                goto try_except_handler_9;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_17 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_g;
                outline_1_var_g = tmp_assign_source_17;
                Py_INCREF(outline_1_var_g);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_18 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_w_bot;
                outline_1_var_w_bot = tmp_assign_source_18;
                Py_INCREF(outline_1_var_w_bot);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[61]);
            assert(tmp_called_value_3 != NULL);
            CHECK_OBJECT(outline_1_var_g);
            tmp_args_element_value_5 = outline_1_var_g;
            CHECK_OBJECT(outline_1_var_w_bot);
            tmp_args_element_value_6 = outline_1_var_w_bot;
            frame_89ea1dfbcacebd38650183c914a4788f_3->m_frame.f_lineno = 294;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_10 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_89ea1dfbcacebd38650183c914a4788f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_89ea1dfbcacebd38650183c914a4788f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_89ea1dfbcacebd38650183c914a4788f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_89ea1dfbcacebd38650183c914a4788f_3,
            type_description_2,
            outline_1_var_g,
            outline_1_var_w_bot
        );


        // Release cached frame if used for exception.
        if (frame_89ea1dfbcacebd38650183c914a4788f_3 == cache_frame_89ea1dfbcacebd38650183c914a4788f_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_89ea1dfbcacebd38650183c914a4788f_3);
            cache_frame_89ea1dfbcacebd38650183c914a4788f_3 = NULL;
        }

        assertFrameObject(frame_89ea1dfbcacebd38650183c914a4788f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_g);
        outline_1_var_g = NULL;
        Py_XDECREF(outline_1_var_w_bot);
        outline_1_var_w_bot = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_g);
        outline_1_var_g = NULL;
        Py_XDECREF(outline_1_var_w_bot);
        outline_1_var_w_bot = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 294;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_group_widths_min == NULL);
        var_group_widths_min = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_4 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_widths);
            tmp_args_element_value_7 = var_widths;
            CHECK_OBJECT(var_group_widths_min);
            tmp_args_element_value_8 = var_group_widths_min;
            frame_85034b37c3345cc576ba093c6facbbc2->m_frame.f_lineno = 297;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
            }

            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_1 = "oooooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_1 = "oooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_21;
        }
        if (isFrameUnusable(cache_frame_737653abf8e6cb9537045d1c7be05549_4)) {
            Py_XDECREF(cache_frame_737653abf8e6cb9537045d1c7be05549_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_737653abf8e6cb9537045d1c7be05549_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_737653abf8e6cb9537045d1c7be05549_4 = MAKE_FUNCTION_FRAME(codeobj_737653abf8e6cb9537045d1c7be05549, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_737653abf8e6cb9537045d1c7be05549_4->m_type_description == NULL);
        frame_737653abf8e6cb9537045d1c7be05549_4 = cache_frame_737653abf8e6cb9537045d1c7be05549_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_737653abf8e6cb9537045d1c7be05549_4);
        assert(Py_REFCNT(frame_737653abf8e6cb9537045d1c7be05549_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 297;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_iter_arg_6 = tmp_listcomp_3__iter_value_0;
            tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__source_iter;
                tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_5 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
            if (tmp_assign_source_24 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 297;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_1;
                tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_6 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
            if (tmp_assign_source_25 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 297;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_2;
                tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_3__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 297;
                        goto try_except_handler_13;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[55];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 297;
                goto try_except_handler_13;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_12;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_1);
            tmp_assign_source_26 = tmp_listcomp$tuple_unpack_3__element_1;
            {
                PyObject *old = outline_2_var_w_bot;
                outline_2_var_w_bot = tmp_assign_source_26;
                Py_INCREF(outline_2_var_w_bot);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_2);
            tmp_assign_source_27 = tmp_listcomp$tuple_unpack_3__element_2;
            {
                PyObject *old = outline_2_var_g;
                outline_2_var_g = tmp_assign_source_27;
                Py_INCREF(outline_2_var_g);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(outline_2_var_w_bot);
            tmp_args_element_value_9 = outline_2_var_w_bot;
            CHECK_OBJECT(outline_2_var_g);
            tmp_args_element_value_10 = outline_2_var_g;
            frame_737653abf8e6cb9537045d1c7be05549_4->m_frame.f_lineno = 297;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_append_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
            }

            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_2 = "oo";
            goto try_except_handler_11;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_19 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_737653abf8e6cb9537045d1c7be05549_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_737653abf8e6cb9537045d1c7be05549_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_737653abf8e6cb9537045d1c7be05549_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_737653abf8e6cb9537045d1c7be05549_4,
            type_description_2,
            outline_2_var_w_bot,
            outline_2_var_g
        );


        // Release cached frame if used for exception.
        if (frame_737653abf8e6cb9537045d1c7be05549_4 == cache_frame_737653abf8e6cb9537045d1c7be05549_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_737653abf8e6cb9537045d1c7be05549_4);
            cache_frame_737653abf8e6cb9537045d1c7be05549_4 = NULL;
        }

        assertFrameObject(frame_737653abf8e6cb9537045d1c7be05549_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooo";
        goto try_except_handler_10;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_2_var_w_bot);
        outline_2_var_w_bot = NULL;
        Py_XDECREF(outline_2_var_g);
        outline_2_var_g = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_w_bot);
        outline_2_var_w_bot = NULL;
        Py_XDECREF(outline_2_var_g);
        outline_2_var_g = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 297;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_ws_bot == NULL);
        var_ws_bot = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_28;
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_6 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_ws_bot);
            tmp_args_element_value_11 = var_ws_bot;
            CHECK_OBJECT(par_bottleneck_ratios);
            tmp_args_element_value_12 = par_bottleneck_ratios;
            frame_85034b37c3345cc576ba093c6facbbc2->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
            }

            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooo";
                goto try_except_handler_14;
            }
            tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooo";
                goto try_except_handler_14;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_30;
        }
        if (isFrameUnusable(cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5)) {
            Py_XDECREF(cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5 = MAKE_FUNCTION_FRAME(codeobj_ef08806edfae42e30b1ff66a95a6eaac, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5->m_type_description == NULL);
        frame_ef08806edfae42e30b1ff66a95a6eaac_5 = cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ef08806edfae42e30b1ff66a95a6eaac_5);
        assert(Py_REFCNT(frame_ef08806edfae42e30b1ff66a95a6eaac_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_31 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 298;
                    goto try_except_handler_15;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_iter_arg_8 = tmp_listcomp_4__iter_value_0;
            tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_4__source_iter;
                tmp_listcomp$tuple_unpack_4__source_iter = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_unpack_7 = tmp_listcomp$tuple_unpack_4__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
            if (tmp_assign_source_33 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 298;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_4__element_1;
                tmp_listcomp$tuple_unpack_4__element_1 = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_unpack_8 = tmp_listcomp$tuple_unpack_4__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
            if (tmp_assign_source_34 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 298;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_4__element_2;
                tmp_listcomp$tuple_unpack_4__element_2 = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_iterator_name_4 = tmp_listcomp$tuple_unpack_4__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 298;
                        goto try_except_handler_17;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[55];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 298;
                goto try_except_handler_17;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_4__source_iter);
        tmp_listcomp$tuple_unpack_4__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_16;
        // End of try:
        try_end_7:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_1);
        tmp_listcomp$tuple_unpack_4__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_2);
        tmp_listcomp$tuple_unpack_4__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_4__source_iter);
        tmp_listcomp$tuple_unpack_4__source_iter = NULL;
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_1);
            tmp_assign_source_35 = tmp_listcomp$tuple_unpack_4__element_1;
            {
                PyObject *old = outline_3_var_w_bot;
                outline_3_var_w_bot = tmp_assign_source_35;
                Py_INCREF(outline_3_var_w_bot);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_1);
        tmp_listcomp$tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_2);
            tmp_assign_source_36 = tmp_listcomp$tuple_unpack_4__element_2;
            {
                PyObject *old = outline_3_var_b;
                outline_3_var_b = tmp_assign_source_36;
                Py_INCREF(outline_3_var_b);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_2);
        tmp_listcomp$tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_w_bot);
            tmp_truediv_expr_left_1 = outline_3_var_w_bot;
            CHECK_OBJECT(outline_3_var_b);
            tmp_truediv_expr_right_1 = outline_3_var_b;
            tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            if (tmp_int_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }
            tmp_append_value_4 = PyNumber_Int(tmp_int_arg_2);
            Py_DECREF(tmp_int_arg_2);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "oo";
                goto try_except_handler_15;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_2 = "oo";
            goto try_except_handler_15;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_28 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_4;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_14;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ef08806edfae42e30b1ff66a95a6eaac_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ef08806edfae42e30b1ff66a95a6eaac_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ef08806edfae42e30b1ff66a95a6eaac_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ef08806edfae42e30b1ff66a95a6eaac_5,
            type_description_2,
            outline_3_var_w_bot,
            outline_3_var_b
        );


        // Release cached frame if used for exception.
        if (frame_ef08806edfae42e30b1ff66a95a6eaac_5 == cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5);
            cache_frame_ef08806edfae42e30b1ff66a95a6eaac_5 = NULL;
        }

        assertFrameObject(frame_ef08806edfae42e30b1ff66a95a6eaac_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oooooo";
        goto try_except_handler_14;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_XDECREF(outline_3_var_w_bot);
        outline_3_var_w_bot = NULL;
        Py_XDECREF(outline_3_var_b);
        outline_3_var_b = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_w_bot);
        outline_3_var_w_bot = NULL;
        Py_XDECREF(outline_3_var_b);
        outline_3_var_b = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 298;
        goto frame_exception_exit_1;
        outline_result_4:;
        {
            PyObject *old = par_stage_widths;
            assert(old != NULL);
            par_stage_widths = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85034b37c3345cc576ba093c6facbbc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85034b37c3345cc576ba093c6facbbc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85034b37c3345cc576ba093c6facbbc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85034b37c3345cc576ba093c6facbbc2,
        type_description_1,
        par_stage_widths,
        par_bottleneck_ratios,
        par_group_widths,
        var_widths,
        var_group_widths_min,
        var_ws_bot
    );


    // Release cached frame if used for exception.
    if (frame_85034b37c3345cc576ba093c6facbbc2 == cache_frame_85034b37c3345cc576ba093c6facbbc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85034b37c3345cc576ba093c6facbbc2);
        cache_frame_85034b37c3345cc576ba093c6facbbc2 = NULL;
    }

    assertFrameObject(frame_85034b37c3345cc576ba093c6facbbc2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_5:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_stage_widths);
        tmp_tuple_element_1 = par_stage_widths;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_group_widths_min);
        tmp_tuple_element_1 = var_group_widths_min;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stage_widths);
    Py_DECREF(par_stage_widths);
    par_stage_widths = NULL;
    CHECK_OBJECT(var_widths);
    Py_DECREF(var_widths);
    var_widths = NULL;
    CHECK_OBJECT(var_group_widths_min);
    Py_DECREF(var_group_widths_min);
    var_group_widths_min = NULL;
    CHECK_OBJECT(var_ws_bot);
    Py_DECREF(var_ws_bot);
    var_ws_bot = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_stage_widths);
    Py_DECREF(par_stage_widths);
    par_stage_widths = NULL;
    Py_XDECREF(var_widths);
    var_widths = NULL;
    Py_XDECREF(var_group_widths_min);
    var_group_widths_min = NULL;
    Py_XDECREF(var_ws_bot);
    var_ws_bot = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bottleneck_ratios);
    Py_DECREF(par_bottleneck_ratios);
    CHECK_OBJECT(par_group_widths);
    Py_DECREF(par_group_widths);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bottleneck_ratios);
    Py_DECREF(par_bottleneck_ratios);
    CHECK_OBJECT(par_group_widths);
    Py_DECREF(par_group_widths);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__10___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_block_params = python_pars[1];
    PyObject *par_num_classes = python_pars[2];
    PyObject *par_stem_width = python_pars[3];
    PyObject *par_stem_type = python_pars[4];
    PyObject *par_block_type = python_pars[5];
    PyObject *par_norm_layer = python_pars[6];
    PyObject *par_activation = python_pars[7];
    PyObject *var_current_width = NULL;
    PyObject *var_blocks = NULL;
    PyObject *var_i = NULL;
    PyObject *var_width_out = NULL;
    PyObject *var_stride = NULL;
    PyObject *var_depth = NULL;
    PyObject *var_group_width = NULL;
    PyObject *var_bottleneck_multiplier = NULL;
    PyObject *var_m = NULL;
    PyObject *var_fan_out = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9894675c4060138b6552489f693624cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_9894675c4060138b6552489f693624cc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9894675c4060138b6552489f693624cc)) {
        Py_XDECREF(cache_frame_9894675c4060138b6552489f693624cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9894675c4060138b6552489f693624cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9894675c4060138b6552489f693624cc = MAKE_FUNCTION_FRAME(codeobj_9894675c4060138b6552489f693624cc, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9894675c4060138b6552489f693624cc->m_type_description == NULL);
    frame_9894675c4060138b6552489f693624cc = cache_frame_9894675c4060138b6552489f693624cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9894675c4060138b6552489f693624cc);
    assert(Py_REFCNT(frame_9894675c4060138b6552489f693624cc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$regnet, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 313;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 314;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_stem_type);
        tmp_cmp_expr_left_1 = par_stem_type;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stem_type;
            assert(old != NULL);
            par_stem_type = tmp_assign_source_1;
            Py_INCREF(par_stem_type);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_norm_layer);
        tmp_cmp_expr_left_2 = par_norm_layer;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_norm_layer;
            assert(old != NULL);
            par_norm_layer = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_block_type);
        tmp_cmp_expr_left_3 = par_block_type;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_block_type;
            assert(old != NULL);
            par_block_type = tmp_assign_source_3;
            Py_INCREF(par_block_type);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_activation);
        tmp_cmp_expr_left_4 = par_activation;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_activation;
            assert(old != NULL);
            par_activation = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_stem_type);
        tmp_called_value_2 = par_stem_type;
        tmp_args_element_value_2 = mod_consts[2];
        CHECK_OBJECT(par_stem_width);
        tmp_args_element_value_3 = par_stem_width;
        CHECK_OBJECT(par_norm_layer);
        tmp_args_element_value_4 = par_norm_layer;
        CHECK_OBJECT(par_activation);
        tmp_args_element_value_5 = par_activation;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[70], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(par_stem_width);
        tmp_assign_source_5 = par_stem_width;
        assert(var_current_width == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_current_width = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_blocks == NULL);
        var_blocks = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_2;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_block_params);
        tmp_called_instance_2 = par_block_params;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 342;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[71]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 342;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooc";
                exception_lineno = 336;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "ooooooooooooooooooc";
                    exception_lineno = 336;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[55];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
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
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_3, 0, 5);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_4, 1, 5);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_5, 2, 5);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_6, 3, 5);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_4;
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_7, 4, 5);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_5;
            tmp_tuple_unpack_2__element_5 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooc";
                    exception_lineno = 336;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[72];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooc";
            exception_lineno = 336;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_width_out;
            var_width_out = tmp_assign_source_19;
            Py_INCREF(var_width_out);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_stride;
            var_stride = tmp_assign_source_20;
            Py_INCREF(var_stride);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_depth;
            var_depth = tmp_assign_source_21;
            Py_INCREF(var_depth);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_4;
        {
            PyObject *old = var_group_width;
            var_group_width = tmp_assign_source_22;
            Py_INCREF(var_group_width);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_5);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_5;
        {
            PyObject *old = var_bottleneck_multiplier;
            var_bottleneck_multiplier = tmp_assign_source_23;
            Py_INCREF(var_bottleneck_multiplier);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        if (var_blocks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_blocks;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[74]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[34];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_i);
            tmp_add_expr_left_1 = var_i;
            tmp_add_expr_right_1 = mod_consts[8];
            tmp_format_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[35];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_1 = PyUnicode_Join(mod_consts[35], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_kw_call_arg_value_2_1;
            PyObject *tmp_kw_call_arg_value_3_1;
            PyObject *tmp_kw_call_arg_value_4_1;
            PyObject *tmp_kw_call_arg_value_5_1;
            PyObject *tmp_kw_call_arg_value_6_1;
            PyObject *tmp_kw_call_arg_value_7_1;
            PyObject *tmp_kw_call_arg_value_8_1;
            PyObject *tmp_kw_call_arg_value_9_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyTuple_SET_ITEM(tmp_args_element_value_7, 0, tmp_tuple_element_1);
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }
            if (var_current_width == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 347;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }

            tmp_kw_call_arg_value_0_1 = var_current_width;
            CHECK_OBJECT(var_width_out);
            tmp_kw_call_arg_value_1_1 = var_width_out;
            CHECK_OBJECT(var_stride);
            tmp_kw_call_arg_value_2_1 = var_stride;
            CHECK_OBJECT(var_depth);
            tmp_kw_call_arg_value_3_1 = var_depth;
            if (par_block_type == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 351;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }

            tmp_kw_call_arg_value_4_1 = par_block_type;
            if (par_norm_layer == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 352;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }

            tmp_kw_call_arg_value_5_1 = par_norm_layer;
            if (par_activation == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 353;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }

            tmp_kw_call_arg_value_6_1 = par_activation;
            CHECK_OBJECT(var_group_width);
            tmp_kw_call_arg_value_7_1 = var_group_width;
            CHECK_OBJECT(var_bottleneck_multiplier);
            tmp_kw_call_arg_value_8_1 = var_bottleneck_multiplier;
            if (par_block_params == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_4 = par_block_params;
            tmp_kw_call_arg_value_9_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
            if (tmp_kw_call_arg_value_9_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_i);
            tmp_add_expr_left_2 = var_i;
            tmp_add_expr_right_2 = mod_consts[8];
            tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_9_1);

                exception_lineno = 357;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }
            frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 346;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS10_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[79]);
            }

            Py_DECREF(tmp_kw_call_arg_value_9_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooooooooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 343;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(var_width_out);
        tmp_assign_source_24 = var_width_out;
        {
            PyObject *old = var_current_width;
            var_current_width = tmp_assign_source_24;
            Py_INCREF(var_current_width);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 336;
        type_description_1 = "ooooooooooooooooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[80]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (var_blocks == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_blocks;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 364;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 364;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 366;
        tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[82],
            PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[84], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[85]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (var_current_width == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = var_current_width;
        CHECK_OBJECT(par_num_classes);
        tmp_kw_call_value_1_1 = par_num_classes;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 367;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[86]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[87], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 370;
        tmp_iter_arg_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[88]);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooc";
                exception_lineno = 370;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_27 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_27;
            Py_INCREF(var_m);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_1 = var_m;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[89]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_m);
        tmp_expression_value_9 = var_m;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[90]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_subscript_value_1 = mod_consts[27];
        tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_11 = var_m;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[90]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_subscript_value_2 = mod_consts[8];
        tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_12 = var_m;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[91]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_assign_source_28 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_fan_out;
            var_fan_out = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[92]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[93]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_15 = var_m;
        tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[94]);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_kw_call_dict_value_0_2 = mod_consts[95];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[96]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_truediv_expr_left_1 = mod_consts[97];
        CHECK_OBJECT(var_fan_out);
        tmp_truediv_expr_right_1 = var_fan_out;
        tmp_args_element_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 374;
        tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 374;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[98]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_2 = var_m;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[67]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[92]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[99]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_20 = var_m;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[94]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 376;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[92]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[100]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_23 = var_m;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[101]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 377;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_3 = var_m;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[85]);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[92]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[93]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_27 = var_m;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[94]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[102]);
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 379;
        tmp_call_result_7 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[92]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[100]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_30 = var_m;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[101]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        frame_9894675c4060138b6552489f693624cc->m_frame.f_lineno = 380;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_7:;
    branch_end_6:;
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 370;
        type_description_1 = "ooooooooooooooooooc";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9894675c4060138b6552489f693624cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9894675c4060138b6552489f693624cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9894675c4060138b6552489f693624cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9894675c4060138b6552489f693624cc,
        type_description_1,
        par_self,
        par_block_params,
        par_num_classes,
        par_stem_width,
        par_stem_type,
        par_block_type,
        par_norm_layer,
        par_activation,
        var_current_width,
        var_blocks,
        var_i,
        var_width_out,
        var_stride,
        var_depth,
        var_group_width,
        var_bottleneck_multiplier,
        var_m,
        var_fan_out,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9894675c4060138b6552489f693624cc == cache_frame_9894675c4060138b6552489f693624cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9894675c4060138b6552489f693624cc);
        cache_frame_9894675c4060138b6552489f693624cc = NULL;
    }

    assertFrameObject(frame_9894675c4060138b6552489f693624cc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stem_type);
    Py_DECREF(par_stem_type);
    par_stem_type = NULL;
    Py_XDECREF(par_block_type);
    par_block_type = NULL;
    Py_XDECREF(par_norm_layer);
    par_norm_layer = NULL;
    Py_XDECREF(par_activation);
    par_activation = NULL;
    Py_XDECREF(var_current_width);
    var_current_width = NULL;
    Py_XDECREF(var_blocks);
    var_blocks = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_width_out);
    var_width_out = NULL;
    Py_XDECREF(var_stride);
    var_stride = NULL;
    Py_XDECREF(var_depth);
    var_depth = NULL;
    Py_XDECREF(var_group_width);
    var_group_width = NULL;
    Py_XDECREF(var_bottleneck_multiplier);
    var_bottleneck_multiplier = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_fan_out);
    var_fan_out = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_stem_type);
    par_stem_type = NULL;
    Py_XDECREF(par_block_type);
    par_block_type = NULL;
    Py_XDECREF(par_norm_layer);
    par_norm_layer = NULL;
    Py_XDECREF(par_activation);
    par_activation = NULL;
    Py_XDECREF(var_current_width);
    var_current_width = NULL;
    Py_XDECREF(var_blocks);
    var_blocks = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_width_out);
    var_width_out = NULL;
    Py_XDECREF(var_stride);
    var_stride = NULL;
    Py_XDECREF(var_depth);
    var_depth = NULL;
    Py_XDECREF(var_group_width);
    var_group_width = NULL;
    Py_XDECREF(var_bottleneck_multiplier);
    var_bottleneck_multiplier = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_fan_out);
    var_fan_out = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_block_params);
    Py_DECREF(par_block_params);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_stem_width);
    Py_DECREF(par_stem_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_block_params);
    Py_DECREF(par_block_params);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_stem_width);
    Py_DECREF(par_stem_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__11_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_a2fcd1c4b10dc748a541b20c53327f84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2fcd1c4b10dc748a541b20c53327f84 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a2fcd1c4b10dc748a541b20c53327f84)) {
        Py_XDECREF(cache_frame_a2fcd1c4b10dc748a541b20c53327f84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2fcd1c4b10dc748a541b20c53327f84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2fcd1c4b10dc748a541b20c53327f84 = MAKE_FUNCTION_FRAME(codeobj_a2fcd1c4b10dc748a541b20c53327f84, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2fcd1c4b10dc748a541b20c53327f84->m_type_description == NULL);
    frame_a2fcd1c4b10dc748a541b20c53327f84 = cache_frame_a2fcd1c4b10dc748a541b20c53327f84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a2fcd1c4b10dc748a541b20c53327f84);
    assert(Py_REFCNT(frame_a2fcd1c4b10dc748a541b20c53327f84) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_a2fcd1c4b10dc748a541b20c53327f84->m_frame.f_lineno = 383;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[70], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_a2fcd1c4b10dc748a541b20c53327f84->m_frame.f_lineno = 384;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[81], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_a2fcd1c4b10dc748a541b20c53327f84->m_frame.f_lineno = 386;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[84], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a2fcd1c4b10dc748a541b20c53327f84->m_frame.f_lineno = 387;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[105]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_4 = par_x;
        frame_a2fcd1c4b10dc748a541b20c53327f84->m_frame.f_lineno = 388;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[87], tmp_args_element_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a2fcd1c4b10dc748a541b20c53327f84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2fcd1c4b10dc748a541b20c53327f84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2fcd1c4b10dc748a541b20c53327f84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2fcd1c4b10dc748a541b20c53327f84,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_a2fcd1c4b10dc748a541b20c53327f84 == cache_frame_a2fcd1c4b10dc748a541b20c53327f84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2fcd1c4b10dc748a541b20c53327f84);
        cache_frame_a2fcd1c4b10dc748a541b20c53327f84 = NULL;
    }

    assertFrameObject(frame_a2fcd1c4b10dc748a541b20c53327f84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$regnet$$$function__12__regnet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arch = python_pars[0];
    PyObject *par_block_params = python_pars[1];
    PyObject *par_pretrained = python_pars[2];
    PyObject *par_progress = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_norm_layer = NULL;
    PyObject *var_model = NULL;
    PyObject *var_state_dict = NULL;
    struct Nuitka_FrameObject *frame_40ae1a3b4378dcd723b2d38706aa2a15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_40ae1a3b4378dcd723b2d38706aa2a15 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_40ae1a3b4378dcd723b2d38706aa2a15)) {
        Py_XDECREF(cache_frame_40ae1a3b4378dcd723b2d38706aa2a15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_40ae1a3b4378dcd723b2d38706aa2a15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_40ae1a3b4378dcd723b2d38706aa2a15 = MAKE_FUNCTION_FRAME(codeobj_40ae1a3b4378dcd723b2d38706aa2a15, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_40ae1a3b4378dcd723b2d38706aa2a15->m_type_description == NULL);
    frame_40ae1a3b4378dcd723b2d38706aa2a15 = cache_frame_40ae1a3b4378dcd723b2d38706aa2a15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_40ae1a3b4378dcd723b2d38706aa2a15);
    assert(Py_REFCNT(frame_40ae1a3b4378dcd723b2d38706aa2a15) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[21];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[107]);
        frame_40ae1a3b4378dcd723b2d38706aa2a15->m_frame.f_lineno = 394;
        tmp_default_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_default_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        Py_DECREF(tmp_default_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_norm_layer == NULL);
        var_norm_layer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_block_params);
        tmp_tuple_element_2 = par_block_params;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        tmp_dict_key_1 = mod_consts[21];
        CHECK_OBJECT(var_norm_layer);
        tmp_dict_value_1 = var_norm_layer;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_2 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_model == NULL);
        var_model = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_arch);
        tmp_cmp_expr_left_1 = par_arch;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[110];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_arch);
            tmp_format_value_1 = par_arch;
            tmp_format_spec_1 = mod_consts[35];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[35], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_40ae1a3b4378dcd723b2d38706aa2a15->m_frame.f_lineno = 398;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 398;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arch);
        tmp_subscript_value_1 = par_arch;
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progress);
        tmp_kw_call_dict_value_0_1 = par_progress;
        frame_40ae1a3b4378dcd723b2d38706aa2a15->m_frame.f_lineno = 399;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[112]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state_dict == NULL);
        var_state_dict = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_model);
        tmp_called_instance_1 = var_model;
        CHECK_OBJECT(var_state_dict);
        tmp_args_element_value_1 = var_state_dict;
        frame_40ae1a3b4378dcd723b2d38706aa2a15->m_frame.f_lineno = 400;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[113], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (var_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 401;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_model;
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
        exception_tb = MAKE_TRACEBACK(frame_40ae1a3b4378dcd723b2d38706aa2a15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40ae1a3b4378dcd723b2d38706aa2a15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40ae1a3b4378dcd723b2d38706aa2a15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_40ae1a3b4378dcd723b2d38706aa2a15,
        type_description_1,
        par_arch,
        par_block_params,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_norm_layer,
        var_model,
        var_state_dict
    );


    // Release cached frame if used for exception.
    if (frame_40ae1a3b4378dcd723b2d38706aa2a15 == cache_frame_40ae1a3b4378dcd723b2d38706aa2a15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_40ae1a3b4378dcd723b2d38706aa2a15);
        cache_frame_40ae1a3b4378dcd723b2d38706aa2a15 = NULL;
    }

    assertFrameObject(frame_40ae1a3b4378dcd723b2d38706aa2a15);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_norm_layer);
    Py_DECREF(var_norm_layer);
    var_norm_layer = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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

    Py_XDECREF(var_norm_layer);
    var_norm_layer = NULL;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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
    CHECK_OBJECT(par_arch);
    Py_DECREF(par_arch);
    CHECK_OBJECT(par_block_params);
    Py_DECREF(par_block_params);
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arch);
    Py_DECREF(par_arch);
    CHECK_OBJECT(par_block_params);
    Py_DECREF(par_block_params);
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__13_regnet_y_400mf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_f45b653811a541b055d0886f5565ecf6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f45b653811a541b055d0886f5565ecf6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f45b653811a541b055d0886f5565ecf6)) {
        Py_XDECREF(cache_frame_f45b653811a541b055d0886f5565ecf6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f45b653811a541b055d0886f5565ecf6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f45b653811a541b055d0886f5565ecf6 = MAKE_FUNCTION_FRAME(codeobj_f45b653811a541b055d0886f5565ecf6, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f45b653811a541b055d0886f5565ecf6->m_type_description == NULL);
    frame_f45b653811a541b055d0886f5565ecf6 = cache_frame_f45b653811a541b055d0886f5565ecf6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f45b653811a541b055d0886f5565ecf6);
    assert(Py_REFCNT(frame_f45b653811a541b055d0886f5565ecf6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[117]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[119];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
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
        exception_tb = MAKE_TRACEBACK(frame_f45b653811a541b055d0886f5565ecf6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f45b653811a541b055d0886f5565ecf6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f45b653811a541b055d0886f5565ecf6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f45b653811a541b055d0886f5565ecf6,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_f45b653811a541b055d0886f5565ecf6 == cache_frame_f45b653811a541b055d0886f5565ecf6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f45b653811a541b055d0886f5565ecf6);
        cache_frame_f45b653811a541b055d0886f5565ecf6 = NULL;
    }

    assertFrameObject(frame_f45b653811a541b055d0886f5565ecf6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__14_regnet_y_800mf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_abebfbbb1412713b584c9407f18699da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_abebfbbb1412713b584c9407f18699da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_abebfbbb1412713b584c9407f18699da)) {
        Py_XDECREF(cache_frame_abebfbbb1412713b584c9407f18699da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_abebfbbb1412713b584c9407f18699da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_abebfbbb1412713b584c9407f18699da = MAKE_FUNCTION_FRAME(codeobj_abebfbbb1412713b584c9407f18699da, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_abebfbbb1412713b584c9407f18699da->m_type_description == NULL);
    frame_abebfbbb1412713b584c9407f18699da = cache_frame_abebfbbb1412713b584c9407f18699da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_abebfbbb1412713b584c9407f18699da);
    assert(Py_REFCNT(frame_abebfbbb1412713b584c9407f18699da) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[121]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[122];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
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
        exception_tb = MAKE_TRACEBACK(frame_abebfbbb1412713b584c9407f18699da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_abebfbbb1412713b584c9407f18699da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_abebfbbb1412713b584c9407f18699da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_abebfbbb1412713b584c9407f18699da,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_abebfbbb1412713b584c9407f18699da == cache_frame_abebfbbb1412713b584c9407f18699da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_abebfbbb1412713b584c9407f18699da);
        cache_frame_abebfbbb1412713b584c9407f18699da = NULL;
    }

    assertFrameObject(frame_abebfbbb1412713b584c9407f18699da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__15_regnet_y_1_6gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_31622e7d7c9a7ccf1adb21bf7ee4ea12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12)) {
        Py_XDECREF(cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12 = MAKE_FUNCTION_FRAME(codeobj_31622e7d7c9a7ccf1adb21bf7ee4ea12, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12->m_type_description == NULL);
    frame_31622e7d7c9a7ccf1adb21bf7ee4ea12 = cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31622e7d7c9a7ccf1adb21bf7ee4ea12);
    assert(Py_REFCNT(frame_31622e7d7c9a7ccf1adb21bf7ee4ea12) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[124]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[125];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
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
        exception_tb = MAKE_TRACEBACK(frame_31622e7d7c9a7ccf1adb21bf7ee4ea12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31622e7d7c9a7ccf1adb21bf7ee4ea12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31622e7d7c9a7ccf1adb21bf7ee4ea12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31622e7d7c9a7ccf1adb21bf7ee4ea12,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_31622e7d7c9a7ccf1adb21bf7ee4ea12 == cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12);
        cache_frame_31622e7d7c9a7ccf1adb21bf7ee4ea12 = NULL;
    }

    assertFrameObject(frame_31622e7d7c9a7ccf1adb21bf7ee4ea12);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__16_regnet_y_3_2gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_4f65ba3ba68e9c10f3a215aca614a46d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f65ba3ba68e9c10f3a215aca614a46d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f65ba3ba68e9c10f3a215aca614a46d)) {
        Py_XDECREF(cache_frame_4f65ba3ba68e9c10f3a215aca614a46d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f65ba3ba68e9c10f3a215aca614a46d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f65ba3ba68e9c10f3a215aca614a46d = MAKE_FUNCTION_FRAME(codeobj_4f65ba3ba68e9c10f3a215aca614a46d, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f65ba3ba68e9c10f3a215aca614a46d->m_type_description == NULL);
    frame_4f65ba3ba68e9c10f3a215aca614a46d = cache_frame_4f65ba3ba68e9c10f3a215aca614a46d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f65ba3ba68e9c10f3a215aca614a46d);
    assert(Py_REFCNT(frame_4f65ba3ba68e9c10f3a215aca614a46d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[127]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[128];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
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
        exception_tb = MAKE_TRACEBACK(frame_4f65ba3ba68e9c10f3a215aca614a46d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f65ba3ba68e9c10f3a215aca614a46d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f65ba3ba68e9c10f3a215aca614a46d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f65ba3ba68e9c10f3a215aca614a46d,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_4f65ba3ba68e9c10f3a215aca614a46d == cache_frame_4f65ba3ba68e9c10f3a215aca614a46d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f65ba3ba68e9c10f3a215aca614a46d);
        cache_frame_4f65ba3ba68e9c10f3a215aca614a46d = NULL;
    }

    assertFrameObject(frame_4f65ba3ba68e9c10f3a215aca614a46d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__17_regnet_y_8gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_259acd052c1ede10457b7ba5c8bd6c7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_259acd052c1ede10457b7ba5c8bd6c7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_259acd052c1ede10457b7ba5c8bd6c7e)) {
        Py_XDECREF(cache_frame_259acd052c1ede10457b7ba5c8bd6c7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_259acd052c1ede10457b7ba5c8bd6c7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_259acd052c1ede10457b7ba5c8bd6c7e = MAKE_FUNCTION_FRAME(codeobj_259acd052c1ede10457b7ba5c8bd6c7e, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_259acd052c1ede10457b7ba5c8bd6c7e->m_type_description == NULL);
    frame_259acd052c1ede10457b7ba5c8bd6c7e = cache_frame_259acd052c1ede10457b7ba5c8bd6c7e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_259acd052c1ede10457b7ba5c8bd6c7e);
    assert(Py_REFCNT(frame_259acd052c1ede10457b7ba5c8bd6c7e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[130]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[131];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
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
        exception_tb = MAKE_TRACEBACK(frame_259acd052c1ede10457b7ba5c8bd6c7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_259acd052c1ede10457b7ba5c8bd6c7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_259acd052c1ede10457b7ba5c8bd6c7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_259acd052c1ede10457b7ba5c8bd6c7e,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_259acd052c1ede10457b7ba5c8bd6c7e == cache_frame_259acd052c1ede10457b7ba5c8bd6c7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_259acd052c1ede10457b7ba5c8bd6c7e);
        cache_frame_259acd052c1ede10457b7ba5c8bd6c7e = NULL;
    }

    assertFrameObject(frame_259acd052c1ede10457b7ba5c8bd6c7e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__18_regnet_y_16gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_9747e5f58b20ca2010d43612c33d75a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9747e5f58b20ca2010d43612c33d75a9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9747e5f58b20ca2010d43612c33d75a9)) {
        Py_XDECREF(cache_frame_9747e5f58b20ca2010d43612c33d75a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9747e5f58b20ca2010d43612c33d75a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9747e5f58b20ca2010d43612c33d75a9 = MAKE_FUNCTION_FRAME(codeobj_9747e5f58b20ca2010d43612c33d75a9, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9747e5f58b20ca2010d43612c33d75a9->m_type_description == NULL);
    frame_9747e5f58b20ca2010d43612c33d75a9 = cache_frame_9747e5f58b20ca2010d43612c33d75a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9747e5f58b20ca2010d43612c33d75a9);
    assert(Py_REFCNT(frame_9747e5f58b20ca2010d43612c33d75a9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[133]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[134];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
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
        exception_tb = MAKE_TRACEBACK(frame_9747e5f58b20ca2010d43612c33d75a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9747e5f58b20ca2010d43612c33d75a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9747e5f58b20ca2010d43612c33d75a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9747e5f58b20ca2010d43612c33d75a9,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_9747e5f58b20ca2010d43612c33d75a9 == cache_frame_9747e5f58b20ca2010d43612c33d75a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9747e5f58b20ca2010d43612c33d75a9);
        cache_frame_9747e5f58b20ca2010d43612c33d75a9 = NULL;
    }

    assertFrameObject(frame_9747e5f58b20ca2010d43612c33d75a9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__19_regnet_y_32gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_22364210bf382bb334119dd59d08118b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_22364210bf382bb334119dd59d08118b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_22364210bf382bb334119dd59d08118b)) {
        Py_XDECREF(cache_frame_22364210bf382bb334119dd59d08118b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22364210bf382bb334119dd59d08118b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22364210bf382bb334119dd59d08118b = MAKE_FUNCTION_FRAME(codeobj_22364210bf382bb334119dd59d08118b, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22364210bf382bb334119dd59d08118b->m_type_description == NULL);
    frame_22364210bf382bb334119dd59d08118b = cache_frame_22364210bf382bb334119dd59d08118b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_22364210bf382bb334119dd59d08118b);
    assert(Py_REFCNT(frame_22364210bf382bb334119dd59d08118b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[136]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[137];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
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
        exception_tb = MAKE_TRACEBACK(frame_22364210bf382bb334119dd59d08118b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22364210bf382bb334119dd59d08118b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22364210bf382bb334119dd59d08118b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22364210bf382bb334119dd59d08118b,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_22364210bf382bb334119dd59d08118b == cache_frame_22364210bf382bb334119dd59d08118b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22364210bf382bb334119dd59d08118b);
        cache_frame_22364210bf382bb334119dd59d08118b = NULL;
    }

    assertFrameObject(frame_22364210bf382bb334119dd59d08118b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__20_regnet_y_128gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_e744cb27df934ae2a901c7d5e17f21ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e744cb27df934ae2a901c7d5e17f21ed = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e744cb27df934ae2a901c7d5e17f21ed)) {
        Py_XDECREF(cache_frame_e744cb27df934ae2a901c7d5e17f21ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e744cb27df934ae2a901c7d5e17f21ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e744cb27df934ae2a901c7d5e17f21ed = MAKE_FUNCTION_FRAME(codeobj_e744cb27df934ae2a901c7d5e17f21ed, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e744cb27df934ae2a901c7d5e17f21ed->m_type_description == NULL);
    frame_e744cb27df934ae2a901c7d5e17f21ed = cache_frame_e744cb27df934ae2a901c7d5e17f21ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e744cb27df934ae2a901c7d5e17f21ed);
    assert(Py_REFCNT(frame_e744cb27df934ae2a901c7d5e17f21ed) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[139]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[140];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
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
        exception_tb = MAKE_TRACEBACK(frame_e744cb27df934ae2a901c7d5e17f21ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e744cb27df934ae2a901c7d5e17f21ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e744cb27df934ae2a901c7d5e17f21ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e744cb27df934ae2a901c7d5e17f21ed,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_e744cb27df934ae2a901c7d5e17f21ed == cache_frame_e744cb27df934ae2a901c7d5e17f21ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e744cb27df934ae2a901c7d5e17f21ed);
        cache_frame_e744cb27df934ae2a901c7d5e17f21ed = NULL;
    }

    assertFrameObject(frame_e744cb27df934ae2a901c7d5e17f21ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__21_regnet_x_400mf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_f35f3599c10974bd0976386593e70f4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f35f3599c10974bd0976386593e70f4b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f35f3599c10974bd0976386593e70f4b)) {
        Py_XDECREF(cache_frame_f35f3599c10974bd0976386593e70f4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f35f3599c10974bd0976386593e70f4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f35f3599c10974bd0976386593e70f4b = MAKE_FUNCTION_FRAME(codeobj_f35f3599c10974bd0976386593e70f4b, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f35f3599c10974bd0976386593e70f4b->m_type_description == NULL);
    frame_f35f3599c10974bd0976386593e70f4b = cache_frame_f35f3599c10974bd0976386593e70f4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f35f3599c10974bd0976386593e70f4b);
    assert(Py_REFCNT(frame_f35f3599c10974bd0976386593e70f4b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[142]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[143];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
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
        exception_tb = MAKE_TRACEBACK(frame_f35f3599c10974bd0976386593e70f4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f35f3599c10974bd0976386593e70f4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f35f3599c10974bd0976386593e70f4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f35f3599c10974bd0976386593e70f4b,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_f35f3599c10974bd0976386593e70f4b == cache_frame_f35f3599c10974bd0976386593e70f4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f35f3599c10974bd0976386593e70f4b);
        cache_frame_f35f3599c10974bd0976386593e70f4b = NULL;
    }

    assertFrameObject(frame_f35f3599c10974bd0976386593e70f4b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__22_regnet_x_800mf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_4543672a6f308be83f2af5dc0ace2662;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4543672a6f308be83f2af5dc0ace2662 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4543672a6f308be83f2af5dc0ace2662)) {
        Py_XDECREF(cache_frame_4543672a6f308be83f2af5dc0ace2662);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4543672a6f308be83f2af5dc0ace2662 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4543672a6f308be83f2af5dc0ace2662 = MAKE_FUNCTION_FRAME(codeobj_4543672a6f308be83f2af5dc0ace2662, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4543672a6f308be83f2af5dc0ace2662->m_type_description == NULL);
    frame_4543672a6f308be83f2af5dc0ace2662 = cache_frame_4543672a6f308be83f2af5dc0ace2662;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4543672a6f308be83f2af5dc0ace2662);
    assert(Py_REFCNT(frame_4543672a6f308be83f2af5dc0ace2662) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[145]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[146];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
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
        exception_tb = MAKE_TRACEBACK(frame_4543672a6f308be83f2af5dc0ace2662, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4543672a6f308be83f2af5dc0ace2662->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4543672a6f308be83f2af5dc0ace2662, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4543672a6f308be83f2af5dc0ace2662,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_4543672a6f308be83f2af5dc0ace2662 == cache_frame_4543672a6f308be83f2af5dc0ace2662) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4543672a6f308be83f2af5dc0ace2662);
        cache_frame_4543672a6f308be83f2af5dc0ace2662 = NULL;
    }

    assertFrameObject(frame_4543672a6f308be83f2af5dc0ace2662);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__23_regnet_x_1_6gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_94e9da0ddad59357fa3768fef1d7c12f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_94e9da0ddad59357fa3768fef1d7c12f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94e9da0ddad59357fa3768fef1d7c12f)) {
        Py_XDECREF(cache_frame_94e9da0ddad59357fa3768fef1d7c12f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94e9da0ddad59357fa3768fef1d7c12f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94e9da0ddad59357fa3768fef1d7c12f = MAKE_FUNCTION_FRAME(codeobj_94e9da0ddad59357fa3768fef1d7c12f, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94e9da0ddad59357fa3768fef1d7c12f->m_type_description == NULL);
    frame_94e9da0ddad59357fa3768fef1d7c12f = cache_frame_94e9da0ddad59357fa3768fef1d7c12f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94e9da0ddad59357fa3768fef1d7c12f);
    assert(Py_REFCNT(frame_94e9da0ddad59357fa3768fef1d7c12f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[148]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[149];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
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
        exception_tb = MAKE_TRACEBACK(frame_94e9da0ddad59357fa3768fef1d7c12f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94e9da0ddad59357fa3768fef1d7c12f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94e9da0ddad59357fa3768fef1d7c12f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94e9da0ddad59357fa3768fef1d7c12f,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_94e9da0ddad59357fa3768fef1d7c12f == cache_frame_94e9da0ddad59357fa3768fef1d7c12f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94e9da0ddad59357fa3768fef1d7c12f);
        cache_frame_94e9da0ddad59357fa3768fef1d7c12f = NULL;
    }

    assertFrameObject(frame_94e9da0ddad59357fa3768fef1d7c12f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__24_regnet_x_3_2gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_f73ebf8c5c87891bb533a86506959d7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f73ebf8c5c87891bb533a86506959d7d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f73ebf8c5c87891bb533a86506959d7d)) {
        Py_XDECREF(cache_frame_f73ebf8c5c87891bb533a86506959d7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f73ebf8c5c87891bb533a86506959d7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f73ebf8c5c87891bb533a86506959d7d = MAKE_FUNCTION_FRAME(codeobj_f73ebf8c5c87891bb533a86506959d7d, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f73ebf8c5c87891bb533a86506959d7d->m_type_description == NULL);
    frame_f73ebf8c5c87891bb533a86506959d7d = cache_frame_f73ebf8c5c87891bb533a86506959d7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f73ebf8c5c87891bb533a86506959d7d);
    assert(Py_REFCNT(frame_f73ebf8c5c87891bb533a86506959d7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[151]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[152];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
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
        exception_tb = MAKE_TRACEBACK(frame_f73ebf8c5c87891bb533a86506959d7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f73ebf8c5c87891bb533a86506959d7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f73ebf8c5c87891bb533a86506959d7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f73ebf8c5c87891bb533a86506959d7d,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_f73ebf8c5c87891bb533a86506959d7d == cache_frame_f73ebf8c5c87891bb533a86506959d7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f73ebf8c5c87891bb533a86506959d7d);
        cache_frame_f73ebf8c5c87891bb533a86506959d7d = NULL;
    }

    assertFrameObject(frame_f73ebf8c5c87891bb533a86506959d7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__25_regnet_x_8gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_e24d86b510b78bf52d59ae473aea38e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e24d86b510b78bf52d59ae473aea38e3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e24d86b510b78bf52d59ae473aea38e3)) {
        Py_XDECREF(cache_frame_e24d86b510b78bf52d59ae473aea38e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e24d86b510b78bf52d59ae473aea38e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e24d86b510b78bf52d59ae473aea38e3 = MAKE_FUNCTION_FRAME(codeobj_e24d86b510b78bf52d59ae473aea38e3, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e24d86b510b78bf52d59ae473aea38e3->m_type_description == NULL);
    frame_e24d86b510b78bf52d59ae473aea38e3 = cache_frame_e24d86b510b78bf52d59ae473aea38e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e24d86b510b78bf52d59ae473aea38e3);
    assert(Py_REFCNT(frame_e24d86b510b78bf52d59ae473aea38e3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[154]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[155];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
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
        exception_tb = MAKE_TRACEBACK(frame_e24d86b510b78bf52d59ae473aea38e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e24d86b510b78bf52d59ae473aea38e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e24d86b510b78bf52d59ae473aea38e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e24d86b510b78bf52d59ae473aea38e3,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_e24d86b510b78bf52d59ae473aea38e3 == cache_frame_e24d86b510b78bf52d59ae473aea38e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e24d86b510b78bf52d59ae473aea38e3);
        cache_frame_e24d86b510b78bf52d59ae473aea38e3 = NULL;
    }

    assertFrameObject(frame_e24d86b510b78bf52d59ae473aea38e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__26_regnet_x_16gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_c3e9c05bfa94432c3337bd7cc93bcd1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a)) {
        Py_XDECREF(cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a = MAKE_FUNCTION_FRAME(codeobj_c3e9c05bfa94432c3337bd7cc93bcd1a, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a->m_type_description == NULL);
    frame_c3e9c05bfa94432c3337bd7cc93bcd1a = cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3e9c05bfa94432c3337bd7cc93bcd1a);
    assert(Py_REFCNT(frame_c3e9c05bfa94432c3337bd7cc93bcd1a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[157]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[158];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
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
        exception_tb = MAKE_TRACEBACK(frame_c3e9c05bfa94432c3337bd7cc93bcd1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3e9c05bfa94432c3337bd7cc93bcd1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3e9c05bfa94432c3337bd7cc93bcd1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3e9c05bfa94432c3337bd7cc93bcd1a,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_c3e9c05bfa94432c3337bd7cc93bcd1a == cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a);
        cache_frame_c3e9c05bfa94432c3337bd7cc93bcd1a = NULL;
    }

    assertFrameObject(frame_c3e9c05bfa94432c3337bd7cc93bcd1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$regnet$$$function__27_regnet_x_32gf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_c2a8e3d156411be5dd2868aa055b6b02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c2a8e3d156411be5dd2868aa055b6b02 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c2a8e3d156411be5dd2868aa055b6b02)) {
        Py_XDECREF(cache_frame_c2a8e3d156411be5dd2868aa055b6b02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2a8e3d156411be5dd2868aa055b6b02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2a8e3d156411be5dd2868aa055b6b02 = MAKE_FUNCTION_FRAME(codeobj_c2a8e3d156411be5dd2868aa055b6b02, module_torchvision$models$regnet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2a8e3d156411be5dd2868aa055b6b02->m_type_description == NULL);
    frame_c2a8e3d156411be5dd2868aa055b6b02 = cache_frame_c2a8e3d156411be5dd2868aa055b6b02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2a8e3d156411be5dd2868aa055b6b02);
    assert(Py_REFCNT(frame_c2a8e3d156411be5dd2868aa055b6b02) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = DICT_COPY(mod_consts[160]);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[161];
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_params);
        tmp_tuple_element_1 = var_params;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
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
        exception_tb = MAKE_TRACEBACK(frame_c2a8e3d156411be5dd2868aa055b6b02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2a8e3d156411be5dd2868aa055b6b02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2a8e3d156411be5dd2868aa055b6b02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2a8e3d156411be5dd2868aa055b6b02,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_c2a8e3d156411be5dd2868aa055b6b02 == cache_frame_c2a8e3d156411be5dd2868aa055b6b02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2a8e3d156411be5dd2868aa055b6b02);
        cache_frame_c2a8e3d156411be5dd2868aa055b6b02 = NULL;
    }

    assertFrameObject(frame_c2a8e3d156411be5dd2868aa055b6b02);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__10___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__10___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_9894675c4060138b6552489f693624cc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__11_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__11_forward,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_a2fcd1c4b10dc748a541b20c53327f84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__12__regnet(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__12__regnet,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_40ae1a3b4378dcd723b2d38706aa2a15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__13_regnet_y_400mf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__13_regnet_y_400mf,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f45b653811a541b055d0886f5565ecf6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__14_regnet_y_800mf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__14_regnet_y_800mf,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_abebfbbb1412713b584c9407f18699da,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__15_regnet_y_1_6gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__15_regnet_y_1_6gf,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_31622e7d7c9a7ccf1adb21bf7ee4ea12,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__16_regnet_y_3_2gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__16_regnet_y_3_2gf,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f65ba3ba68e9c10f3a215aca614a46d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[129],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__17_regnet_y_8gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__17_regnet_y_8gf,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_259acd052c1ede10457b7ba5c8bd6c7e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__18_regnet_y_16gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__18_regnet_y_16gf,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9747e5f58b20ca2010d43612c33d75a9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__19_regnet_y_32gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__19_regnet_y_32gf,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22364210bf382bb334119dd59d08118b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__1___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_fd355d3b3b893972d0a4ccf0dff22cac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__20_regnet_y_128gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__20_regnet_y_128gf,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e744cb27df934ae2a901c7d5e17f21ed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__21_regnet_x_400mf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__21_regnet_x_400mf,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f35f3599c10974bd0976386593e70f4b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[144],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__22_regnet_x_800mf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__22_regnet_x_800mf,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4543672a6f308be83f2af5dc0ace2662,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[147],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__23_regnet_x_1_6gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__23_regnet_x_1_6gf,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_94e9da0ddad59357fa3768fef1d7c12f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[150],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__24_regnet_x_3_2gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__24_regnet_x_3_2gf,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f73ebf8c5c87891bb533a86506959d7d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[153],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__25_regnet_x_8gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__25_regnet_x_8gf,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e24d86b510b78bf52d59ae473aea38e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[156],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__26_regnet_x_16gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__26_regnet_x_16gf,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3e9c05bfa94432c3337bd7cc93bcd1a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[159],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__27_regnet_x_32gf(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__27_regnet_x_32gf,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c2a8e3d156411be5dd2868aa055b6b02,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[162],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__2___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__2___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_d804e0c4398d4991c4122d1bb30a5ecf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__3___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_1bb704e667686890b55422254685d241,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__4_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__4_forward,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_56e90e86304896f829e9bf993c9a541c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__5___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_83b5ec65c2d8fa42f2ee2598aed20988,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__6___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__6___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_047fb1b8ed4f1b9906abbf7bd08cc9f1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__7_from_init_params(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__7_from_init_params,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_aea72ef4726b8cb2d9cff565228778bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__8__get_expanded_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__8__get_expanded_params,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_057f35011dae2bc68bd0cb0a1a7d4aa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$regnet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$regnet$$$function__9__adjust_widths_groups_compatibilty(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$regnet$$$function__9__adjust_widths_groups_compatibilty,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_85034b37c3345cc576ba093c6facbbc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$regnet,
        mod_consts[63],
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

function_impl_code functable_torchvision$models$regnet[] = {
    impl_torchvision$models$regnet$$$function__1___init__,
    impl_torchvision$models$regnet$$$function__2___init__,
    impl_torchvision$models$regnet$$$function__3___init__,
    impl_torchvision$models$regnet$$$function__4_forward,
    impl_torchvision$models$regnet$$$function__5___init__,
    impl_torchvision$models$regnet$$$function__6___init__,
    impl_torchvision$models$regnet$$$function__7_from_init_params,
    impl_torchvision$models$regnet$$$function__8__get_expanded_params,
    impl_torchvision$models$regnet$$$function__9__adjust_widths_groups_compatibilty,
    impl_torchvision$models$regnet$$$function__10___init__,
    impl_torchvision$models$regnet$$$function__11_forward,
    impl_torchvision$models$regnet$$$function__12__regnet,
    impl_torchvision$models$regnet$$$function__13_regnet_y_400mf,
    impl_torchvision$models$regnet$$$function__14_regnet_y_800mf,
    impl_torchvision$models$regnet$$$function__15_regnet_y_1_6gf,
    impl_torchvision$models$regnet$$$function__16_regnet_y_3_2gf,
    impl_torchvision$models$regnet$$$function__17_regnet_y_8gf,
    impl_torchvision$models$regnet$$$function__18_regnet_y_16gf,
    impl_torchvision$models$regnet$$$function__19_regnet_y_32gf,
    impl_torchvision$models$regnet$$$function__20_regnet_y_128gf,
    impl_torchvision$models$regnet$$$function__21_regnet_x_400mf,
    impl_torchvision$models$regnet$$$function__22_regnet_x_800mf,
    impl_torchvision$models$regnet$$$function__23_regnet_x_1_6gf,
    impl_torchvision$models$regnet$$$function__24_regnet_x_3_2gf,
    impl_torchvision$models$regnet$$$function__25_regnet_x_8gf,
    impl_torchvision$models$regnet$$$function__26_regnet_x_16gf,
    impl_torchvision$models$regnet$$$function__27_regnet_x_32gf,
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

    function_impl_code *current = functable_torchvision$models$regnet;
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

    if (offset > sizeof(functable_torchvision$models$regnet) || offset < 0) {
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
        functable_torchvision$models$regnet[offset],
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
        module_torchvision$models$regnet,
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
PyObject *modulecode_torchvision$models$regnet(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.models.regnet");

    // Store the module for future use.
    module_torchvision$models$regnet = module;

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
        PRINT_STRING("torchvision.models.regnet: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.regnet: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.regnet: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$models$regnet\n");

    moduledict_torchvision$models$regnet = MODULE_DICT(module_torchvision$models$regnet);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$models$regnet,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$regnet,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[35]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$regnet,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$regnet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$regnet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$models$regnet);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$models$regnet);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_3_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_4_var___class__ = NULL;
    struct Nuitka_CellObject *outline_5_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_88e3b1bb7b8bc458fdfd7f3174549dcd;
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
    PyObject *locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a832e466e434474816b9b72e2f47f39f_2;
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
    PyObject *locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73 = NULL;
    struct Nuitka_FrameObject *frame_18c0694ac39853437c0d4a52285f248b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114 = NULL;
    struct Nuitka_FrameObject *frame_13a34c086cbeb97d0c5d1588574eb34e_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_torchvision$models$regnet$$$class__4_AnyStage_157 = NULL;
    struct Nuitka_FrameObject *frame_9a0d405c27f2082abd29fd21aa81256e_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_torchvision$models$regnet$$$class__5_BlockParams_191 = NULL;
    struct Nuitka_FrameObject *frame_393f238f45b3a95d5f291b60ec73b79d_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_torchvision$models$regnet$$$class__6_RegNet_302 = NULL;
    struct Nuitka_FrameObject *frame_71444a1b2f73acffa622c929403b589c_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_2);
    }
    frame_88e3b1bb7b8bc458fdfd7f3174549dcd = MAKE_MODULE_FRAME(codeobj_88e3b1bb7b8bc458fdfd7f3174549dcd, module_torchvision$models$regnet);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88e3b1bb7b8bc458fdfd7f3174549dcd);
    assert(Py_REFCNT(frame_88e3b1bb7b8bc458fdfd7f3174549dcd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[166], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[167], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[48];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[27];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[169];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[170];
        tmp_level_value_2 = mod_consts[27];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[5],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[106]);
        }
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[171],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[171]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[172],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[172]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[173],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[173]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[174],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[174]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[175],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[175]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[44];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[27];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 11;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[44];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[176];
        tmp_level_value_4 = mod_consts[27];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 12;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[66],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[66]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[177],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[177]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[178];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[179];
        tmp_level_value_5 = mod_consts[3];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 14;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[111],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[180];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[181];
        tmp_level_value_6 = mod_consts[3];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 15;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[7],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[7]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[12],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[12]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[182];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[183];
        tmp_level_value_7 = mod_consts[3];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 16;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[64],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[184];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torchvision$models$regnet;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[185];
        tmp_level_value_8 = mod_consts[8];
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 17;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torchvision$models$regnet,
                mod_consts[62],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = LIST_COPY(mod_consts[186]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = DICT_COPY(mod_consts[188]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_24);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 58;

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
        tmp_subscript_value_1 = mod_consts[27];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[189]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[189]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[65];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 58;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[190]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[191];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[192];
        tmp_getattr_default_1 = mod_consts[193];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_4;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[192]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 58;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        frame_a832e466e434474816b9b72e2f47f39f_2 = MAKE_CLASS_FRAME(codeobj_a832e466e434474816b9b72e2f47f39f, module_torchvision$models$regnet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a832e466e434474816b9b72e2f47f39f_2);
        assert(Py_REFCNT(frame_a832e466e434474816b9b72e2f47f39f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_1 = mod_consts[18];
            tmp_dict_value_1 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[51]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_tuple_element_5;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[19];
                tmp_dict_value_1 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[51]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[21];
                tmp_expression_value_6 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[172]);

                if (tmp_expression_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_6 == NULL)) {
                            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_4 = Py_Ellipsis;
                tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_7;
                    PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_4);
                    tmp_expression_value_7 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[66]);

                    if (tmp_expression_value_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_7 == NULL)) {
                                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_7 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 65;
                                type_description_2 = "c";
                                goto tuple_build_exception_2;
                            }
                            Py_INCREF(tmp_expression_value_7);
                        } else {
                            goto tuple_build_exception_2;
                        }
                    }

                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_7);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "c";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_expression_value_6);
                Py_DECREF(tmp_subscript_value_2);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_6);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[28];
                tmp_expression_value_8 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[172]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_5 = Py_Ellipsis;
                tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_9;
                    PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_5);
                    tmp_expression_value_9 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[66]);

                    if (tmp_expression_value_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_9 == NULL)) {
                                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_9 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 66;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_expression_value_9);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_9);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "c";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_3);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[199];
                tmp_dict_value_1 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__1___init__(tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a832e466e434474816b9b72e2f47f39f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a832e466e434474816b9b72e2f47f39f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a832e466e434474816b9b72e2f47f39f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a832e466e434474816b9b72e2f47f39f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_a832e466e434474816b9b72e2f47f39f_2);

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


                exception_lineno = 58;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[65];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 58;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_32);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_31 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58);
        locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58 = NULL;
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

        Py_DECREF(locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58);
        locals_torchvision$models$regnet$$$class__1_SimpleStemIN_58 = NULL;
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
        exception_lineno = 58;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_31);
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[80]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_33, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_34 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_11 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[27];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[189]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[189]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[17];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 73;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[190]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[191];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[192];
        tmp_getattr_default_2 = mod_consts[193];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[192]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[202];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        frame_18c0694ac39853437c0d4a52285f248b_3 = MAKE_CLASS_FRAME(codeobj_18c0694ac39853437c0d4a52285f248b, module_torchvision$models$regnet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_18c0694ac39853437c0d4a52285f248b_3);
        assert(Py_REFCNT(frame_18c0694ac39853437c0d4a52285f248b_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_dict_key_2 = mod_consts[18];
            tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[51]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[19];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[51]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[20];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[51]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[21];
                tmp_expression_value_16 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[172]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_10 = Py_Ellipsis;
                tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_17;
                    PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_10);
                    tmp_expression_value_17 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[66]);

                    if (tmp_expression_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_17 == NULL)) {
                                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_17 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 81;
                                type_description_2 = "c";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_17);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_17);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 81;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_5);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[28];
                tmp_expression_value_18 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[172]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_11 = Py_Ellipsis;
                tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_19;
                    PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_11);
                    tmp_expression_value_19 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[66]);

                    if (tmp_expression_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_19 == NULL)) {
                                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_19 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 82;
                                type_description_2 = "c";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_expression_value_19);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_19);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 82;
                        type_description_2 = "c";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_6);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[29];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[51]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[30];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[203]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[31];
                tmp_expression_value_20 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[174]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[203]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[199];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__2___init__(tmp_annotations_2, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_18c0694ac39853437c0d4a52285f248b_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_18c0694ac39853437c0d4a52285f248b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_18c0694ac39853437c0d4a52285f248b_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_18c0694ac39853437c0d4a52285f248b_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_18c0694ac39853437c0d4a52285f248b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
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


                exception_lineno = 73;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_12 = mod_consts[17];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_12 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 73;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_9;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_40);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_39 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73);
        locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73 = NULL;
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

        Py_DECREF(locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73);
        locals_torchvision$models$regnet$$$class__2_BottleneckTransform_73 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 73;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_39);
    }
    goto try_end_5;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[198]);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_42 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_22 = tmp_class_creation_3__bases;
        tmp_subscript_value_8 = mod_consts[27];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_8, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_23 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_23, mod_consts[189]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_24 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[189]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[68];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_14 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 114;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_25 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_25, mod_consts[190]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[191];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[192];
        tmp_getattr_default_3 = mod_consts[193];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_26 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[192]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 114;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_46;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[205];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_12;
        }
        frame_13a34c086cbeb97d0c5d1588574eb34e_4 = MAKE_CLASS_FRAME(codeobj_13a34c086cbeb97d0c5d1588574eb34e, module_torchvision$models$regnet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_13a34c086cbeb97d0c5d1588574eb34e_4);
        assert(Py_REFCNT(frame_13a34c086cbeb97d0c5d1588574eb34e_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_defaults_1 = mod_consts[206];
            tmp_dict_key_3 = mod_consts[18];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[51]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_11;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[19];
                tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[51]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[20];
                tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[51]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[21];
                tmp_expression_value_27 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[172]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_tuple_element_16 = Py_Ellipsis;
                tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_28;
                    PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_16);
                    tmp_expression_value_28 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[66]);

                    if (tmp_expression_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_28 == NULL)) {
                                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_28 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 122;
                                type_description_2 = "c";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_expression_value_28);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_28);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_9);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[28];
                tmp_expression_value_29 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[172]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_tuple_element_17 = Py_Ellipsis;
                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_30;
                    PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_17);
                    tmp_expression_value_30 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[66]);

                    if (tmp_expression_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_30 == NULL)) {
                                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_30 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 123;
                                type_description_2 = "c";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_expression_value_30);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_30);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_10);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[29];
                tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[51]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[30];
                tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[203]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[31];
                tmp_expression_value_31 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[174]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 126;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[203]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[199];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            Py_INCREF(tmp_defaults_1);

            tmp_closure_3[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__3___init__(tmp_defaults_1, tmp_annotations_3, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[208];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[177]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[177]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[199];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[177]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[177]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "c";
                        goto dict_build_exception_4;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto dict_build_exception_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__4_forward(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_13a34c086cbeb97d0c5d1588574eb34e_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_13a34c086cbeb97d0c5d1588574eb34e_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_13a34c086cbeb97d0c5d1588574eb34e_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_13a34c086cbeb97d0c5d1588574eb34e_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_13a34c086cbeb97d0c5d1588574eb34e_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
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


                exception_lineno = 114;

                goto try_except_handler_12;
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
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_18 = mod_consts[68];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_18 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 114;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto try_except_handler_12;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_48);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_47 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114);
        locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114 = NULL;
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

        Py_DECREF(locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114);
        locals_torchvision$models$regnet$$$class__3_ResBottleneckBlock_114 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 114;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_47);
    }
    goto try_end_6;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[80]);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        tmp_assign_source_49 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_49, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_50 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_33 = tmp_class_creation_4__bases;
        tmp_subscript_value_12 = mod_consts[27];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_33, tmp_subscript_value_12, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_52 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_52;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_34 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[189]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_35 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[189]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        tmp_tuple_element_20 = mod_consts[75];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_20 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 157;
        tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_53;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_36 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_36, mod_consts[190]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
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
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[191];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[192];
        tmp_getattr_default_4 = mod_consts[193];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_37 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[192]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 157;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_54;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_55;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torchvision$models$regnet$$$class__4_AnyStage_157 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[211];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_15;
        }
        frame_9a0d405c27f2082abd29fd21aa81256e_5 = MAKE_CLASS_FRAME(codeobj_9a0d405c27f2082abd29fd21aa81256e, module_torchvision$models$regnet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9a0d405c27f2082abd29fd21aa81256e_5);
        assert(Py_REFCNT(frame_9a0d405c27f2082abd29fd21aa81256e_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_defaults_2 = mod_consts[212];
            tmp_dict_key_5 = mod_consts[18];
            tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[51]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 12 );
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_16;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[19];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[51]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[20];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[51]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[213];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[51]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[26];
                tmp_expression_value_38 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[172]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_tuple_element_22 = Py_Ellipsis;
                tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_39;
                    PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_22);
                    tmp_expression_value_39 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[66]);

                    if (tmp_expression_value_39 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_39 == NULL)) {
                                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_39 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 166;
                                type_description_2 = "c";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_expression_value_39);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_39);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "c";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_13);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[21];
                tmp_expression_value_40 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[172]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_tuple_element_23 = Py_Ellipsis;
                tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_41;
                    PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_23);
                    tmp_expression_value_41 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[66]);

                    if (tmp_expression_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_41 == NULL)) {
                                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_41 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 167;
                                type_description_2 = "c";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_expression_value_41);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_41);
                    if (tmp_tuple_element_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "c";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_23);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_14);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[28];
                tmp_expression_value_42 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[172]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_tuple_element_24 = Py_Ellipsis;
                tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_43;
                    PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_24);
                    tmp_expression_value_43 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[66]);

                    if (tmp_expression_value_43 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_43 == NULL)) {
                                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_43 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 168;
                                type_description_2 = "c";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_43);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_43);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 168;
                        type_description_2 = "c";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_15);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[29];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[51]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[30];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[203]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[31];
                tmp_expression_value_44 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[174]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[203]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[214];
                tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[51]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[199];
                tmp_dict_value_5 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_4[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__5___init__(tmp_defaults_2, tmp_annotations_5, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9a0d405c27f2082abd29fd21aa81256e_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9a0d405c27f2082abd29fd21aa81256e_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9a0d405c27f2082abd29fd21aa81256e_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9a0d405c27f2082abd29fd21aa81256e_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_9a0d405c27f2082abd29fd21aa81256e_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__4_AnyStage_157, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_25 = mod_consts[75];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_25 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_torchvision$models$regnet$$$class__4_AnyStage_157;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 157;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_15;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_56);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_55 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_torchvision$models$regnet$$$class__4_AnyStage_157);
        locals_torchvision$models$regnet$$$class__4_AnyStage_157 = NULL;
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

        Py_DECREF(locals_torchvision$models$regnet$$$class__4_AnyStage_157);
        locals_torchvision$models$regnet$$$class__4_AnyStage_157 = NULL;
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
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 157;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_55);
    }
    goto try_end_7;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_torchvision$models$regnet$$$class__5_BlockParams_191 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyDict_SetItem(locals_torchvision$models$regnet$$$class__5_BlockParams_191, mod_consts[195], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyDict_SetItem(locals_torchvision$models$regnet$$$class__5_BlockParams_191, mod_consts[197], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_393f238f45b3a95d5f291b60ec73b79d_6 = MAKE_CLASS_FRAME(codeobj_393f238f45b3a95d5f291b60ec73b79d, module_torchvision$models$regnet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_393f238f45b3a95d5f291b60ec73b79d_6);
        assert(Py_REFCNT(frame_393f238f45b3a95d5f291b60ec73b79d_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_17;
            tmp_defaults_3 = mod_consts[216];
            tmp_dict_key_6 = mod_consts[37];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_17 = (PyObject *)&PyLong_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_17);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_22;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[38];
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 195;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_18 = (PyObject *)&PyLong_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_18);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 195;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[39];
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_19 = (PyObject *)&PyLong_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_19);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[40];
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_20 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_20);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[41];
                tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_49 == NULL)) {
                    tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_21 = (PyObject *)&PyLong_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_21);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[31];
                tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                if (unlikely(tmp_expression_value_50 == NULL)) {
                    tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                }

                if (tmp_expression_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_22 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_22);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[199];
                tmp_dict_value_6 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__6___init__(tmp_defaults_3, tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_torchvision$models$regnet$$$class__5_BlockParams_191, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_defaults_4 = mod_consts[218];
            tmp_dict_key_7 = mod_consts[213];
            tmp_dict_value_7 = (PyObject *)&PyLong_Type;
            tmp_annotations_7 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_23;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[46];
                tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[219];
                tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[220];
                tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[29];
                tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[30];
                tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[31];
                tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                if (unlikely(tmp_expression_value_51 == NULL)) {
                    tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                }

                if (tmp_expression_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_23 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_23);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[221];
                tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

                if (unlikely(tmp_dict_value_7 == NULL)) {
                    tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
                }

                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[199];
                tmp_dict_value_7 = mod_consts[115];
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_4);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_torchvision$models$regnet$$$function__7_from_init_params(tmp_defaults_4, tmp_annotations_7);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_torchvision$models$regnet$$$class__5_BlockParams_191, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__8__get_expanded_params();

        tmp_res = PyDict_SetItem(locals_torchvision$models$regnet$$$class__5_BlockParams_191, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_24;
            tmp_dict_key_8 = mod_consts[224];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_24 = (PyObject *)&PyLong_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_24);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_subscript_value_28;
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[225];
                tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_53 == NULL)) {
                    tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_25 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_25);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[39];
                tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_54 == NULL)) {
                    tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_26 = (PyObject *)&PyLong_Type;
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_26);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[199];
                tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[175]);

                if (unlikely(tmp_expression_value_55 == NULL)) {
                    tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
                }

                if (tmp_expression_value_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                }

                if (tmp_expression_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_28 = (PyObject *)&PyLong_Type;
                tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_28);
                if (tmp_tuple_element_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_57;
                    PyObject *tmp_subscript_value_29;
                    PyTuple_SET_ITEM(tmp_subscript_value_27, 0, tmp_tuple_element_26);
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[173]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 287;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    tmp_subscript_value_29 = (PyObject *)&PyLong_Type;
                    tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_29);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 287;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_27, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_subscript_value_27);
                goto dict_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_27);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_torchvision$models$regnet$$$function__9__adjust_widths_groups_compatibilty(tmp_annotations_8);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_torchvision$models$regnet$$$class__5_BlockParams_191, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_393f238f45b3a95d5f291b60ec73b79d_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_393f238f45b3a95d5f291b60ec73b79d_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_393f238f45b3a95d5f291b60ec73b79d_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_393f238f45b3a95d5f291b60ec73b79d_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_393f238f45b3a95d5f291b60ec73b79d_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_18;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_9 = (PyObject *)&PyType_Type;
            tmp_tuple_element_27 = mod_consts[115];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = mod_consts[227];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_torchvision$models$regnet$$$class__5_BlockParams_191;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
            frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 191;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_59 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_torchvision$models$regnet$$$class__5_BlockParams_191);
        locals_torchvision$models$regnet$$$class__5_BlockParams_191 = NULL;
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

        Py_DECREF(locals_torchvision$models$regnet$$$class__5_BlockParams_191);
        locals_torchvision$models$regnet$$$class__5_BlockParams_191 = NULL;
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
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 191;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_59);
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_value_58;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[198]);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_61, 0, tmp_tuple_element_28);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_62 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_59 = tmp_class_creation_6__bases;
        tmp_subscript_value_30 = mod_consts[27];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_59, tmp_subscript_value_30, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_5 = tmp_class_creation_6__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_64;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_60 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_60, mod_consts[189]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_61 = tmp_class_creation_6__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[189]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_tuple_element_29 = mod_consts[108];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_29 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_6__class_decl_dict;
        frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 302;
        tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_62 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_62, mod_consts[190]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
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
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[191];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_5 = mod_consts[192];
        tmp_getattr_default_5 = mod_consts[193];
        tmp_tuple_element_30 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_63;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_10 = tmp_class_creation_6__prepared;
            tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_63 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[192]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 302;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_66;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_torchvision$models$regnet$$$class__6_RegNet_302 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[197], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_21;
        }
        frame_71444a1b2f73acffa622c929403b589c_7 = MAKE_CLASS_FRAME(codeobj_71444a1b2f73acffa622c929403b589c, module_torchvision$models$regnet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_71444a1b2f73acffa622c929403b589c_7);
        assert(Py_REFCNT(frame_71444a1b2f73acffa622c929403b589c_7) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_defaults_5 = mod_consts[228];
            tmp_dict_key_9 = mod_consts[78];
            tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[115]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_64;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_expression_value_70;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_71;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_tuple_element_34;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[229];
                tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[51]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[230];
                tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[51]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[231];
                tmp_expression_value_64 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[174]);

                if (tmp_expression_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_64 == NULL)) {
                            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 308;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_64);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_65 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[172]);

                if (tmp_expression_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_65 == NULL)) {
                            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_64);

                            exception_lineno = 308;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_65);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_31 = Py_Ellipsis;
                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_31);
                    tmp_expression_value_66 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[66]);

                    if (tmp_expression_value_66 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_66 == NULL)) {
                                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_66 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 308;
                                type_description_2 = "c";
                                goto tuple_build_exception_16;
                            }
                            Py_INCREF(tmp_expression_value_66);
                        } else {
                            goto tuple_build_exception_16;
                        }
                    }

                    tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_66);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 308;
                        type_description_2 = "c";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_32);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_subscript_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_64);

                    exception_lineno = 308;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[77];
                tmp_expression_value_67 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[174]);

                if (tmp_expression_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_67 == NULL)) {
                            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_67 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 309;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_67);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_68 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[172]);

                if (tmp_expression_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_68 == NULL)) {
                            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_67);

                            exception_lineno = 309;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_68);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_32 = Py_Ellipsis;
                tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_69;
                    PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_32);
                    tmp_expression_value_69 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[66]);

                    if (tmp_expression_value_69 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_69 == NULL)) {
                                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_69 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 309;
                                type_description_2 = "c";
                                goto tuple_build_exception_17;
                            }
                            Py_INCREF(tmp_expression_value_69);
                        } else {
                            goto tuple_build_exception_17;
                        }
                    }

                    tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_69);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 309;
                        type_description_2 = "c";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_expression_value_68);
                Py_DECREF(tmp_subscript_value_34);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_68);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_subscript_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_67);

                    exception_lineno = 309;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[21];
                tmp_expression_value_70 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[174]);

                if (tmp_expression_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_70 == NULL)) {
                            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 310;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_70);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_71 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[172]);

                if (tmp_expression_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_71 == NULL)) {
                            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_70);

                            exception_lineno = 310;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_71);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_33 = Py_Ellipsis;
                tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_72;
                    PyTuple_SET_ITEM0(tmp_subscript_value_36, 0, tmp_tuple_element_33);
                    tmp_expression_value_72 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[66]);

                    if (tmp_expression_value_72 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_72 == NULL)) {
                                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_72 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 310;
                                type_description_2 = "c";
                                goto tuple_build_exception_18;
                            }
                            Py_INCREF(tmp_expression_value_72);
                        } else {
                            goto tuple_build_exception_18;
                        }
                    }

                    tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_72);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 310;
                        type_description_2 = "c";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_36, 1, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_expression_value_70);
                Py_DECREF(tmp_expression_value_71);
                Py_DECREF(tmp_subscript_value_36);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                tmp_subscript_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_71);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_subscript_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_70);

                    exception_lineno = 310;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_70);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[25];
                tmp_expression_value_73 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[174]);

                if (tmp_expression_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[174]);

                        if (unlikely(tmp_expression_value_73 == NULL)) {
                            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
                        }

                        if (tmp_expression_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 311;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_73);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_74 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[172]);

                if (tmp_expression_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[172]);

                        if (unlikely(tmp_expression_value_74 == NULL)) {
                            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
                        }

                        if (tmp_expression_value_74 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_73);

                            exception_lineno = 311;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_74);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_34 = Py_Ellipsis;
                tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_75;
                    PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_34);
                    tmp_expression_value_75 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[66]);

                    if (tmp_expression_value_75 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_expression_value_75 == NULL)) {
                                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                            }

                            if (tmp_expression_value_75 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 311;
                                type_description_2 = "c";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_expression_value_75);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[198]);
                    Py_DECREF(tmp_expression_value_75);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_2 = "c";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_subscript_value_38);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_subscript_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_73);

                    exception_lineno = 311;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[199];
                tmp_dict_value_9 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            Py_INCREF(tmp_defaults_5);

            tmp_closure_5[0] = outline_5_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__10___init__(tmp_defaults_5, tmp_annotations_9, tmp_closure_5);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[208];
            tmp_dict_value_10 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[177]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[177]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 382;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[199];
            tmp_dict_value_10 = PyObject_GetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[177]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[177]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 382;
                        type_description_2 = "c";
                        goto dict_build_exception_10;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto dict_build_exception_10;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$regnet$$$function__11_forward(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_71444a1b2f73acffa622c929403b589c_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_71444a1b2f73acffa622c929403b589c_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_71444a1b2f73acffa622c929403b589c_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_71444a1b2f73acffa622c929403b589c_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_71444a1b2f73acffa622c929403b589c_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_21;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$regnet$$$class__6_RegNet_302, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_21;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_11 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_35 = mod_consts[108];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_35 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_torchvision$models$regnet$$$class__6_RegNet_302;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
            frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame.f_lineno = 302;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto try_except_handler_21;
            }
            assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
            PyCell_SET(outline_5_var___class__, tmp_assign_source_68);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
        tmp_assign_source_67 = Nuitka_Cell_GET(outline_5_var___class__);
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_torchvision$models$regnet$$$class__6_RegNet_302);
        locals_torchvision$models$regnet$$$class__6_RegNet_302 = NULL;
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

        Py_DECREF(locals_torchvision$models$regnet$$$class__6_RegNet_302);
        locals_torchvision$models$regnet$$$class__6_RegNet_302 = NULL;
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
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
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

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 302;
        goto try_except_handler_19;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_67);
    }
    goto try_end_9;
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

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_dict_key_11 = mod_consts[234];
        tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_11 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[78];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[235];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[236];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[221];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[199];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_69 = MAKE_FUNCTION_torchvision$models$regnet$$$function__12__regnet(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_defaults_6 = mod_consts[237];
        tmp_dict_key_12 = mod_consts[235];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_annotations_12 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[236];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[221];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[199];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_70 = MAKE_FUNCTION_torchvision$models$regnet$$$function__13_regnet_y_400mf(tmp_defaults_6, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_defaults_7;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_defaults_7 = mod_consts[237];
        tmp_dict_key_13 = mod_consts[235];
        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
        tmp_annotations_13 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[236];
        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[221];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[199];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_71 = MAKE_FUNCTION_torchvision$models$regnet$$$function__14_regnet_y_800mf(tmp_defaults_7, tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_defaults_8;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_defaults_8 = mod_consts[237];
        tmp_dict_key_14 = mod_consts[235];
        tmp_dict_value_14 = (PyObject *)&PyBool_Type;
        tmp_annotations_14 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[236];
        tmp_dict_value_14 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[221];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[199];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_72 = MAKE_FUNCTION_torchvision$models$regnet$$$function__15_regnet_y_1_6gf(tmp_defaults_8, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_defaults_9;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_defaults_9 = mod_consts[237];
        tmp_dict_key_15 = mod_consts[235];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_annotations_15 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[236];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[221];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[199];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_73 = MAKE_FUNCTION_torchvision$models$regnet$$$function__16_regnet_y_3_2gf(tmp_defaults_9, tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_defaults_10;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_defaults_10 = mod_consts[237];
        tmp_dict_key_16 = mod_consts[235];
        tmp_dict_value_16 = (PyObject *)&PyBool_Type;
        tmp_annotations_16 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[236];
        tmp_dict_value_16 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[221];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[199];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_74 = MAKE_FUNCTION_torchvision$models$regnet$$$function__17_regnet_y_8gf(tmp_defaults_10, tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_defaults_11;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_defaults_11 = mod_consts[237];
        tmp_dict_key_17 = mod_consts[235];
        tmp_dict_value_17 = (PyObject *)&PyBool_Type;
        tmp_annotations_17 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[236];
        tmp_dict_value_17 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[221];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[199];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_annotations_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_75 = MAKE_FUNCTION_torchvision$models$regnet$$$function__18_regnet_y_16gf(tmp_defaults_11, tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_defaults_12;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_defaults_12 = mod_consts[237];
        tmp_dict_key_18 = mod_consts[235];
        tmp_dict_value_18 = (PyObject *)&PyBool_Type;
        tmp_annotations_18 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[236];
        tmp_dict_value_18 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[221];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[199];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_annotations_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_76 = MAKE_FUNCTION_torchvision$models$regnet$$$function__19_regnet_y_32gf(tmp_defaults_12, tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_defaults_13;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        tmp_defaults_13 = mod_consts[237];
        tmp_dict_key_19 = mod_consts[235];
        tmp_dict_value_19 = (PyObject *)&PyBool_Type;
        tmp_annotations_19 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[236];
        tmp_dict_value_19 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[221];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[199];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_19;
        // Exception handling pass through code for dict_build:
        dict_build_exception_19:;
        Py_DECREF(tmp_annotations_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_19:;
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_77 = MAKE_FUNCTION_torchvision$models$regnet$$$function__20_regnet_y_128gf(tmp_defaults_13, tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_defaults_14;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_defaults_14 = mod_consts[237];
        tmp_dict_key_20 = mod_consts[235];
        tmp_dict_value_20 = (PyObject *)&PyBool_Type;
        tmp_annotations_20 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[236];
        tmp_dict_value_20 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[221];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[199];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_20;
        // Exception handling pass through code for dict_build:
        dict_build_exception_20:;
        Py_DECREF(tmp_annotations_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_20:;
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_78 = MAKE_FUNCTION_torchvision$models$regnet$$$function__21_regnet_x_400mf(tmp_defaults_14, tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_defaults_15;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        tmp_defaults_15 = mod_consts[237];
        tmp_dict_key_21 = mod_consts[235];
        tmp_dict_value_21 = (PyObject *)&PyBool_Type;
        tmp_annotations_21 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[236];
        tmp_dict_value_21 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[221];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[199];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_21;
        // Exception handling pass through code for dict_build:
        dict_build_exception_21:;
        Py_DECREF(tmp_annotations_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_21:;
        Py_INCREF(tmp_defaults_15);


        tmp_assign_source_79 = MAKE_FUNCTION_torchvision$models$regnet$$$function__22_regnet_x_800mf(tmp_defaults_15, tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_defaults_16;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        tmp_defaults_16 = mod_consts[237];
        tmp_dict_key_22 = mod_consts[235];
        tmp_dict_value_22 = (PyObject *)&PyBool_Type;
        tmp_annotations_22 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[236];
        tmp_dict_value_22 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[221];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[199];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_22;
        // Exception handling pass through code for dict_build:
        dict_build_exception_22:;
        Py_DECREF(tmp_annotations_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_22:;
        Py_INCREF(tmp_defaults_16);


        tmp_assign_source_80 = MAKE_FUNCTION_torchvision$models$regnet$$$function__23_regnet_x_1_6gf(tmp_defaults_16, tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_defaults_17;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        tmp_defaults_17 = mod_consts[237];
        tmp_dict_key_23 = mod_consts[235];
        tmp_dict_value_23 = (PyObject *)&PyBool_Type;
        tmp_annotations_23 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[236];
        tmp_dict_value_23 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[221];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[199];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_23;
        // Exception handling pass through code for dict_build:
        dict_build_exception_23:;
        Py_DECREF(tmp_annotations_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_23:;
        Py_INCREF(tmp_defaults_17);


        tmp_assign_source_81 = MAKE_FUNCTION_torchvision$models$regnet$$$function__24_regnet_x_3_2gf(tmp_defaults_17, tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_defaults_18;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        tmp_defaults_18 = mod_consts[237];
        tmp_dict_key_24 = mod_consts[235];
        tmp_dict_value_24 = (PyObject *)&PyBool_Type;
        tmp_annotations_24 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[236];
        tmp_dict_value_24 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[221];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[199];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_24;
        // Exception handling pass through code for dict_build:
        dict_build_exception_24:;
        Py_DECREF(tmp_annotations_24);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_24:;
        Py_INCREF(tmp_defaults_18);


        tmp_assign_source_82 = MAKE_FUNCTION_torchvision$models$regnet$$$function__25_regnet_x_8gf(tmp_defaults_18, tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_defaults_19;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        tmp_defaults_19 = mod_consts[237];
        tmp_dict_key_25 = mod_consts[235];
        tmp_dict_value_25 = (PyObject *)&PyBool_Type;
        tmp_annotations_25 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[236];
        tmp_dict_value_25 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[221];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[199];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_25;
        // Exception handling pass through code for dict_build:
        dict_build_exception_25:;
        Py_DECREF(tmp_annotations_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_25:;
        Py_INCREF(tmp_defaults_19);


        tmp_assign_source_83 = MAKE_FUNCTION_torchvision$models$regnet$$$function__26_regnet_x_16gf(tmp_defaults_19, tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_defaults_20;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        tmp_defaults_20 = mod_consts[237];
        tmp_dict_key_26 = mod_consts[235];
        tmp_dict_value_26 = (PyObject *)&PyBool_Type;
        tmp_annotations_26 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[236];
        tmp_dict_value_26 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[221];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[199];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_26;
        // Exception handling pass through code for dict_build:
        dict_build_exception_26:;
        Py_DECREF(tmp_annotations_26);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_26:;
        Py_INCREF(tmp_defaults_20);


        tmp_assign_source_84 = MAKE_FUNCTION_torchvision$models$regnet$$$function__27_regnet_x_32gf(tmp_defaults_20, tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_84);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88e3b1bb7b8bc458fdfd7f3174549dcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88e3b1bb7b8bc458fdfd7f3174549dcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88e3b1bb7b8bc458fdfd7f3174549dcd, exception_lineno);
    }



    assertFrameObject(frame_88e3b1bb7b8bc458fdfd7f3174549dcd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.models.regnet", false);

    Py_INCREF(module_torchvision$models$regnet);
    return module_torchvision$models$regnet;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$regnet, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$models$regnet", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
