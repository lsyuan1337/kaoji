/* Generated code for Python module 'torch._utils'
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

/* The "module_torch$_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$_utils;
PyDictObject *moduledict_torch$_utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[288];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[288];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch._utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 288; i++) {
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
void checkModuleConstants_torch$_utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 288; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a6ec1fb04f79a34df02ada9c760ab0ca;
static PyCodeObject *codeobj_497e77ccc10c236713596386782a68cc;
static PyCodeObject *codeobj_0d20a917a826dc0c3294e5dfa4ab1d0e;
static PyCodeObject *codeobj_56cfb4ec58cf2808e7cb8e6190055a25;
static PyCodeObject *codeobj_df0b3e1f1fc0baf78e4fb72250fd3ea8;
static PyCodeObject *codeobj_7f174b14ef224d1ab8d179ca4f1452a4;
static PyCodeObject *codeobj_5c5f2fbaac199b472a683749df34b7e9;
static PyCodeObject *codeobj_a6528b9a3f4153b7592381a694823f75;
static PyCodeObject *codeobj_901012488d6292a3981ee9823d5d9de2;
static PyCodeObject *codeobj_3410dcc1a4ea0f17a9c4226235408af9;
static PyCodeObject *codeobj_3bafe4798794b7ac817c25e477861a06;
static PyCodeObject *codeobj_5f3384663e2e5ea3295080aa91b07410;
static PyCodeObject *codeobj_f61f0f62ca6ae93c7186f500aefc3fbe;
static PyCodeObject *codeobj_d35e36caa2e8206e49a6765b17dbdfb2;
static PyCodeObject *codeobj_70df52e2b237dba6f7154328345bf29f;
static PyCodeObject *codeobj_3a2484e0f5a3d8d93507c9d6d94289b0;
static PyCodeObject *codeobj_7c88238f77f53c0b49be584c6d6cfb3e;
static PyCodeObject *codeobj_3fead87452e8f9a2d4a3531d96b1e08a;
static PyCodeObject *codeobj_49762fe9c9e0bfd19d68f7e6ae854fcb;
static PyCodeObject *codeobj_3cccea3ce8ab8916343e139e18d19163;
static PyCodeObject *codeobj_f95ff57598fc2b4d6537fa6e04c79adf;
static PyCodeObject *codeobj_1e9c57989024f41b5aef6a829e7de230;
static PyCodeObject *codeobj_201a2c893bf39d25fbec0a2c2e43a82c;
static PyCodeObject *codeobj_c3b226bc30f1700f3dab9500be36ea2e;
static PyCodeObject *codeobj_f367202efa296c081bafd1df7dfea2e7;
static PyCodeObject *codeobj_253a13b8ca219cfdacf3171a60ae3921;
static PyCodeObject *codeobj_e2d90417302cf2bd383d978143d112cb;
static PyCodeObject *codeobj_f4080b10e2549625fc26c9f6bacca6de;
static PyCodeObject *codeobj_5066590d070c27607459f3671e463306;
static PyCodeObject *codeobj_18e7eecaba0179973a7f2110d2208083;
static PyCodeObject *codeobj_fe131ba0dbd9ac9100d88e4d2521f734;
static PyCodeObject *codeobj_0c471075e028b24dd1a396a57ea3fb19;
static PyCodeObject *codeobj_8fefb57dbf6bdd3dddfd9754b96a7219;
static PyCodeObject *codeobj_43bef7aa96321a9122d6072e82c558b0;
static PyCodeObject *codeobj_0a6c21d4591f2e79a0eb69e4cc60926c;
static PyCodeObject *codeobj_ed5c6234a3a1096efc493056350a8e56;
static PyCodeObject *codeobj_b1643b3b1231795b0b63b8e8f35d255d;
static PyCodeObject *codeobj_f44927daef4c8804fbcff0e8ddcad958;
static PyCodeObject *codeobj_0ed9067aa9658fed2aeef57da5118ca1;
static PyCodeObject *codeobj_2260b48f1dd48f6c8a39aae57cc5f845;
static PyCodeObject *codeobj_9620dae1a158ee12a786991c40e0c2d5;
static PyCodeObject *codeobj_febd972d2235927d75b3942588cf3972;
static PyCodeObject *codeobj_9ca2ad788b0e477597fef177f7eb4335;
static PyCodeObject *codeobj_182733290ad99500eb708538b02a6442;
static PyCodeObject *codeobj_e3254c6cff40ead4837673acb7bfac8f;
static PyCodeObject *codeobj_d91016314693526f83e3d86cfe7404ba;
static PyCodeObject *codeobj_33b284d7bd2705568de7ab98682a12de;
static PyCodeObject *codeobj_46a3cb75982264d229c36cebb8e89f31;
static PyCodeObject *codeobj_64115cb12b04696cb7b969c7e64fd8f8;
static PyCodeObject *codeobj_b88848620d6e4230d4bf2c1815b0d3b2;
static PyCodeObject *codeobj_c3f409f9da99b7790237373e026a3ade;
static PyCodeObject *codeobj_aa745d24a0d7d7d5ac8f2c61be1767db;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[244]); CHECK_OBJECT(module_filename_obj);
    codeobj_a6ec1fb04f79a34df02ada9c760ab0ca = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[245], mod_consts[245], mod_consts[246], NULL, 1, 0, 0);
    codeobj_497e77ccc10c236713596386782a68cc = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[247], NULL, 1, 0, 0);
    codeobj_0d20a917a826dc0c3294e5dfa4ab1d0e = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_56cfb4ec58cf2808e7cb8e6190055a25 = MAKE_CODE_OBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[248], NULL, 1, 0, 0);
    codeobj_df0b3e1f1fc0baf78e4fb72250fd3ea8 = MAKE_CODE_OBJECT(module_filename_obj, 482, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[248], NULL, 1, 0, 0);
    codeobj_7f174b14ef224d1ab8d179ca4f1452a4 = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[112], mod_consts[249], mod_consts[250], 1, 0, 0);
    codeobj_5c5f2fbaac199b472a683749df34b7e9 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[251], NULL, 2, 0, 0);
    codeobj_a6528b9a3f4153b7592381a694823f75 = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[250], NULL, 1, 0, 0);
    codeobj_901012488d6292a3981ee9823d5d9de2 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[253], NULL, 1, 0, 0);
    codeobj_3410dcc1a4ea0f17a9c4226235408af9 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[253], NULL, 1, 0, 0);
    codeobj_3bafe4798794b7ac817c25e477861a06 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[253], NULL, 1, 0, 0);
    codeobj_5f3384663e2e5ea3295080aa91b07410 = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[253], NULL, 1, 0, 0);
    codeobj_f61f0f62ca6ae93c7186f500aefc3fbe = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[254], mod_consts[254], NULL, NULL, 0, 0, 0);
    codeobj_d35e36caa2e8206e49a6765b17dbdfb2 = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_NOFREE, mod_consts[223], mod_consts[223], mod_consts[255], NULL, 0, 0, 0);
    codeobj_70df52e2b237dba6f7154328345bf29f = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[255], NULL, 0, 0, 0);
    codeobj_3a2484e0f5a3d8d93507c9d6d94289b0 = MAKE_CODE_OBJECT(module_filename_obj, 570, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[256], NULL, 3, 0, 0);
    codeobj_7c88238f77f53c0b49be584c6d6cfb3e = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[226], mod_consts[226], mod_consts[257], NULL, 3, 0, 0);
    codeobj_3fead87452e8f9a2d4a3531d96b1e08a = MAKE_CODE_OBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[226], mod_consts[226], mod_consts[258], NULL, 3, 0, 0);
    codeobj_49762fe9c9e0bfd19d68f7e6ae854fcb = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[219], mod_consts[219], mod_consts[259], NULL, 1, 0, 0);
    codeobj_3cccea3ce8ab8916343e139e18d19163 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[260], NULL, 2, 0, 0);
    codeobj_f95ff57598fc2b4d6537fa6e04c79adf = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[261], NULL, 3, 0, 0);
    codeobj_1e9c57989024f41b5aef6a829e7de230 = MAKE_CODE_OBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[75], NULL, 1, 0, 0);
    codeobj_201a2c893bf39d25fbec0a2c2e43a82c = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[262], NULL, 1, 0, 0);
    codeobj_c3b226bc30f1700f3dab9500be36ea2e = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[263], NULL, 1, 0, 0);
    codeobj_f367202efa296c081bafd1df7dfea2e7 = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[230], mod_consts[230], NULL, NULL, 0, 0, 0);
    codeobj_253a13b8ca219cfdacf3171a60ae3921 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[264], NULL, 3, 0, 0);
    codeobj_e2d90417302cf2bd383d978143d112cb = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], NULL, NULL, 0, 0, 0);
    codeobj_f4080b10e2549625fc26c9f6bacca6de = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_5066590d070c27607459f3671e463306 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[265], NULL, 1, 0, 0);
    codeobj_18e7eecaba0179973a7f2110d2208083 = MAKE_CODE_OBJECT(module_filename_obj, 499, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[266], NULL, 3, 0, 0);
    codeobj_fe131ba0dbd9ac9100d88e4d2521f734 = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[231], mod_consts[231], mod_consts[267], NULL, 1, 0, 0);
    codeobj_0c471075e028b24dd1a396a57ea3fb19 = MAKE_CODE_OBJECT(module_filename_obj, 541, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[237], mod_consts[237], mod_consts[268], NULL, 1, 0, 0);
    codeobj_8fefb57dbf6bdd3dddfd9754b96a7219 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[269], NULL, 1, 0, 0);
    codeobj_43bef7aa96321a9122d6072e82c558b0 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[270], NULL, 4, 0, 0);
    codeobj_0a6c21d4591f2e79a0eb69e4cc60926c = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[271], NULL, 4, 0, 0);
    codeobj_ed5c6234a3a1096efc493056350a8e56 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[204], mod_consts[204], mod_consts[272], NULL, 3, 0, 0);
    codeobj_b1643b3b1231795b0b63b8e8f35d255d = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[273], NULL, 7, 0, 0);
    codeobj_f44927daef4c8804fbcff0e8ddcad958 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[274], NULL, 2, 0, 0);
    codeobj_0ed9067aa9658fed2aeef57da5118ca1 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[275], NULL, 2, 0, 0);
    codeobj_2260b48f1dd48f6c8a39aae57cc5f845 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[276], NULL, 4, 0, 0);
    codeobj_9620dae1a158ee12a786991c40e0c2d5 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[277], NULL, 6, 0, 0);
    codeobj_febd972d2235927d75b3942588cf3972 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[278], NULL, 2, 0, 0);
    codeobj_9ca2ad788b0e477597fef177f7eb4335 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[279], NULL, 2, 0, 0);
    codeobj_182733290ad99500eb708538b02a6442 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[280], NULL, 3, 0, 0);
    codeobj_e3254c6cff40ead4837673acb7bfac8f = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[281], NULL, 2, 0, 0);
    codeobj_d91016314693526f83e3d86cfe7404ba = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[282], NULL, 2, 0, 0);
    codeobj_33b284d7bd2705568de7ab98682a12de = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[253], NULL, 0, 0, 0);
    codeobj_46a3cb75982264d229c36cebb8e89f31 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[283], NULL, 1, 0, 0);
    codeobj_64115cb12b04696cb7b969c7e64fd8f8 = MAKE_CODE_OBJECT(module_filename_obj, 575, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[243], mod_consts[243], mod_consts[284], NULL, 1, 0, 0);
    codeobj_b88848620d6e4230d4bf2c1815b0d3b2 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[122], mod_consts[285], mod_consts[286], 1, 0, 0);
    codeobj_c3f409f9da99b7790237373e026a3ade = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
    codeobj_aa745d24a0d7d7d5ac8f2c61be1767db = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[228], mod_consts[228], mod_consts[287], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__10__rebuild_meta_tensor_no_storage();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__11__rebuild_qtensor();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__12__rebuild_parameter();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__13__import_dotted_name();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__14__accumulate(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__15_lambda();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__16__flatten_dense_tensors();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__17__flatten_sparse_tensors();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__18__unflatten_dense_tensors();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__19__unflatten_sparse_tensors();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__1__type(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__20__reorder_tensors_as();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__21__take_tensors();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__22_annotate();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__22_annotate$$$function__1_dec(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__23___repr__();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__24___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__25_reraise();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__26__get_available_device_type();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__27__get_device_attr();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__28__get_current_device_index();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__28__get_current_device_index$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__29__get_all_device_indices();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__29__get_all_device_indices$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__2__cuda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__30__get_devices_properties();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__30__get_devices_properties$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__31_get_current_device_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__32__get_device_index(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__33__handle_complex();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__34__element_size();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__35___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__36___get__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__37_classproperty();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__3__get_async_or_non_blocking();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__4__rebuild_tensor();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__5__rebuild_tensor_v2();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__6__validate_loaded_sparse_tensors();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__7__rebuild_sparse_tensor();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__8__rebuild_sparse_csr_tensor();


static PyObject *MAKE_FUNCTION_torch$_utils$$$function__9__rebuild_device_tensor_from_numpy();


// The module function definitions.
static PyObject *impl_torch$_utils$$$function__1__type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *par_non_blocking = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_new_module_name = NULL;
    PyObject *var_new_values_type_name = NULL;
    PyObject *var_new_values = NULL;
    PyObject *var_new_indices_type_name = NULL;
    PyObject *var_new_indices = NULL;
    struct Nuitka_FrameObject *frame_182733290ad99500eb708538b02a6442;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_182733290ad99500eb708538b02a6442 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_182733290ad99500eb708538b02a6442)) {
        Py_XDECREF(cache_frame_182733290ad99500eb708538b02a6442);

#if _DEBUG_REFCOUNTS
        if (cache_frame_182733290ad99500eb708538b02a6442 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_182733290ad99500eb708538b02a6442 = MAKE_FUNCTION_FRAME(codeobj_182733290ad99500eb708538b02a6442, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_182733290ad99500eb708538b02a6442->m_type_description == NULL);
    frame_182733290ad99500eb708538b02a6442 = cache_frame_182733290ad99500eb708538b02a6442;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_182733290ad99500eb708538b02a6442);
    assert(Py_REFCNT(frame_182733290ad99500eb708538b02a6442) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[1];
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_2 = par_non_blocking;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_non_blocking;
            assert(old != NULL);
            par_non_blocking = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_1 = par_dtype;
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
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[3];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_dtype);
        tmp_isinstance_inst_1 = par_dtype;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_4 = par_dtype;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 31;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_2 = par_dtype;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_cmp_expr_right_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_right_2 == NULL));
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_5 = par_dtype;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[7];
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 36;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 36;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_7 = par_dtype;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 37;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[9]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_module_name == NULL);
        var_new_module_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_new_module_name);
        tmp_add_expr_left_4 = var_new_module_name;
        tmp_add_expr_right_4 = mod_consts[3];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_8 = par_dtype;
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[4]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 38;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_values_type_name == NULL);
        var_new_values_type_name = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[11]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 39;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[12], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_values_type_name);
        tmp_args_element_value_6 = var_new_values_type_name;
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_7 = par_non_blocking;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_values == NULL);
        var_new_values = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(var_new_module_name);
        tmp_add_expr_left_5 = var_new_module_name;
        tmp_add_expr_right_5 = mod_consts[13];
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_indices_type_name == NULL);
        var_new_indices_type_name = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_8 = par_self;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 41;
        tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[14], tmp_args_element_value_8);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_indices_type_name);
        tmp_args_element_value_9 = var_new_indices_type_name;
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_10 = par_non_blocking;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_indices == NULL);
        var_new_indices = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_dtype);
        tmp_called_value_4 = par_dtype;
        CHECK_OBJECT(var_new_indices);
        tmp_args_element_value_11 = var_new_indices;
        CHECK_OBJECT(var_new_values);
        tmp_args_element_value_12 = var_new_values;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 42;
        tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[15]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_11 = par_dtype;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[6]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 43;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[16];
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 44;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 44;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_dtype);
        tmp_called_value_5 = par_dtype;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 45;
        tmp_args_element_value_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[15]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 45;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_15 = par_self;
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_16 = par_non_blocking;
        frame_182733290ad99500eb708538b02a6442->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[17],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_182733290ad99500eb708538b02a6442, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_182733290ad99500eb708538b02a6442->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_182733290ad99500eb708538b02a6442, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_182733290ad99500eb708538b02a6442,
        type_description_1,
        par_self,
        par_dtype,
        par_non_blocking,
        par_kwargs,
        var_new_module_name,
        var_new_values_type_name,
        var_new_values,
        var_new_indices_type_name,
        var_new_indices
    );


    // Release cached frame if used for exception.
    if (frame_182733290ad99500eb708538b02a6442 == cache_frame_182733290ad99500eb708538b02a6442) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_182733290ad99500eb708538b02a6442);
        cache_frame_182733290ad99500eb708538b02a6442 = NULL;
    }

    assertFrameObject(frame_182733290ad99500eb708538b02a6442);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_non_blocking);
    par_non_blocking = NULL;
    Py_XDECREF(var_new_module_name);
    var_new_module_name = NULL;
    Py_XDECREF(var_new_values_type_name);
    var_new_values_type_name = NULL;
    Py_XDECREF(var_new_values);
    var_new_values = NULL;
    Py_XDECREF(var_new_indices_type_name);
    var_new_indices_type_name = NULL;
    Py_XDECREF(var_new_indices);
    var_new_indices = NULL;
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

    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_non_blocking);
    par_non_blocking = NULL;
    Py_XDECREF(var_new_module_name);
    var_new_module_name = NULL;
    Py_XDECREF(var_new_values_type_name);
    var_new_values_type_name = NULL;
    Py_XDECREF(var_new_values);
    var_new_values = NULL;
    Py_XDECREF(var_new_indices_type_name);
    var_new_indices_type_name = NULL;
    Py_XDECREF(var_new_indices);
    var_new_indices = NULL;
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


static PyObject *impl_torch$_utils$$$function__2__cuda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_device = python_pars[1];
    PyObject *par_non_blocking = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_new_type = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_values = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_f95ff57598fc2b4d6537fa6e04c79adf;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f95ff57598fc2b4d6537fa6e04c79adf = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f95ff57598fc2b4d6537fa6e04c79adf)) {
        Py_XDECREF(cache_frame_f95ff57598fc2b4d6537fa6e04c79adf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f95ff57598fc2b4d6537fa6e04c79adf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f95ff57598fc2b4d6537fa6e04c79adf = MAKE_FUNCTION_FRAME(codeobj_f95ff57598fc2b4d6537fa6e04c79adf, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f95ff57598fc2b4d6537fa6e04c79adf->m_type_description == NULL);
    frame_f95ff57598fc2b4d6537fa6e04c79adf = cache_frame_f95ff57598fc2b4d6537fa6e04c79adf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f95ff57598fc2b4d6537fa6e04c79adf);
    assert(Py_REFCNT(frame_f95ff57598fc2b4d6537fa6e04c79adf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[19];
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_2 = par_non_blocking;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_3 = par_kwargs;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_non_blocking;
            assert(old != NULL);
            par_non_blocking = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 63;
            type_description_1 = "ooooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_device);
        tmp_cmp_expr_left_1 = par_device;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 65;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 66;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[22]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_cmp_expr_right_2 = par_device;
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_device);
        tmp_cmp_expr_left_3 = par_device;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[23];
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_3;
            Py_INCREF(par_device);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_4 = par_device;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 71;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[24], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 71;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[26]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[4]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_new_type == NULL);
        var_new_type = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 74;
        tmp_called_instance_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[14], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_6 = par_device;
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_7 = par_non_blocking;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[19],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_indices == NULL);
        var_indices = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[11]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_8 = par_self;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 75;
        tmp_called_instance_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[12], tmp_args_element_value_8);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_9 = par_device;
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_10 = par_non_blocking;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[19],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(var_new_type);
        tmp_called_value_3 = var_new_type;
        CHECK_OBJECT(var_indices);
        tmp_args_element_value_11 = var_indices;
        CHECK_OBJECT(var_values);
        tmp_args_element_value_12 = var_values;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 76;
        tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[15]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_getattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_15);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_getattr_attr_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[4]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_getattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        Py_DECREF(tmp_getattr_target_2);
        Py_DECREF(tmp_getattr_attr_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_new_type == NULL);
        var_new_type = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(var_new_type);
        tmp_called_value_4 = var_new_type;
        CHECK_OBJECT(par_self);
        tmp_called_instance_10 = par_self;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        tmp_args_element_value_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[15]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        tmp_called_instance_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_15 = par_self;
        CHECK_OBJECT(par_non_blocking);
        tmp_args_element_value_16 = par_non_blocking;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[17],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f95ff57598fc2b4d6537fa6e04c79adf, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f95ff57598fc2b4d6537fa6e04c79adf, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_17 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_18 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_19 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 79;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame) frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 71;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame) frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_6:;
    goto try_end_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[28]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_8:;
    goto try_return_handler_2;
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

    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[28]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_9:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame.f_lineno = 79;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[28]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_10:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f95ff57598fc2b4d6537fa6e04c79adf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f95ff57598fc2b4d6537fa6e04c79adf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f95ff57598fc2b4d6537fa6e04c79adf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f95ff57598fc2b4d6537fa6e04c79adf,
        type_description_1,
        par_self,
        par_device,
        par_non_blocking,
        par_kwargs,
        var_new_type,
        var_indices,
        var_values
    );


    // Release cached frame if used for exception.
    if (frame_f95ff57598fc2b4d6537fa6e04c79adf == cache_frame_f95ff57598fc2b4d6537fa6e04c79adf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f95ff57598fc2b4d6537fa6e04c79adf);
        cache_frame_f95ff57598fc2b4d6537fa6e04c79adf = NULL;
    }

    assertFrameObject(frame_f95ff57598fc2b4d6537fa6e04c79adf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(par_non_blocking);
    par_non_blocking = NULL;
    Py_XDECREF(var_new_type);
    var_new_type = NULL;
    Py_XDECREF(var_indices);
    var_indices = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(par_non_blocking);
    par_non_blocking = NULL;
    Py_XDECREF(var_new_type);
    var_new_type = NULL;
    Py_XDECREF(var_indices);
    var_indices = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
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


static PyObject *impl_torch$_utils$$$function__3__get_async_or_non_blocking(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function_name = python_pars[0];
    PyObject *par_non_blocking = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_argument = NULL;
    struct Nuitka_FrameObject *frame_253a13b8ca219cfdacf3171a60ae3921;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_253a13b8ca219cfdacf3171a60ae3921 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_253a13b8ca219cfdacf3171a60ae3921)) {
        Py_XDECREF(cache_frame_253a13b8ca219cfdacf3171a60ae3921);

#if _DEBUG_REFCOUNTS
        if (cache_frame_253a13b8ca219cfdacf3171a60ae3921 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_253a13b8ca219cfdacf3171a60ae3921 = MAKE_FUNCTION_FRAME(codeobj_253a13b8ca219cfdacf3171a60ae3921, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_253a13b8ca219cfdacf3171a60ae3921->m_type_description == NULL);
    frame_253a13b8ca219cfdacf3171a60ae3921 = cache_frame_253a13b8ca219cfdacf3171a60ae3921;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_253a13b8ca219cfdacf3171a60ae3921);
    assert(Py_REFCNT(frame_253a13b8ca219cfdacf3171a60ae3921) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_operand_value_1 = par_kwargs;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooNo";
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
    CHECK_OBJECT(par_non_blocking);
    tmp_return_value = par_non_blocking;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_kwargs);
        tmp_len_arg_1 = par_kwargs;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_or_left_value_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_cmp_expr_left_2 = mod_consts[30];
        CHECK_OBJECT(par_kwargs);
        tmp_cmp_expr_right_2 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        frame_253a13b8ca219cfdacf3171a60ae3921->m_frame.f_lineno = 87;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_value_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_list_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LIST_POP1(tmp_list_arg_value_1);
        Py_DECREF(tmp_list_arg_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        assert(var_argument == NULL);
        var_argument = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[32];
        CHECK_OBJECT(par_function_name);
        tmp_kw_call_arg_value_1_1 = par_function_name;
        CHECK_OBJECT(var_argument);
        tmp_kw_call_arg_value_2_1 = var_argument;
        frame_253a13b8ca219cfdacf3171a60ae3921->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        frame_253a13b8ca219cfdacf3171a60ae3921->m_frame.f_lineno = 88;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 88;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooNo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        frame_253a13b8ca219cfdacf3171a60ae3921->m_frame.f_lineno = 89;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooNo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_2 = par_kwargs;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooNo";
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
        exception_tb = MAKE_TRACEBACK(frame_253a13b8ca219cfdacf3171a60ae3921, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_253a13b8ca219cfdacf3171a60ae3921->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_253a13b8ca219cfdacf3171a60ae3921, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_253a13b8ca219cfdacf3171a60ae3921,
        type_description_1,
        par_function_name,
        par_non_blocking,
        par_kwargs,
        NULL,
        var_argument
    );


    // Release cached frame if used for exception.
    if (frame_253a13b8ca219cfdacf3171a60ae3921 == cache_frame_253a13b8ca219cfdacf3171a60ae3921) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_253a13b8ca219cfdacf3171a60ae3921);
        cache_frame_253a13b8ca219cfdacf3171a60ae3921 = NULL;
    }

    assertFrameObject(frame_253a13b8ca219cfdacf3171a60ae3921);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
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

    Py_XDECREF(var_argument);
    var_argument = NULL;
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
    CHECK_OBJECT(par_function_name);
    Py_DECREF(par_function_name);
    CHECK_OBJECT(par_non_blocking);
    Py_DECREF(par_non_blocking);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_function_name);
    Py_DECREF(par_function_name);
    CHECK_OBJECT(par_non_blocking);
    Py_DECREF(par_non_blocking);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__4__rebuild_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_storage = python_pars[0];
    PyObject *par_storage_offset = python_pars[1];
    PyObject *par_size = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_2260b48f1dd48f6c8a39aae57cc5f845;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2260b48f1dd48f6c8a39aae57cc5f845 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2260b48f1dd48f6c8a39aae57cc5f845)) {
        Py_XDECREF(cache_frame_2260b48f1dd48f6c8a39aae57cc5f845);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2260b48f1dd48f6c8a39aae57cc5f845 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2260b48f1dd48f6c8a39aae57cc5f845 = MAKE_FUNCTION_FRAME(codeobj_2260b48f1dd48f6c8a39aae57cc5f845, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2260b48f1dd48f6c8a39aae57cc5f845->m_type_description == NULL);
    frame_2260b48f1dd48f6c8a39aae57cc5f845 = cache_frame_2260b48f1dd48f6c8a39aae57cc5f845;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2260b48f1dd48f6c8a39aae57cc5f845);
    assert(Py_REFCNT(frame_2260b48f1dd48f6c8a39aae57cc5f845) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_posargs_values_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_storage);
        tmp_expression_value_2 = par_storage;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_storage);
        tmp_called_instance_1 = par_storage;
        frame_2260b48f1dd48f6c8a39aae57cc5f845->m_frame.f_lineno = 134;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[38]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[24]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[39], "l");
        frame_2260b48f1dd48f6c8a39aae57cc5f845->m_frame.f_lineno = 134;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, tmp_call_posargs_values_1, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_t);
        tmp_expression_value_4 = var_t;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_storage);
        tmp_called_instance_2 = par_storage;
        frame_2260b48f1dd48f6c8a39aae57cc5f845->m_frame.f_lineno = 135;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[38]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_storage_offset);
        tmp_args_element_value_2 = par_storage_offset;
        CHECK_OBJECT(par_size);
        tmp_args_element_value_3 = par_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        frame_2260b48f1dd48f6c8a39aae57cc5f845->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_2260b48f1dd48f6c8a39aae57cc5f845, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2260b48f1dd48f6c8a39aae57cc5f845->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2260b48f1dd48f6c8a39aae57cc5f845, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2260b48f1dd48f6c8a39aae57cc5f845,
        type_description_1,
        par_storage,
        par_storage_offset,
        par_size,
        par_stride,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_2260b48f1dd48f6c8a39aae57cc5f845 == cache_frame_2260b48f1dd48f6c8a39aae57cc5f845) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2260b48f1dd48f6c8a39aae57cc5f845);
        cache_frame_2260b48f1dd48f6c8a39aae57cc5f845 = NULL;
    }

    assertFrameObject(frame_2260b48f1dd48f6c8a39aae57cc5f845);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_t);
    Py_DECREF(var_t);
    var_t = NULL;
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

    Py_XDECREF(var_t);
    var_t = NULL;
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
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    CHECK_OBJECT(par_storage_offset);
    Py_DECREF(par_storage_offset);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    CHECK_OBJECT(par_storage_offset);
    Py_DECREF(par_storage_offset);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__5__rebuild_tensor_v2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_storage = python_pars[0];
    PyObject *par_storage_offset = python_pars[1];
    PyObject *par_size = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_requires_grad = python_pars[4];
    PyObject *par_backward_hooks = python_pars[5];
    PyObject *var_tensor = NULL;
    struct Nuitka_FrameObject *frame_9620dae1a158ee12a786991c40e0c2d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9620dae1a158ee12a786991c40e0c2d5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9620dae1a158ee12a786991c40e0c2d5)) {
        Py_XDECREF(cache_frame_9620dae1a158ee12a786991c40e0c2d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9620dae1a158ee12a786991c40e0c2d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9620dae1a158ee12a786991c40e0c2d5 = MAKE_FUNCTION_FRAME(codeobj_9620dae1a158ee12a786991c40e0c2d5, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9620dae1a158ee12a786991c40e0c2d5->m_type_description == NULL);
    frame_9620dae1a158ee12a786991c40e0c2d5 = cache_frame_9620dae1a158ee12a786991c40e0c2d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9620dae1a158ee12a786991c40e0c2d5);
    assert(Py_REFCNT(frame_9620dae1a158ee12a786991c40e0c2d5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_storage);
        tmp_args_element_value_1 = par_storage;
        CHECK_OBJECT(par_storage_offset);
        tmp_args_element_value_2 = par_storage_offset;
        CHECK_OBJECT(par_size);
        tmp_args_element_value_3 = par_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        frame_9620dae1a158ee12a786991c40e0c2d5->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensor == NULL);
        var_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_requires_grad);
        tmp_assattr_value_1 = par_requires_grad;
        CHECK_OBJECT(var_tensor);
        tmp_assattr_target_1 = var_tensor;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_backward_hooks);
        tmp_assattr_value_2 = par_backward_hooks;
        CHECK_OBJECT(var_tensor);
        tmp_assattr_target_2 = var_tensor;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9620dae1a158ee12a786991c40e0c2d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9620dae1a158ee12a786991c40e0c2d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9620dae1a158ee12a786991c40e0c2d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9620dae1a158ee12a786991c40e0c2d5,
        type_description_1,
        par_storage,
        par_storage_offset,
        par_size,
        par_stride,
        par_requires_grad,
        par_backward_hooks,
        var_tensor
    );


    // Release cached frame if used for exception.
    if (frame_9620dae1a158ee12a786991c40e0c2d5 == cache_frame_9620dae1a158ee12a786991c40e0c2d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9620dae1a158ee12a786991c40e0c2d5);
        cache_frame_9620dae1a158ee12a786991c40e0c2d5 = NULL;
    }

    assertFrameObject(frame_9620dae1a158ee12a786991c40e0c2d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_tensor);
    tmp_return_value = var_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
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

    Py_XDECREF(var_tensor);
    var_tensor = NULL;
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
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    CHECK_OBJECT(par_storage_offset);
    Py_DECREF(par_storage_offset);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    CHECK_OBJECT(par_backward_hooks);
    Py_DECREF(par_backward_hooks);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    CHECK_OBJECT(par_storage_offset);
    Py_DECREF(par_storage_offset);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    CHECK_OBJECT(par_backward_hooks);
    Py_DECREF(par_backward_hooks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__6__validate_loaded_sparse_tensors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_t = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_33b284d7bd2705568de7ab98682a12de;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_33b284d7bd2705568de7ab98682a12de = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_33b284d7bd2705568de7ab98682a12de)) {
        Py_XDECREF(cache_frame_33b284d7bd2705568de7ab98682a12de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33b284d7bd2705568de7ab98682a12de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33b284d7bd2705568de7ab98682a12de = MAKE_FUNCTION_FRAME(codeobj_33b284d7bd2705568de7ab98682a12de, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_33b284d7bd2705568de7ab98682a12de->m_type_description == NULL);
    frame_33b284d7bd2705568de7ab98682a12de = cache_frame_33b284d7bd2705568de7ab98682a12de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_33b284d7bd2705568de7ab98682a12de);
    assert(Py_REFCNT(frame_33b284d7bd2705568de7ab98682a12de) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto try_except_handler_2;
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
                type_description_1 = "o";
                exception_lineno = 162;
                goto try_except_handler_3;
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
            PyObject *old = var_t;
            var_t = tmp_assign_source_3;
            Py_INCREF(var_t);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_t);
        tmp_expression_value_1 = var_t;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 163;
            type_description_1 = "o";
            goto try_except_handler_3;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_called_instance_1 = var_t;
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 164;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_called_instance_2 = var_t;
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 164;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 164;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_called_instance_3 = var_t;
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 165;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[15]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 165;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_t);
        tmp_expression_value_3 = var_t;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 166;
            type_description_1 = "o";
            goto try_except_handler_3;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_6;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_called_instance_4 = var_t;
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 169;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[49]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 169;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_called_instance_5 = var_t;
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 169;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[50]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 169;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_expression_value_5 = var_t;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[51]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 170;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 170;
        tmp_args_element_value_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 170;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_t);
        tmp_called_instance_6 = var_t;
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 170;
        tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[15]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 170;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_6;
        tmp_mod_expr_left_1 = mod_consts[52];
        CHECK_OBJECT(var_t);
        tmp_expression_value_6 = var_t;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[53]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 172;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 172;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 162;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_33b284d7bd2705568de7ab98682a12de, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_33b284d7bd2705568de7ab98682a12de, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[54]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 176;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 161;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_33b284d7bd2705568de7ab98682a12de->m_frame) frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[54]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_33b284d7bd2705568de7ab98682a12de->m_frame.f_lineno = 176;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_33b284d7bd2705568de7ab98682a12de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33b284d7bd2705568de7ab98682a12de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33b284d7bd2705568de7ab98682a12de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33b284d7bd2705568de7ab98682a12de,
        type_description_1,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_33b284d7bd2705568de7ab98682a12de == cache_frame_33b284d7bd2705568de7ab98682a12de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_33b284d7bd2705568de7ab98682a12de);
        cache_frame_33b284d7bd2705568de7ab98682a12de = NULL;
    }

    assertFrameObject(frame_33b284d7bd2705568de7ab98682a12de);

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
    Py_XDECREF(var_t);
    var_t = NULL;
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

    Py_XDECREF(var_t);
    var_t = NULL;
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


static PyObject *impl_torch$_utils$$$function__7__rebuild_sparse_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_layout = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_indices = NULL;
    PyObject *var_values = NULL;
    PyObject *var_size = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0ed9067aa9658fed2aeef57da5118ca1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ed9067aa9658fed2aeef57da5118ca1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0ed9067aa9658fed2aeef57da5118ca1)) {
        Py_XDECREF(cache_frame_0ed9067aa9658fed2aeef57da5118ca1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ed9067aa9658fed2aeef57da5118ca1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ed9067aa9658fed2aeef57da5118ca1 = MAKE_FUNCTION_FRAME(codeobj_0ed9067aa9658fed2aeef57da5118ca1, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ed9067aa9658fed2aeef57da5118ca1->m_type_description == NULL);
    frame_0ed9067aa9658fed2aeef57da5118ca1 = cache_frame_0ed9067aa9658fed2aeef57da5118ca1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ed9067aa9658fed2aeef57da5118ca1);
    assert(Py_REFCNT(frame_0ed9067aa9658fed2aeef57da5118ca1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_layout);
        tmp_cmp_expr_left_1 = par_layout;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_data);
        tmp_iter_arg_1 = par_data;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 180;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 180;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
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
            exception_lineno = 180;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
                    exception_lineno = 180;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 180;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_indices == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_indices = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_values == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_values = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_size == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_size = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_indices);
        tmp_args_element_value_1 = var_indices;
        CHECK_OBJECT(var_values);
        tmp_args_element_value_2 = var_values;
        CHECK_OBJECT(var_size);
        tmp_args_element_value_3 = var_size;
        frame_0ed9067aa9658fed2aeef57da5118ca1->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[57],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_args_element_value_4 = var_result;
        frame_0ed9067aa9658fed2aeef57da5118ca1->m_frame.f_lineno = 182;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[59];
        CHECK_OBJECT(par_layout);
        tmp_mod_expr_right_1 = par_layout;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0ed9067aa9658fed2aeef57da5118ca1->m_frame.f_lineno = 185;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 185;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_0ed9067aa9658fed2aeef57da5118ca1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ed9067aa9658fed2aeef57da5118ca1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ed9067aa9658fed2aeef57da5118ca1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ed9067aa9658fed2aeef57da5118ca1,
        type_description_1,
        par_layout,
        par_data,
        var_indices,
        var_values,
        var_size,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_0ed9067aa9658fed2aeef57da5118ca1 == cache_frame_0ed9067aa9658fed2aeef57da5118ca1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ed9067aa9658fed2aeef57da5118ca1);
        cache_frame_0ed9067aa9658fed2aeef57da5118ca1 = NULL;
    }

    assertFrameObject(frame_0ed9067aa9658fed2aeef57da5118ca1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_indices);
    Py_DECREF(var_indices);
    var_indices = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    CHECK_OBJECT(var_size);
    Py_DECREF(var_size);
    var_size = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_indices);
    var_indices = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_layout);
    Py_DECREF(par_layout);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_layout);
    Py_DECREF(par_layout);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__8__rebuild_sparse_csr_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_layout = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_crow_indices = NULL;
    PyObject *var_col_indices = NULL;
    PyObject *var_values = NULL;
    PyObject *var_size = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f44927daef4c8804fbcff0e8ddcad958;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f44927daef4c8804fbcff0e8ddcad958 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f44927daef4c8804fbcff0e8ddcad958)) {
        Py_XDECREF(cache_frame_f44927daef4c8804fbcff0e8ddcad958);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f44927daef4c8804fbcff0e8ddcad958 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f44927daef4c8804fbcff0e8ddcad958 = MAKE_FUNCTION_FRAME(codeobj_f44927daef4c8804fbcff0e8ddcad958, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f44927daef4c8804fbcff0e8ddcad958->m_type_description == NULL);
    frame_f44927daef4c8804fbcff0e8ddcad958 = cache_frame_f44927daef4c8804fbcff0e8ddcad958;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f44927daef4c8804fbcff0e8ddcad958);
    assert(Py_REFCNT(frame_f44927daef4c8804fbcff0e8ddcad958) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_layout);
        tmp_cmp_expr_left_1 = par_layout;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_data);
        tmp_iter_arg_1 = par_data;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 189;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 189;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 189;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 189;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 189;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[61];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 189;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_crow_indices == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_crow_indices = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_col_indices == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_col_indices = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_values == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_values = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_size == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_size = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_crow_indices);
        tmp_args_element_value_1 = var_crow_indices;
        CHECK_OBJECT(var_col_indices);
        tmp_args_element_value_2 = var_col_indices;
        CHECK_OBJECT(var_values);
        tmp_args_element_value_3 = var_values;
        CHECK_OBJECT(var_size);
        tmp_args_element_value_4 = var_size;
        frame_f44927daef4c8804fbcff0e8ddcad958->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_1,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_args_element_value_5 = var_result;
        frame_f44927daef4c8804fbcff0e8ddcad958->m_frame.f_lineno = 191;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[59];
        CHECK_OBJECT(par_layout);
        tmp_mod_expr_right_1 = par_layout;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f44927daef4c8804fbcff0e8ddcad958->m_frame.f_lineno = 194;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 194;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_f44927daef4c8804fbcff0e8ddcad958, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f44927daef4c8804fbcff0e8ddcad958->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f44927daef4c8804fbcff0e8ddcad958, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f44927daef4c8804fbcff0e8ddcad958,
        type_description_1,
        par_layout,
        par_data,
        var_crow_indices,
        var_col_indices,
        var_values,
        var_size,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_f44927daef4c8804fbcff0e8ddcad958 == cache_frame_f44927daef4c8804fbcff0e8ddcad958) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f44927daef4c8804fbcff0e8ddcad958);
        cache_frame_f44927daef4c8804fbcff0e8ddcad958 = NULL;
    }

    assertFrameObject(frame_f44927daef4c8804fbcff0e8ddcad958);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_crow_indices);
    Py_DECREF(var_crow_indices);
    var_crow_indices = NULL;
    CHECK_OBJECT(var_col_indices);
    Py_DECREF(var_col_indices);
    var_col_indices = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    CHECK_OBJECT(var_size);
    Py_DECREF(var_size);
    var_size = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_crow_indices);
    var_crow_indices = NULL;
    Py_XDECREF(var_col_indices);
    var_col_indices = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_layout);
    Py_DECREF(par_layout);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_layout);
    Py_DECREF(par_layout);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__9__rebuild_device_tensor_from_numpy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *par_device = python_pars[2];
    PyObject *par_requires_grad = python_pars[3];
    PyObject *var_tensor = NULL;
    struct Nuitka_FrameObject *frame_43bef7aa96321a9122d6072e82c558b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_43bef7aa96321a9122d6072e82c558b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_43bef7aa96321a9122d6072e82c558b0)) {
        Py_XDECREF(cache_frame_43bef7aa96321a9122d6072e82c558b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43bef7aa96321a9122d6072e82c558b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43bef7aa96321a9122d6072e82c558b0 = MAKE_FUNCTION_FRAME(codeobj_43bef7aa96321a9122d6072e82c558b0, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43bef7aa96321a9122d6072e82c558b0->m_type_description == NULL);
    frame_43bef7aa96321a9122d6072e82c558b0 = cache_frame_43bef7aa96321a9122d6072e82c558b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43bef7aa96321a9122d6072e82c558b0);
    assert(Py_REFCNT(frame_43bef7aa96321a9122d6072e82c558b0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_43bef7aa96321a9122d6072e82c558b0->m_frame.f_lineno = 198;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[64]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_value_0_1 = par_dtype;
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_1_1 = par_device;
        frame_43bef7aa96321a9122d6072e82c558b0->m_frame.f_lineno = 198;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensor == NULL);
        var_tensor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_requires_grad);
        tmp_assattr_value_1 = par_requires_grad;
        CHECK_OBJECT(var_tensor);
        tmp_assattr_target_1 = var_tensor;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_43bef7aa96321a9122d6072e82c558b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43bef7aa96321a9122d6072e82c558b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43bef7aa96321a9122d6072e82c558b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43bef7aa96321a9122d6072e82c558b0,
        type_description_1,
        par_data,
        par_dtype,
        par_device,
        par_requires_grad,
        var_tensor
    );


    // Release cached frame if used for exception.
    if (frame_43bef7aa96321a9122d6072e82c558b0 == cache_frame_43bef7aa96321a9122d6072e82c558b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43bef7aa96321a9122d6072e82c558b0);
        cache_frame_43bef7aa96321a9122d6072e82c558b0 = NULL;
    }

    assertFrameObject(frame_43bef7aa96321a9122d6072e82c558b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_tensor);
    tmp_return_value = var_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
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

    Py_XDECREF(var_tensor);
    var_tensor = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__10__rebuild_meta_tensor_no_storage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    PyObject *par_size = python_pars[1];
    PyObject *par_stride = python_pars[2];
    PyObject *par_requires_grad = python_pars[3];
    struct Nuitka_FrameObject *frame_0a6c21d4591f2e79a0eb69e4cc60926c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c)) {
        Py_XDECREF(cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c = MAKE_FUNCTION_FRAME(codeobj_0a6c21d4591f2e79a0eb69e4cc60926c, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c->m_type_description == NULL);
    frame_0a6c21d4591f2e79a0eb69e4cc60926c = cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a6c21d4591f2e79a0eb69e4cc60926c);
    assert(Py_REFCNT(frame_0a6c21d4591f2e79a0eb69e4cc60926c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_kw_call_arg_value_0_1 = par_size;
        CHECK_OBJECT(par_stride);
        tmp_kw_call_arg_value_1_1 = par_stride;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_1 = par_dtype;
        tmp_kw_call_dict_value_1_1 = mod_consts[66];
        CHECK_OBJECT(par_requires_grad);
        tmp_kw_call_dict_value_2_1 = par_requires_grad;
        frame_0a6c21d4591f2e79a0eb69e4cc60926c->m_frame.f_lineno = 209;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a6c21d4591f2e79a0eb69e4cc60926c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a6c21d4591f2e79a0eb69e4cc60926c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a6c21d4591f2e79a0eb69e4cc60926c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a6c21d4591f2e79a0eb69e4cc60926c,
        type_description_1,
        par_dtype,
        par_size,
        par_stride,
        par_requires_grad
    );


    // Release cached frame if used for exception.
    if (frame_0a6c21d4591f2e79a0eb69e4cc60926c == cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c);
        cache_frame_0a6c21d4591f2e79a0eb69e4cc60926c = NULL;
    }

    assertFrameObject(frame_0a6c21d4591f2e79a0eb69e4cc60926c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__11__rebuild_qtensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_storage = python_pars[0];
    PyObject *par_storage_offset = python_pars[1];
    PyObject *par_size = python_pars[2];
    PyObject *par_stride = python_pars[3];
    PyObject *par_quantizer_params = python_pars[4];
    PyObject *par_requires_grad = python_pars[5];
    PyObject *par_backward_hooks = python_pars[6];
    PyObject *var_qscheme = NULL;
    PyObject *var__ = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_zero_point = NULL;
    PyObject *var_tensor = NULL;
    PyObject *var_scales = NULL;
    PyObject *var_zero_points = NULL;
    PyObject *var_axis = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b1643b3b1231795b0b63b8e8f35d255d;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b1643b3b1231795b0b63b8e8f35d255d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b1643b3b1231795b0b63b8e8f35d255d)) {
        Py_XDECREF(cache_frame_b1643b3b1231795b0b63b8e8f35d255d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1643b3b1231795b0b63b8e8f35d255d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1643b3b1231795b0b63b8e8f35d255d = MAKE_FUNCTION_FRAME(codeobj_b1643b3b1231795b0b63b8e8f35d255d, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1643b3b1231795b0b63b8e8f35d255d->m_type_description == NULL);
    frame_b1643b3b1231795b0b63b8e8f35d255d = cache_frame_b1643b3b1231795b0b63b8e8f35d255d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1643b3b1231795b0b63b8e8f35d255d);
    assert(Py_REFCNT(frame_b1643b3b1231795b0b63b8e8f35d255d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_quantizer_params);
        tmp_expression_value_1 = par_quantizer_params;
        tmp_subscript_value_1 = mod_consts[68];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qscheme == NULL);
        var_qscheme = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_qscheme);
        tmp_cmp_expr_left_1 = var_qscheme;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_quantizer_params);
        tmp_iter_arg_1 = par_quantizer_params;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 217;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 217;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 217;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 217;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 217;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_scale == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_scale = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_zero_point == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_zero_point = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[70]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_kw_call_arg_value_0_1 = par_size;
        CHECK_OBJECT(var_scale);
        tmp_kw_call_dict_value_0_1 = var_scale;
        CHECK_OBJECT(var_zero_point);
        tmp_kw_call_dict_value_1_1 = var_zero_point;
        CHECK_OBJECT(par_storage);
        tmp_expression_value_4 = par_storage;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[37]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 218;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensor == NULL);
        var_tensor = tmp_assign_source_9;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_qscheme);
        tmp_cmp_expr_left_2 = var_qscheme;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[72]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[73]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_quantizer_params);
        tmp_iter_arg_2 = par_quantizer_params;
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_4, 0, 4);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 220;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_5, 1, 4);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 220;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_6, 2, 4);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 220;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_7, 3, 4);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 220;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_4 == NULL);
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_14;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 220;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[61];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 220;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_15);
        var__ = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        assert(var_scales == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_scales = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
        assert(var_zero_points == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_zero_points = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_4;
        assert(var_axis == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_axis = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_type_arg_2;
        CHECK_OBJECT(var_scales);
        tmp_type_arg_1 = var_scales;
        tmp_cmp_expr_left_3 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_3 == NULL));
        tmp_cmp_expr_right_3 = (PyObject *)&PyList_Type;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_zero_points);
        tmp_type_arg_2 = var_zero_points;
        tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_cmp_expr_left_4 == NULL));
        tmp_cmp_expr_right_4 = (PyObject *)&PyList_Type;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_qscheme);
        tmp_cmp_expr_left_5 = var_qscheme;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[72]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scales);
        tmp_kw_call_arg_value_0_2 = var_scales;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[74]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 223;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scales;
            assert(old != NULL);
            var_scales = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zero_points);
        tmp_kw_call_arg_value_0_3 = var_zero_points;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[76]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 224;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zero_points;
            assert(old != NULL);
            var_zero_points = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[36]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scales);
        tmp_kw_call_arg_value_0_4 = var_scales;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[77]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 226;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scales;
            assert(old != NULL);
            var_scales = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[36]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zero_points);
        tmp_kw_call_arg_value_0_5 = var_zero_points;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[77]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 227;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zero_points;
            assert(old != NULL);
            var_zero_points = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[78]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_kw_call_arg_value_0_6 = par_size;
        CHECK_OBJECT(var_scales);
        tmp_kw_call_dict_value_0_6 = var_scales;
        CHECK_OBJECT(var_zero_points);
        tmp_kw_call_dict_value_1_2 = var_zero_points;
        CHECK_OBJECT(var_axis);
        tmp_kw_call_dict_value_2_2 = var_axis;
        CHECK_OBJECT(par_storage);
        tmp_expression_value_17 = par_storage;
        tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[37]);
        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 228;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_1};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[79]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tensor == NULL);
        var_tensor = tmp_assign_source_23;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_7 = mod_consts[80];
        CHECK_OBJECT(var_qscheme);
        tmp_kw_call_arg_value_1_1 = var_qscheme;
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 231;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 231;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_tensor);
        tmp_expression_value_18 = var_tensor;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[41]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_storage == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_storage;
        CHECK_OBJECT(par_storage_offset);
        tmp_args_element_value_2 = par_storage_offset;
        if (par_size == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_requires_grad);
        tmp_assattr_value_1 = par_requires_grad;
        CHECK_OBJECT(var_tensor);
        tmp_assattr_target_1 = var_tensor;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_backward_hooks);
        tmp_assattr_value_2 = par_backward_hooks;
        CHECK_OBJECT(var_tensor);
        tmp_assattr_target_2 = var_tensor;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1643b3b1231795b0b63b8e8f35d255d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1643b3b1231795b0b63b8e8f35d255d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1643b3b1231795b0b63b8e8f35d255d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1643b3b1231795b0b63b8e8f35d255d,
        type_description_1,
        par_storage,
        par_storage_offset,
        par_size,
        par_stride,
        par_quantizer_params,
        par_requires_grad,
        par_backward_hooks,
        var_qscheme,
        var__,
        var_scale,
        var_zero_point,
        var_tensor,
        var_scales,
        var_zero_points,
        var_axis
    );


    // Release cached frame if used for exception.
    if (frame_b1643b3b1231795b0b63b8e8f35d255d == cache_frame_b1643b3b1231795b0b63b8e8f35d255d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1643b3b1231795b0b63b8e8f35d255d);
        cache_frame_b1643b3b1231795b0b63b8e8f35d255d = NULL;
    }

    assertFrameObject(frame_b1643b3b1231795b0b63b8e8f35d255d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_tensor);
    tmp_return_value = var_tensor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qscheme);
    Py_DECREF(var_qscheme);
    var_qscheme = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
    Py_XDECREF(var_zero_point);
    var_zero_point = NULL;
    CHECK_OBJECT(var_tensor);
    Py_DECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_scales);
    var_scales = NULL;
    Py_XDECREF(var_zero_points);
    var_zero_points = NULL;
    Py_XDECREF(var_axis);
    var_axis = NULL;
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

    Py_XDECREF(var_qscheme);
    var_qscheme = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
    Py_XDECREF(var_zero_point);
    var_zero_point = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    Py_XDECREF(var_scales);
    var_scales = NULL;
    Py_XDECREF(var_zero_points);
    var_zero_points = NULL;
    Py_XDECREF(var_axis);
    var_axis = NULL;
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
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    CHECK_OBJECT(par_storage_offset);
    Py_DECREF(par_storage_offset);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_quantizer_params);
    Py_DECREF(par_quantizer_params);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    CHECK_OBJECT(par_backward_hooks);
    Py_DECREF(par_backward_hooks);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    CHECK_OBJECT(par_storage_offset);
    Py_DECREF(par_storage_offset);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_quantizer_params);
    Py_DECREF(par_quantizer_params);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    CHECK_OBJECT(par_backward_hooks);
    Py_DECREF(par_backward_hooks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__12__rebuild_parameter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_requires_grad = python_pars[1];
    PyObject *par_backward_hooks = python_pars[2];
    PyObject *var_param = NULL;
    struct Nuitka_FrameObject *frame_ed5c6234a3a1096efc493056350a8e56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ed5c6234a3a1096efc493056350a8e56 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ed5c6234a3a1096efc493056350a8e56)) {
        Py_XDECREF(cache_frame_ed5c6234a3a1096efc493056350a8e56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed5c6234a3a1096efc493056350a8e56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed5c6234a3a1096efc493056350a8e56 = MAKE_FUNCTION_FRAME(codeobj_ed5c6234a3a1096efc493056350a8e56, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed5c6234a3a1096efc493056350a8e56->m_type_description == NULL);
    frame_ed5c6234a3a1096efc493056350a8e56 = cache_frame_ed5c6234a3a1096efc493056350a8e56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ed5c6234a3a1096efc493056350a8e56);
    assert(Py_REFCNT(frame_ed5c6234a3a1096efc493056350a8e56) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        CHECK_OBJECT(par_requires_grad);
        tmp_args_element_value_2 = par_requires_grad;
        frame_ed5c6234a3a1096efc493056350a8e56->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[83],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_param == NULL);
        var_param = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_backward_hooks);
        tmp_assattr_value_1 = par_backward_hooks;
        CHECK_OBJECT(var_param);
        tmp_assattr_target_1 = var_param;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed5c6234a3a1096efc493056350a8e56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed5c6234a3a1096efc493056350a8e56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed5c6234a3a1096efc493056350a8e56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed5c6234a3a1096efc493056350a8e56,
        type_description_1,
        par_data,
        par_requires_grad,
        par_backward_hooks,
        var_param
    );


    // Release cached frame if used for exception.
    if (frame_ed5c6234a3a1096efc493056350a8e56 == cache_frame_ed5c6234a3a1096efc493056350a8e56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed5c6234a3a1096efc493056350a8e56);
        cache_frame_ed5c6234a3a1096efc493056350a8e56 = NULL;
    }

    assertFrameObject(frame_ed5c6234a3a1096efc493056350a8e56);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_param);
    tmp_return_value = var_param;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_param);
    Py_DECREF(var_param);
    var_param = NULL;
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

    Py_XDECREF(var_param);
    var_param = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    CHECK_OBJECT(par_backward_hooks);
    Py_DECREF(par_backward_hooks);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_requires_grad);
    Py_DECREF(par_requires_grad);
    CHECK_OBJECT(par_backward_hooks);
    Py_DECREF(par_backward_hooks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__13__import_dotted_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *var_components = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_component = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8fefb57dbf6bdd3dddfd9754b96a7219;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219)) {
        Py_XDECREF(cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219 = MAKE_FUNCTION_FRAME(codeobj_8fefb57dbf6bdd3dddfd9754b96a7219, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219->m_type_description == NULL);
    frame_8fefb57dbf6bdd3dddfd9754b96a7219 = cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8fefb57dbf6bdd3dddfd9754b96a7219);
    assert(Py_REFCNT(frame_8fefb57dbf6bdd3dddfd9754b96a7219) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_name);
        tmp_expression_value_1 = par_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8fefb57dbf6bdd3dddfd9754b96a7219->m_frame.f_lineno = 251;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[85]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_components == NULL);
        var_components = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_components);
        tmp_expression_value_2 = var_components;
        tmp_subscript_value_1 = mod_consts[68];
        tmp_name_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_name_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8fefb57dbf6bdd3dddfd9754b96a7219->m_frame.f_lineno = 252;
        tmp_assign_source_2 = IMPORT_MODULE1(tmp_name_value_1);
        Py_DECREF(tmp_name_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_components);
        tmp_expression_value_3 = var_components;
        tmp_subscript_value_2 = mod_consts[86];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 253;
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
            PyObject *old = var_component;
            var_component = tmp_assign_source_5;
            Py_INCREF(var_component);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        if (var_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = var_obj;
        CHECK_OBJECT(var_component);
        tmp_getattr_attr_1 = var_component;
        tmp_assign_source_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_obj;
            var_obj = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 253;
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
    if (var_obj == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 255;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_obj;
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
        exception_tb = MAKE_TRACEBACK(frame_8fefb57dbf6bdd3dddfd9754b96a7219, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fefb57dbf6bdd3dddfd9754b96a7219->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fefb57dbf6bdd3dddfd9754b96a7219, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fefb57dbf6bdd3dddfd9754b96a7219,
        type_description_1,
        par_name,
        var_components,
        var_obj,
        var_component
    );


    // Release cached frame if used for exception.
    if (frame_8fefb57dbf6bdd3dddfd9754b96a7219 == cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219);
        cache_frame_8fefb57dbf6bdd3dddfd9754b96a7219 = NULL;
    }

    assertFrameObject(frame_8fefb57dbf6bdd3dddfd9754b96a7219);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_components);
    Py_DECREF(var_components);
    var_components = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
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

    Py_XDECREF(var_components);
    var_components = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
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


static PyObject *impl_torch$_utils$$$function__15_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_5c5f2fbaac199b472a683749df34b7e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c5f2fbaac199b472a683749df34b7e9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c5f2fbaac199b472a683749df34b7e9)) {
        Py_XDECREF(cache_frame_5c5f2fbaac199b472a683749df34b7e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c5f2fbaac199b472a683749df34b7e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c5f2fbaac199b472a683749df34b7e9 = MAKE_FUNCTION_FRAME(codeobj_5c5f2fbaac199b472a683749df34b7e9, module_torch$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c5f2fbaac199b472a683749df34b7e9->m_type_description == NULL);
    frame_5c5f2fbaac199b472a683749df34b7e9 = cache_frame_5c5f2fbaac199b472a683749df34b7e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c5f2fbaac199b472a683749df34b7e9);
    assert(Py_REFCNT(frame_5c5f2fbaac199b472a683749df34b7e9) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_add_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_add_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_5c5f2fbaac199b472a683749df34b7e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c5f2fbaac199b472a683749df34b7e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c5f2fbaac199b472a683749df34b7e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c5f2fbaac199b472a683749df34b7e9,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_5c5f2fbaac199b472a683749df34b7e9 == cache_frame_5c5f2fbaac199b472a683749df34b7e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c5f2fbaac199b472a683749df34b7e9);
        cache_frame_5c5f2fbaac199b472a683749df34b7e9 = NULL;
    }

    assertFrameObject(frame_5c5f2fbaac199b472a683749df34b7e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__14__accumulate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_iterable = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_fn = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_fn;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_iterable;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iterable);
    Py_DECREF(par_iterable);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate_locals {
    PyObject *var_it;
    PyObject *var_total;
    PyObject *var_element;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate_locals *generator_heap = (struct torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_it = NULL;
    generator_heap->var_total = NULL;
    generator_heap->var_element = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3cccea3ce8ab8916343e139e18d19163, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[89]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_it == NULL);
        generator_heap->var_it = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(generator_heap->var_it);
        tmp_value_value_1 = generator_heap->var_it;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooo";
            generator_heap->exception_lineno = 265;
            goto try_except_handler_2;
        }
        assert(generator_heap->var_total == NULL);
        generator_heap->var_total = tmp_assign_source_2;
    }
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

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_StopIteration;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 264;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_total);
        tmp_expression_value_1 = generator_heap->var_total;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->var_it);
        tmp_iter_arg_2 = generator_heap->var_it;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooo";
                generator_heap->exception_lineno = 269;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_element;
            generator_heap->var_element = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_element);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[90]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (generator_heap->var_total == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[91]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_1 = generator_heap->var_total;
        CHECK_OBJECT(generator_heap->var_element);
        tmp_args_element_value_2 = generator_heap->var_element;
        generator->m_frame->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->var_total;
            generator_heap->var_total = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_total);
        tmp_expression_value_2 = generator_heap->var_total;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_2;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 269;
        generator_heap->type_description_1 = "ccooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_it,
            generator_heap->var_total,
            generator_heap->var_element
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
    goto try_end_3;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(generator_heap->var_it);
    Py_DECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    goto function_return_exit;
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

    Py_XDECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var_total);
    generator_heap->var_total = NULL;
    Py_XDECREF(generator_heap->var_element);
    generator_heap->var_element = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_it);
    Py_DECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var_total);
    generator_heap->var_total = NULL;
    Py_XDECREF(generator_heap->var_element);
    generator_heap->var_element = NULL;


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

static PyObject *MAKE_GENERATOR_torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate_context,
        module_torch$_utils,
        mod_consts[92],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_3cccea3ce8ab8916343e139e18d19163,
        closure,
        2,
        sizeof(struct torch$_utils$$$function__14__accumulate$$$genobj__1__accumulate_locals)
    );
}


static PyObject *impl_torch$_utils$$$function__16__flatten_dense_tensors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensors = python_pars[0];
    struct Nuitka_FrameObject *frame_201a2c893bf39d25fbec0a2c2e43a82c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_201a2c893bf39d25fbec0a2c2e43a82c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_201a2c893bf39d25fbec0a2c2e43a82c)) {
        Py_XDECREF(cache_frame_201a2c893bf39d25fbec0a2c2e43a82c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_201a2c893bf39d25fbec0a2c2e43a82c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_201a2c893bf39d25fbec0a2c2e43a82c = MAKE_FUNCTION_FRAME(codeobj_201a2c893bf39d25fbec0a2c2e43a82c, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_201a2c893bf39d25fbec0a2c2e43a82c->m_type_description == NULL);
    frame_201a2c893bf39d25fbec0a2c2e43a82c = cache_frame_201a2c893bf39d25fbec0a2c2e43a82c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_201a2c893bf39d25fbec0a2c2e43a82c);
    assert(Py_REFCNT(frame_201a2c893bf39d25fbec0a2c2e43a82c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[93]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[94]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensors);
        tmp_args_element_value_1 = par_tensors;
        frame_201a2c893bf39d25fbec0a2c2e43a82c->m_frame.f_lineno = 288;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[95], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
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
        exception_tb = MAKE_TRACEBACK(frame_201a2c893bf39d25fbec0a2c2e43a82c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_201a2c893bf39d25fbec0a2c2e43a82c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_201a2c893bf39d25fbec0a2c2e43a82c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_201a2c893bf39d25fbec0a2c2e43a82c,
        type_description_1,
        par_tensors
    );


    // Release cached frame if used for exception.
    if (frame_201a2c893bf39d25fbec0a2c2e43a82c == cache_frame_201a2c893bf39d25fbec0a2c2e43a82c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_201a2c893bf39d25fbec0a2c2e43a82c);
        cache_frame_201a2c893bf39d25fbec0a2c2e43a82c = NULL;
    }

    assertFrameObject(frame_201a2c893bf39d25fbec0a2c2e43a82c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__17__flatten_sparse_tensors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensors = python_pars[0];
    PyObject *var_flat_indices = NULL;
    PyObject *var_flat_values = NULL;
    PyObject *outline_0_var_t = NULL;
    PyObject *outline_1_var_t = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c3b226bc30f1700f3dab9500be36ea2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_901012488d6292a3981ee9823d5d9de2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_901012488d6292a3981ee9823d5d9de2_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_3410dcc1a4ea0f17a9c4226235408af9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c3b226bc30f1700f3dab9500be36ea2e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c3b226bc30f1700f3dab9500be36ea2e)) {
        Py_XDECREF(cache_frame_c3b226bc30f1700f3dab9500be36ea2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3b226bc30f1700f3dab9500be36ea2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3b226bc30f1700f3dab9500be36ea2e = MAKE_FUNCTION_FRAME(codeobj_c3b226bc30f1700f3dab9500be36ea2e, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3b226bc30f1700f3dab9500be36ea2e->m_type_description == NULL);
    frame_c3b226bc30f1700f3dab9500be36ea2e = cache_frame_c3b226bc30f1700f3dab9500be36ea2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3b226bc30f1700f3dab9500be36ea2e);
    assert(Py_REFCNT(frame_c3b226bc30f1700f3dab9500be36ea2e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[94]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[95]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_tensors);
            tmp_iter_arg_1 = par_tensors;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_1 = "ooo";
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
        if (isFrameUnusable(cache_frame_901012488d6292a3981ee9823d5d9de2_2)) {
            Py_XDECREF(cache_frame_901012488d6292a3981ee9823d5d9de2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_901012488d6292a3981ee9823d5d9de2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_901012488d6292a3981ee9823d5d9de2_2 = MAKE_FUNCTION_FRAME(codeobj_901012488d6292a3981ee9823d5d9de2, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_901012488d6292a3981ee9823d5d9de2_2->m_type_description == NULL);
        frame_901012488d6292a3981ee9823d5d9de2_2 = cache_frame_901012488d6292a3981ee9823d5d9de2_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_901012488d6292a3981ee9823d5d9de2_2);
        assert(Py_REFCNT(frame_901012488d6292a3981ee9823d5d9de2_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 302;
                    goto try_except_handler_3;
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
                PyObject *old = outline_0_var_t;
                outline_0_var_t = tmp_assign_source_5;
                Py_INCREF(outline_0_var_t);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_t);
            tmp_args_element_value_2 = outline_0_var_t;
            frame_901012488d6292a3981ee9823d5d9de2_2->m_frame.f_lineno = 302;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_2);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_901012488d6292a3981ee9823d5d9de2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_901012488d6292a3981ee9823d5d9de2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_901012488d6292a3981ee9823d5d9de2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_901012488d6292a3981ee9823d5d9de2_2,
            type_description_2,
            outline_0_var_t
        );


        // Release cached frame if used for exception.
        if (frame_901012488d6292a3981ee9823d5d9de2_2 == cache_frame_901012488d6292a3981ee9823d5d9de2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_901012488d6292a3981ee9823d5d9de2_2);
            cache_frame_901012488d6292a3981ee9823d5d9de2_2 = NULL;
        }

        assertFrameObject(frame_901012488d6292a3981ee9823d5d9de2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
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

        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
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
        exception_lineno = 302;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_c3b226bc30f1700f3dab9500be36ea2e->m_frame.f_lineno = 302;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_flat_indices == NULL);
        var_flat_indices = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[93]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[94]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[95]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_tensors);
            tmp_iter_arg_2 = par_tensors;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3)) {
            Py_XDECREF(cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3 = MAKE_FUNCTION_FRAME(codeobj_3410dcc1a4ea0f17a9c4226235408af9, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3->m_type_description == NULL);
        frame_3410dcc1a4ea0f17a9c4226235408af9_3 = cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3410dcc1a4ea0f17a9c4226235408af9_3);
        assert(Py_REFCNT(frame_3410dcc1a4ea0f17a9c4226235408af9_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 303;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_t;
                outline_1_var_t = tmp_assign_source_10;
                Py_INCREF(outline_1_var_t);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_1_var_t);
            tmp_args_element_value_4 = outline_1_var_t;
            frame_3410dcc1a4ea0f17a9c4226235408af9_3->m_frame.f_lineno = 303;
            tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[12], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_value_3 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3410dcc1a4ea0f17a9c4226235408af9_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3410dcc1a4ea0f17a9c4226235408af9_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3410dcc1a4ea0f17a9c4226235408af9_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3410dcc1a4ea0f17a9c4226235408af9_3,
            type_description_2,
            outline_1_var_t
        );


        // Release cached frame if used for exception.
        if (frame_3410dcc1a4ea0f17a9c4226235408af9_3 == cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3);
            cache_frame_3410dcc1a4ea0f17a9c4226235408af9_3 = NULL;
        }

        assertFrameObject(frame_3410dcc1a4ea0f17a9c4226235408af9_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_t);
        outline_1_var_t = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_t);
        outline_1_var_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 303;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_c3b226bc30f1700f3dab9500be36ea2e->m_frame.f_lineno = 303;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_flat_values == NULL);
        var_flat_values = tmp_assign_source_6;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3b226bc30f1700f3dab9500be36ea2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3b226bc30f1700f3dab9500be36ea2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3b226bc30f1700f3dab9500be36ea2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3b226bc30f1700f3dab9500be36ea2e,
        type_description_1,
        par_tensors,
        var_flat_indices,
        var_flat_values
    );


    // Release cached frame if used for exception.
    if (frame_c3b226bc30f1700f3dab9500be36ea2e == cache_frame_c3b226bc30f1700f3dab9500be36ea2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3b226bc30f1700f3dab9500be36ea2e);
        cache_frame_c3b226bc30f1700f3dab9500be36ea2e = NULL;
    }

    assertFrameObject(frame_c3b226bc30f1700f3dab9500be36ea2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_flat_indices);
        tmp_tuple_element_1 = var_flat_indices;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_flat_values);
        tmp_tuple_element_1 = var_flat_values;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_flat_indices);
    Py_DECREF(var_flat_indices);
    var_flat_indices = NULL;
    CHECK_OBJECT(var_flat_values);
    Py_DECREF(var_flat_values);
    var_flat_values = NULL;
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

    Py_XDECREF(var_flat_indices);
    var_flat_indices = NULL;
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
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__18__unflatten_dense_tensors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flat = python_pars[0];
    PyObject *par_tensors = python_pars[1];
    struct Nuitka_FrameObject *frame_e3254c6cff40ead4837673acb7bfac8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3254c6cff40ead4837673acb7bfac8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3254c6cff40ead4837673acb7bfac8f)) {
        Py_XDECREF(cache_frame_e3254c6cff40ead4837673acb7bfac8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3254c6cff40ead4837673acb7bfac8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3254c6cff40ead4837673acb7bfac8f = MAKE_FUNCTION_FRAME(codeobj_e3254c6cff40ead4837673acb7bfac8f, module_torch$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e3254c6cff40ead4837673acb7bfac8f->m_type_description == NULL);
    frame_e3254c6cff40ead4837673acb7bfac8f = cache_frame_e3254c6cff40ead4837673acb7bfac8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e3254c6cff40ead4837673acb7bfac8f);
    assert(Py_REFCNT(frame_e3254c6cff40ead4837673acb7bfac8f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[93]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[94]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_flat);
        tmp_args_element_value_1 = par_flat;
        CHECK_OBJECT(par_tensors);
        tmp_args_element_value_2 = par_tensors;
        frame_e3254c6cff40ead4837673acb7bfac8f->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[98],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
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
        exception_tb = MAKE_TRACEBACK(frame_e3254c6cff40ead4837673acb7bfac8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3254c6cff40ead4837673acb7bfac8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3254c6cff40ead4837673acb7bfac8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3254c6cff40ead4837673acb7bfac8f,
        type_description_1,
        par_flat,
        par_tensors
    );


    // Release cached frame if used for exception.
    if (frame_e3254c6cff40ead4837673acb7bfac8f == cache_frame_e3254c6cff40ead4837673acb7bfac8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e3254c6cff40ead4837673acb7bfac8f);
        cache_frame_e3254c6cff40ead4837673acb7bfac8f = NULL;
    }

    assertFrameObject(frame_e3254c6cff40ead4837673acb7bfac8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__19__unflatten_sparse_tensors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flat = python_pars[0];
    PyObject *par_tensors = python_pars[1];
    PyObject *var_flat_indices = NULL;
    PyObject *var_flat_values = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_values = NULL;
    PyObject *var_outputs = NULL;
    PyObject *var_t = NULL;
    PyObject *var_i = NULL;
    PyObject *var_v = NULL;
    PyObject *outline_0_var_t = NULL;
    PyObject *outline_1_var_t = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d91016314693526f83e3d86cfe7404ba;
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
    struct Nuitka_FrameObject *frame_3bafe4798794b7ac817c25e477861a06_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3bafe4798794b7ac817c25e477861a06_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_5f3384663e2e5ea3295080aa91b07410_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_5f3384663e2e5ea3295080aa91b07410_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d91016314693526f83e3d86cfe7404ba = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d91016314693526f83e3d86cfe7404ba)) {
        Py_XDECREF(cache_frame_d91016314693526f83e3d86cfe7404ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d91016314693526f83e3d86cfe7404ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d91016314693526f83e3d86cfe7404ba = MAKE_FUNCTION_FRAME(codeobj_d91016314693526f83e3d86cfe7404ba, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d91016314693526f83e3d86cfe7404ba->m_type_description == NULL);
    frame_d91016314693526f83e3d86cfe7404ba = cache_frame_d91016314693526f83e3d86cfe7404ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d91016314693526f83e3d86cfe7404ba);
    assert(Py_REFCNT(frame_d91016314693526f83e3d86cfe7404ba) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_flat);
        tmp_iter_arg_1 = par_flat;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 338;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 338;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 338;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[100];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 338;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_flat_indices == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_flat_indices = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_flat_values == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_flat_values = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[94]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[98]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_flat_indices);
        tmp_args_element_value_1 = var_flat_indices;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_tensors);
            tmp_iter_arg_2 = par_tensors;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
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
        if (isFrameUnusable(cache_frame_3bafe4798794b7ac817c25e477861a06_2)) {
            Py_XDECREF(cache_frame_3bafe4798794b7ac817c25e477861a06_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3bafe4798794b7ac817c25e477861a06_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3bafe4798794b7ac817c25e477861a06_2 = MAKE_FUNCTION_FRAME(codeobj_3bafe4798794b7ac817c25e477861a06, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3bafe4798794b7ac817c25e477861a06_2->m_type_description == NULL);
        frame_3bafe4798794b7ac817c25e477861a06_2 = cache_frame_3bafe4798794b7ac817c25e477861a06_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3bafe4798794b7ac817c25e477861a06_2);
        assert(Py_REFCNT(frame_3bafe4798794b7ac817c25e477861a06_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 339;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_t;
                outline_0_var_t = tmp_assign_source_10;
                Py_INCREF(outline_0_var_t);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_0_var_t);
            tmp_args_element_value_3 = outline_0_var_t;
            frame_3bafe4798794b7ac817c25e477861a06_2->m_frame.f_lineno = 339;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
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

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3bafe4798794b7ac817c25e477861a06_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3bafe4798794b7ac817c25e477861a06_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3bafe4798794b7ac817c25e477861a06_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3bafe4798794b7ac817c25e477861a06_2,
            type_description_2,
            outline_0_var_t
        );


        // Release cached frame if used for exception.
        if (frame_3bafe4798794b7ac817c25e477861a06_2 == cache_frame_3bafe4798794b7ac817c25e477861a06_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3bafe4798794b7ac817c25e477861a06_2);
            cache_frame_3bafe4798794b7ac817c25e477861a06_2 = NULL;
        }

        assertFrameObject(frame_3bafe4798794b7ac817c25e477861a06_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
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
        exception_lineno = 339;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_d91016314693526f83e3d86cfe7404ba->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indices == NULL);
        var_indices = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[93]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[94]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[98]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_flat_values);
        tmp_args_element_value_4 = var_flat_values;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_tensors);
            tmp_iter_arg_3 = par_tensors;
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "oooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_13;
        }
        if (isFrameUnusable(cache_frame_5f3384663e2e5ea3295080aa91b07410_3)) {
            Py_XDECREF(cache_frame_5f3384663e2e5ea3295080aa91b07410_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5f3384663e2e5ea3295080aa91b07410_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5f3384663e2e5ea3295080aa91b07410_3 = MAKE_FUNCTION_FRAME(codeobj_5f3384663e2e5ea3295080aa91b07410, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_5f3384663e2e5ea3295080aa91b07410_3->m_type_description == NULL);
        frame_5f3384663e2e5ea3295080aa91b07410_3 = cache_frame_5f3384663e2e5ea3295080aa91b07410_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5f3384663e2e5ea3295080aa91b07410_3);
        assert(Py_REFCNT(frame_5f3384663e2e5ea3295080aa91b07410_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 340;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_t;
                outline_1_var_t = tmp_assign_source_15;
                Py_INCREF(outline_1_var_t);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_6;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_t);
            tmp_args_element_value_6 = outline_1_var_t;
            frame_5f3384663e2e5ea3295080aa91b07410_3->m_frame.f_lineno = 340;
            tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[12], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_value_5 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_5);
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
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

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
            exception_tb = MAKE_TRACEBACK(frame_5f3384663e2e5ea3295080aa91b07410_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5f3384663e2e5ea3295080aa91b07410_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5f3384663e2e5ea3295080aa91b07410_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5f3384663e2e5ea3295080aa91b07410_3,
            type_description_2,
            outline_1_var_t
        );


        // Release cached frame if used for exception.
        if (frame_5f3384663e2e5ea3295080aa91b07410_3 == cache_frame_5f3384663e2e5ea3295080aa91b07410_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_5f3384663e2e5ea3295080aa91b07410_3);
            cache_frame_5f3384663e2e5ea3295080aa91b07410_3 = NULL;
        }

        assertFrameObject(frame_5f3384663e2e5ea3295080aa91b07410_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_t);
        outline_1_var_t = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_t);
        outline_1_var_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 340;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_d91016314693526f83e3d86cfe7404ba->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
        assert(var_outputs == NULL);
        var_outputs = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_3 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_tensors);
        tmp_args_element_value_7 = par_tensors;
        CHECK_OBJECT(var_indices);
        tmp_args_element_value_8 = var_indices;
        CHECK_OBJECT(var_values);
        tmp_args_element_value_9 = var_values;
        frame_d91016314693526f83e3d86cfe7404ba->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 342;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_1__iter_value;
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 342;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 342;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 342;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_22;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 342;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 342;
            goto try_except_handler_10;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_23;
            Py_INCREF(var_t);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_24;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_25;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_3;
        if (var_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_9 = var_outputs;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[58]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_t);
        tmp_expression_value_10 = var_t;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[102]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_i);
        tmp_args_element_value_11 = var_i;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_12 = var_v;
        CHECK_OBJECT(var_t);
        tmp_called_instance_3 = var_t;
        frame_d91016314693526f83e3d86cfe7404ba->m_frame.f_lineno = 343;
        tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[15]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        frame_d91016314693526f83e3d86cfe7404ba->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        frame_d91016314693526f83e3d86cfe7404ba->m_frame.f_lineno = 343;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_arg_1;
        if (var_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_1 = var_outputs;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d91016314693526f83e3d86cfe7404ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d91016314693526f83e3d86cfe7404ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d91016314693526f83e3d86cfe7404ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d91016314693526f83e3d86cfe7404ba,
        type_description_1,
        par_flat,
        par_tensors,
        var_flat_indices,
        var_flat_values,
        var_indices,
        var_values,
        var_outputs,
        var_t,
        var_i,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_d91016314693526f83e3d86cfe7404ba == cache_frame_d91016314693526f83e3d86cfe7404ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d91016314693526f83e3d86cfe7404ba);
        cache_frame_d91016314693526f83e3d86cfe7404ba = NULL;
    }

    assertFrameObject(frame_d91016314693526f83e3d86cfe7404ba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_flat_indices);
    Py_DECREF(var_flat_indices);
    var_flat_indices = NULL;
    CHECK_OBJECT(var_flat_values);
    Py_DECREF(var_flat_values);
    var_flat_values = NULL;
    CHECK_OBJECT(var_indices);
    Py_DECREF(var_indices);
    var_indices = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_outputs);
    var_outputs = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_flat_indices);
    var_flat_indices = NULL;
    Py_XDECREF(var_flat_values);
    var_flat_values = NULL;
    Py_XDECREF(var_indices);
    var_indices = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_outputs);
    var_outputs = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__20__reorder_tensors_as(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensors = python_pars[0];
    PyObject *par_ordered_tensors = python_pars[1];
    PyObject *var_type_dict = NULL;
    PyObject *var_tensor = NULL;
    struct Nuitka_CellObject *var_type_dict_ = Nuitka_Cell_Empty();
    PyObject *outline_0_var_t = NULL;
    PyObject *outline_0_var_coll = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_febd972d2235927d75b3942588cf3972;
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
    struct Nuitka_FrameObject *frame_a6ec1fb04f79a34df02ada9c760ab0ca_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_febd972d2235927d75b3942588cf3972 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_febd972d2235927d75b3942588cf3972)) {
        Py_XDECREF(cache_frame_febd972d2235927d75b3942588cf3972);

#if _DEBUG_REFCOUNTS
        if (cache_frame_febd972d2235927d75b3942588cf3972 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_febd972d2235927d75b3942588cf3972 = MAKE_FUNCTION_FRAME(codeobj_febd972d2235927d75b3942588cf3972, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_febd972d2235927d75b3942588cf3972->m_type_description == NULL);
    frame_febd972d2235927d75b3942588cf3972 = cache_frame_febd972d2235927d75b3942588cf3972;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_febd972d2235927d75b3942588cf3972);
    assert(Py_REFCNT(frame_febd972d2235927d75b3942588cf3972) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_febd972d2235927d75b3942588cf3972->m_frame.f_lineno = 362;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[105]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_type_dict == NULL);
        var_type_dict = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_tensors);
        tmp_iter_arg_1 = par_tensors;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooc";
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
                type_description_1 = "ooooc";
                exception_lineno = 363;
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
            PyObject *old = var_tensor;
            var_tensor = tmp_assign_source_4;
            Py_INCREF(var_tensor);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_type_dict);
        tmp_expression_value_2 = var_type_dict;
        CHECK_OBJECT(var_tensor);
        tmp_called_instance_1 = var_tensor;
        frame_febd972d2235927d75b3942588cf3972->m_frame.f_lineno = 364;
        tmp_subscript_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tensor);
        tmp_args_element_value_1 = var_tensor;
        frame_febd972d2235927d75b3942588cf3972->m_frame.f_lineno = 364;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 363;
        type_description_1 = "ooooc";
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
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(var_type_dict);
            tmp_expression_value_3 = var_type_dict;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "ooooc";
                goto try_except_handler_3;
            }
            frame_febd972d2235927d75b3942588cf3972->m_frame.f_lineno = 365;
            tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "ooooc";
                goto try_except_handler_3;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "ooooc";
                goto try_except_handler_3;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2)) {
            Py_XDECREF(cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2 = MAKE_FUNCTION_FRAME(codeobj_a6ec1fb04f79a34df02ada9c760ab0ca, module_torch$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2->m_type_description == NULL);
        frame_a6ec1fb04f79a34df02ada9c760ab0ca_2 = cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a6ec1fb04f79a34df02ada9c760ab0ca_2);
        assert(Py_REFCNT(frame_a6ec1fb04f79a34df02ada9c760ab0ca_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_2 = tmp_dictcontraction_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 365;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 365;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 365;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                        type_description_2 = "oo";
                        exception_lineno = 365;
                        goto try_except_handler_6;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[100];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 365;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_12 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_t;
                outline_0_var_t = tmp_assign_source_12;
                Py_INCREF(outline_0_var_t);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_13 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_coll;
                outline_0_var_coll = tmp_assign_source_13;
                Py_INCREF(outline_0_var_coll);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(outline_0_var_coll);
            tmp_iter_arg_4 = outline_0_var_coll;
            tmp_dictset_value = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset_dict = tmp_dictcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_t);
            tmp_dictset_key = outline_0_var_t;
            assert(PyDict_CheckExact(tmp_dictset_dict));
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_5 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_5);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
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

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a6ec1fb04f79a34df02ada9c760ab0ca_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a6ec1fb04f79a34df02ada9c760ab0ca_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a6ec1fb04f79a34df02ada9c760ab0ca_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a6ec1fb04f79a34df02ada9c760ab0ca_2,
            type_description_2,
            outline_0_var_t,
            outline_0_var_coll
        );


        // Release cached frame if used for exception.
        if (frame_a6ec1fb04f79a34df02ada9c760ab0ca_2 == cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2);
            cache_frame_a6ec1fb04f79a34df02ada9c760ab0ca_2 = NULL;
        }

        assertFrameObject(frame_a6ec1fb04f79a34df02ada9c760ab0ca_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooc";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
        Py_XDECREF(outline_0_var_coll);
        outline_0_var_coll = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_t);
        outline_0_var_t = NULL;
        Py_XDECREF(outline_0_var_coll);
        outline_0_var_coll = NULL;
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
        exception_lineno = 365;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(Nuitka_Cell_GET(var_type_dict_) == NULL);
        PyCell_SET(var_type_dict_, tmp_assign_source_5);

    }
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(par_ordered_tensors);
            tmp_iter_arg_5 = par_ordered_tensors;
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "ooooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_14;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = var_type_dict_;
            Py_INCREF(tmp_closure_1[1]);

            tmp_tuple_arg_1 = MAKE_GENERATOR_torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_febd972d2235927d75b3942588cf3972, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_febd972d2235927d75b3942588cf3972->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_febd972d2235927d75b3942588cf3972, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_febd972d2235927d75b3942588cf3972,
        type_description_1,
        par_tensors,
        par_ordered_tensors,
        var_type_dict,
        var_tensor,
        var_type_dict_
    );


    // Release cached frame if used for exception.
    if (frame_febd972d2235927d75b3942588cf3972 == cache_frame_febd972d2235927d75b3942588cf3972) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_febd972d2235927d75b3942588cf3972);
        cache_frame_febd972d2235927d75b3942588cf3972 = NULL;
    }

    assertFrameObject(frame_febd972d2235927d75b3942588cf3972);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_type_dict);
    Py_DECREF(var_type_dict);
    var_type_dict = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    CHECK_OBJECT(var_type_dict_);
    Py_DECREF(var_type_dict_);
    var_type_dict_ = NULL;
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

    Py_XDECREF(var_type_dict);
    var_type_dict = NULL;
    Py_XDECREF(var_tensor);
    var_tensor = NULL;
    CHECK_OBJECT(var_type_dict_);
    Py_DECREF(var_type_dict_);
    var_type_dict_ = NULL;
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
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    CHECK_OBJECT(par_ordered_tensors);
    Py_DECREF(par_ordered_tensors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    CHECK_OBJECT(par_ordered_tensors);
    Py_DECREF(par_ordered_tensors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr_locals {
    PyObject *var_tensor;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_tensor = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_497e77ccc10c236713596386782a68cc, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 366;
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
            PyObject *old = generator_heap->var_tensor;
            generator_heap->var_tensor = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_tensor);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_instance_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[108]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_called_instance_1 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 366;
        tmp_subscript_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_value_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = ITERATOR_NEXT(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_expression_value_1 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noc";
            generator_heap->exception_lineno = 366;
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 366;
        generator_heap->type_description_1 = "Noc";
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
            generator_heap->var_tensor,
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

    Py_XDECREF(generator_heap->var_tensor);
    generator_heap->var_tensor = NULL;
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
    Py_XDECREF(generator_heap->var_tensor);
    generator_heap->var_tensor = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr_context,
        module_torch$_utils,
        mod_consts[109],
#if PYTHON_VERSION >= 0x350
        mod_consts[110],
#endif
        codeobj_497e77ccc10c236713596386782a68cc,
        closure,
        2,
        sizeof(struct torch$_utils$$$function__20__reorder_tensors_as$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$_utils$$$function__21__take_tensors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_tensors = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_size_limit = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_size_limit;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_tensors;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensors);
    Py_DECREF(par_tensors);
    CHECK_OBJECT(par_size_limit);
    Py_DECREF(par_size_limit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors_locals {
    PyObject *var_buf_dict;
    PyObject *var_tensor;
    PyObject *var_t;
    PyObject *var_indices;
    PyObject *var_values;
    PyObject *var_size;
    PyObject *var_buf_and_size;
    PyObject *var_buf;
    PyObject *var__;
    PyObject *tmp_assign_unpack_1__assign_source;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_inplace_assign_subscr_1__subscript;
    PyObject *tmp_inplace_assign_subscr_1__target;
    PyObject *tmp_inplace_assign_subscr_1__value;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};

static PyObject *torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors_locals *generator_heap = (struct torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_buf_dict = NULL;
    generator_heap->var_tensor = NULL;
    generator_heap->var_t = NULL;
    generator_heap->var_indices = NULL;
    generator_heap->var_values = NULL;
    generator_heap->var_size = NULL;
    generator_heap->var_buf_and_size = NULL;
    generator_heap->var_buf = NULL;
    generator_heap->var__ = NULL;
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_inplace_assign_subscr_1__subscript = NULL;
    generator_heap->tmp_inplace_assign_subscr_1__target = NULL;
    generator_heap->tmp_inplace_assign_subscr_1__value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_9ca2ad788b0e477597fef177f7eb4335, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 381;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors$$$function__1_lambda();

        generator->m_frame->m_frame.f_lineno = 381;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 381;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_buf_dict == NULL);
        generator_heap->var_buf_dict = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[114]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 382;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 382;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooo";
                generator_heap->exception_lineno = 382;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_tensor;
            generator_heap->var_tensor = tmp_assign_source_4;
            Py_INCREF(generator_heap->var_tensor);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_called_instance_1 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 383;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 383;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_t;
            generator_heap->var_t = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_expression_value_1 = generator_heap->var_tensor;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 384;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 384;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_args_element_value_2 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 385;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[14], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_indices;
            generator_heap->var_indices = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 386;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 386;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_args_element_value_3 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 386;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[12], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 386;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_values;
            generator_heap->var_values = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(generator_heap->var_indices);
        tmp_called_instance_4 = generator_heap->var_indices;
        generator->m_frame->m_frame.f_lineno = 387;
        tmp_mult_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[115]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_indices);
        tmp_called_instance_5 = generator_heap->var_indices;
        generator->m_frame->m_frame.f_lineno = 387;
        tmp_mult_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[116]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_values);
        tmp_called_instance_6 = generator_heap->var_values;
        generator->m_frame->m_frame.f_lineno = 387;
        tmp_mult_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[115]);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_values);
        tmp_called_instance_7 = generator_heap->var_values;
        generator->m_frame->m_frame.f_lineno = 387;
        tmp_mult_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[116]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_2);

            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 387;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_size;
            generator_heap->var_size = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_called_instance_8 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 389;
        tmp_mult_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[115]);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_called_instance_9 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 389;
        tmp_mult_expr_right_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[116]);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 389;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_size;
            generator_heap->var_size = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        if (generator_heap->var_buf_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[117]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 390;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = generator_heap->var_buf_dict;
        CHECK_OBJECT(generator_heap->var_t);
        tmp_subscript_value_1 = generator_heap->var_t;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 390;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_buf_and_size;
            generator_heap->var_buf_and_size = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(generator_heap->var_buf_and_size);
        tmp_expression_value_5 = generator_heap->var_buf_and_size;
        tmp_subscript_value_2 = mod_consts[118];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_size);
        tmp_add_expr_right_2 = generator_heap->var_size;
        tmp_cmp_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[119]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(generator_heap->var_buf_and_size);
        tmp_expression_value_6 = generator_heap->var_buf_and_size;
        tmp_subscript_value_3 = mod_consts[118];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_3, 1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[68];
        tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 391;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
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
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_buf_and_size);
        tmp_expression_value_8 = generator_heap->var_buf_and_size;
        tmp_subscript_value_4 = mod_consts[68];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 392;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_subscript_value_4, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_7;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_subscript_value_4, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 392;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = DEEP_COPY_LIST_GUIDED(mod_consts[120], "li");
        {
            PyObject *old = generator_heap->tmp_assign_unpack_1__assign_source;
            generator_heap->tmp_assign_unpack_1__assign_source = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_12 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = generator_heap->var_buf_and_size;
            assert(old != NULL);
            generator_heap->var_buf_and_size = tmp_assign_source_12;
            Py_INCREF(generator_heap->var_buf_and_size);
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_1 = generator_heap->tmp_assign_unpack_1__assign_source;
        if (generator_heap->var_buf_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[117]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_1 = generator_heap->var_buf_dict;
        CHECK_OBJECT(generator_heap->var_t);
        tmp_ass_subscript_1 = generator_heap->var_t;
        generator_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 393;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(generator_heap->var_buf_and_size);
        tmp_expression_value_10 = generator_heap->var_buf_and_size;
        tmp_subscript_value_5 = mod_consts[68];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_5, 0);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[58]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_tensor);
        tmp_args_element_value_4 = generator_heap->var_tensor;
        generator->m_frame->m_frame.f_lineno = 394;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->var_buf_and_size);
        tmp_assign_source_13 = generator_heap->var_buf_and_size;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_1__target;
            generator_heap->tmp_inplace_assign_subscr_1__target = tmp_assign_source_13;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[118];
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_1__subscript;
            generator_heap->tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_14;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_11 = generator_heap->tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_6 = generator_heap->tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 395;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_1__value;
            generator_heap->tmp_inplace_assign_subscr_1__value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = generator_heap->tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(generator_heap->var_size);
        tmp_iadd_expr_right_1 = generator_heap->var_size;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 395;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_1;
        generator_heap->tmp_inplace_assign_subscr_1__value = tmp_assign_source_16;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_2 = generator_heap->tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_2 = generator_heap->tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_2 = generator_heap->tmp_inplace_assign_subscr_1__subscript;
        generator_heap->tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 395;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__target);
    generator_heap->tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    generator_heap->tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_1__value);
    generator_heap->tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__target);
    generator_heap->tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    generator_heap->tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__value);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__value);
    generator_heap->tmp_inplace_assign_subscr_1__value = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 382;
        generator_heap->type_description_1 = "ccooooooooo";
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        if (generator_heap->var_buf_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[117]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = generator_heap->var_buf_dict;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[51]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 396;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ccooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooo";
                generator_heap->exception_lineno = 396;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 396;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooo";
            generator_heap->exception_lineno = 396;
            goto try_except_handler_7;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooo";
            generator_heap->exception_lineno = 396;
            goto try_except_handler_7;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;
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

                    generator_heap->type_description_1 = "ccooooooooo";
                    generator_heap->exception_lineno = 396;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[100];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooo";
            generator_heap->exception_lineno = 396;
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_22 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_buf;
            generator_heap->var_buf = tmp_assign_source_22;
            Py_INCREF(generator_heap->var_buf);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_23 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var__;
            generator_heap->var__ = tmp_assign_source_23;
            Py_INCREF(generator_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(generator_heap->var_buf);
        tmp_len_arg_1 = generator_heap->var_buf;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 397;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_expression_value_13;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_buf);
        tmp_expression_value_13 = generator_heap->var_buf;
        Py_INCREF(tmp_expression_value_13);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_13;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 398;
            generator_heap->type_description_1 = "ccooooooooo";
            goto try_except_handler_5;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 396;
        generator_heap->type_description_1 = "ccooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

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
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_buf_dict,
            generator_heap->var_tensor,
            generator_heap->var_t,
            generator_heap->var_indices,
            generator_heap->var_values,
            generator_heap->var_size,
            generator_heap->var_buf_and_size,
            generator_heap->var_buf,
            generator_heap->var__
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
    goto try_end_7;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_buf_dict);
    generator_heap->var_buf_dict = NULL;
    Py_XDECREF(generator_heap->var_tensor);
    generator_heap->var_tensor = NULL;
    Py_XDECREF(generator_heap->var_t);
    generator_heap->var_t = NULL;
    Py_XDECREF(generator_heap->var_indices);
    generator_heap->var_indices = NULL;
    Py_XDECREF(generator_heap->var_values);
    generator_heap->var_values = NULL;
    Py_XDECREF(generator_heap->var_size);
    generator_heap->var_size = NULL;
    Py_XDECREF(generator_heap->var_buf_and_size);
    generator_heap->var_buf_and_size = NULL;
    Py_XDECREF(generator_heap->var_buf);
    generator_heap->var_buf = NULL;
    Py_XDECREF(generator_heap->var__);
    generator_heap->var__ = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:
    try_end_7:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_buf_dict);
    generator_heap->var_buf_dict = NULL;
    Py_XDECREF(generator_heap->var_tensor);
    generator_heap->var_tensor = NULL;
    Py_XDECREF(generator_heap->var_t);
    generator_heap->var_t = NULL;
    Py_XDECREF(generator_heap->var_indices);
    generator_heap->var_indices = NULL;
    Py_XDECREF(generator_heap->var_values);
    generator_heap->var_values = NULL;
    Py_XDECREF(generator_heap->var_size);
    generator_heap->var_size = NULL;
    Py_XDECREF(generator_heap->var_buf_and_size);
    generator_heap->var_buf_and_size = NULL;
    Py_XDECREF(generator_heap->var_buf);
    generator_heap->var_buf = NULL;
    Py_XDECREF(generator_heap->var__);
    generator_heap->var__ = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors_context,
        module_torch$_utils,
        mod_consts[121],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_9ca2ad788b0e477597fef177f7eb4335,
        closure,
        2,
        sizeof(struct torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors_locals)
    );
}


static PyObject *impl_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = DEEP_COPY_LIST_GUIDED(mod_consts[120], "li");
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__22_annotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ret = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_dec = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_kwargs;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_ret;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$_utils$$$function__22_annotate$$$function__1_dec(tmp_closure_1);

        assert(var_dec == NULL);
        var_dec = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_dec);
    tmp_return_value = var_dec;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dec);
    Py_DECREF(var_dec);
    var_dec = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ret);
    Py_DECREF(par_ret);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__22_annotate$$$function__1_dec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[0];
    struct Nuitka_FrameObject *frame_b88848620d6e4230d4bf2c1815b0d3b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b88848620d6e4230d4bf2c1815b0d3b2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b88848620d6e4230d4bf2c1815b0d3b2)) {
        Py_XDECREF(cache_frame_b88848620d6e4230d4bf2c1815b0d3b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b88848620d6e4230d4bf2c1815b0d3b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b88848620d6e4230d4bf2c1815b0d3b2 = MAKE_FUNCTION_FRAME(codeobj_b88848620d6e4230d4bf2c1815b0d3b2, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b88848620d6e4230d4bf2c1815b0d3b2->m_type_description == NULL);
    frame_b88848620d6e4230d4bf2c1815b0d3b2 = cache_frame_b88848620d6e4230d4bf2c1815b0d3b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b88848620d6e4230d4bf2c1815b0d3b2);
    assert(Py_REFCNT(frame_b88848620d6e4230d4bf2c1815b0d3b2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_dict_seq_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assattr_value_1 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fun);
        tmp_assattr_target_1 = par_fun;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[125], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_fun);
        tmp_expression_value_1 = par_fun;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[125]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[127];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b88848620d6e4230d4bf2c1815b0d3b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b88848620d6e4230d4bf2c1815b0d3b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b88848620d6e4230d4bf2c1815b0d3b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b88848620d6e4230d4bf2c1815b0d3b2,
        type_description_1,
        par_fun,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_b88848620d6e4230d4bf2c1815b0d3b2 == cache_frame_b88848620d6e4230d4bf2c1815b0d3b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b88848620d6e4230d4bf2c1815b0d3b2);
        cache_frame_b88848620d6e4230d4bf2c1815b0d3b2 = NULL;
    }

    assertFrameObject(frame_b88848620d6e4230d4bf2c1815b0d3b2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_fun);
    tmp_return_value = par_fun;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__23___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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


static PyObject *impl_torch$_utils$$$function__24___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_info = python_pars[1];
    PyObject *par_where = python_pars[2];
    struct Nuitka_FrameObject *frame_7c88238f77f53c0b49be584c6d6cfb3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7c88238f77f53c0b49be584c6d6cfb3e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7c88238f77f53c0b49be584c6d6cfb3e)) {
        Py_XDECREF(cache_frame_7c88238f77f53c0b49be584c6d6cfb3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c88238f77f53c0b49be584c6d6cfb3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c88238f77f53c0b49be584c6d6cfb3e = MAKE_FUNCTION_FRAME(codeobj_7c88238f77f53c0b49be584c6d6cfb3e, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c88238f77f53c0b49be584c6d6cfb3e->m_type_description == NULL);
    frame_7c88238f77f53c0b49be584c6d6cfb3e = cache_frame_7c88238f77f53c0b49be584c6d6cfb3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c88238f77f53c0b49be584c6d6cfb3e);
    assert(Py_REFCNT(frame_7c88238f77f53c0b49be584c6d6cfb3e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_exc_info);
        tmp_cmp_expr_left_1 = par_exc_info;
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
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_7c88238f77f53c0b49be584c6d6cfb3e->m_frame.f_lineno = 431;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[129]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_exc_info;
            assert(old != NULL);
            par_exc_info = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_exc_info);
        tmp_expression_value_1 = par_exc_info;
        tmp_subscript_value_1 = mod_consts[68];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[130], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_2;
        tmp_str_arg_value_1 = mod_consts[131];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[133]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exc_info);
        tmp_dircall_arg2_1 = par_exc_info;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_iterable_value_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[134], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_where);
        tmp_assattr_value_3 = par_where;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[135], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c88238f77f53c0b49be584c6d6cfb3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c88238f77f53c0b49be584c6d6cfb3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c88238f77f53c0b49be584c6d6cfb3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c88238f77f53c0b49be584c6d6cfb3e,
        type_description_1,
        par_self,
        par_exc_info,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_7c88238f77f53c0b49be584c6d6cfb3e == cache_frame_7c88238f77f53c0b49be584c6d6cfb3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c88238f77f53c0b49be584c6d6cfb3e);
        cache_frame_7c88238f77f53c0b49be584c6d6cfb3e = NULL;
    }

    assertFrameObject(frame_7c88238f77f53c0b49be584c6d6cfb3e);

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
    CHECK_OBJECT(par_exc_info);
    Py_DECREF(par_exc_info);
    par_exc_info = NULL;
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

    CHECK_OBJECT(par_exc_info);
    Py_DECREF(par_exc_info);
    par_exc_info = NULL;
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
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__25_reraise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_msg = NULL;
    PyObject *var_exception = NULL;
    struct Nuitka_FrameObject *frame_aa745d24a0d7d7d5ac8f2c61be1767db;
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
    static struct Nuitka_FrameObject *cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db)) {
        Py_XDECREF(cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db = MAKE_FUNCTION_FRAME(codeobj_aa745d24a0d7d7d5ac8f2c61be1767db, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_type_description == NULL);
    frame_aa745d24a0d7d7d5ac8f2c61be1767db = cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aa745d24a0d7d7d5ac8f2c61be1767db);
    assert(Py_REFCNT(frame_aa745d24a0d7d7d5ac8f2c61be1767db) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_4;
        tmp_kw_call_arg_value_0_1 = mod_consts[136];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[130]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[135]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 441;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[134]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 441;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[130]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_1 = var_msg;
        frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame.f_lineno = 446;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_msg;
            assert(old != NULL);
            var_msg = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[130]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[138];
        tmp_getattr_default_1 = Py_None;
        tmp_capi_result_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 447;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[130]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg);
        tmp_kw_call_value_0_1 = var_msg;
        frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame.f_lineno = 450;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[139]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 450;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_2 = var_msg;
        frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame.f_lineno = 452;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[130], tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_exception == NULL);
        var_exception = tmp_assign_source_3;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_aa745d24a0d7d7d5ac8f2c61be1767db, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_aa745d24a0d7d7d5ac8f2c61be1767db, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        if (var_msg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_make_exception_arg_1 = var_msg;
        frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame.f_lineno = 456;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        tmp_raise_cause_1 = Py_None;
        exception_type = tmp_raise_type_2;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 456;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 451;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame) frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        PyObject *tmp_raise_type_3;
        CHECK_OBJECT(var_exception);
        tmp_raise_type_3 = var_exception;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 457;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa745d24a0d7d7d5ac8f2c61be1767db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa745d24a0d7d7d5ac8f2c61be1767db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa745d24a0d7d7d5ac8f2c61be1767db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa745d24a0d7d7d5ac8f2c61be1767db,
        type_description_1,
        par_self,
        var_msg,
        var_exception
    );


    // Release cached frame if used for exception.
    if (frame_aa745d24a0d7d7d5ac8f2c61be1767db == cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db);
        cache_frame_aa745d24a0d7d7d5ac8f2c61be1767db = NULL;
    }

    assertFrameObject(frame_aa745d24a0d7d7d5ac8f2c61be1767db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_exception);
    var_exception = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_torch$_utils$$$function__26__get_available_device_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e2d90417302cf2bd383d978143d112cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e2d90417302cf2bd383d978143d112cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e2d90417302cf2bd383d978143d112cb)) {
        Py_XDECREF(cache_frame_e2d90417302cf2bd383d978143d112cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2d90417302cf2bd383d978143d112cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2d90417302cf2bd383d978143d112cb = MAKE_FUNCTION_FRAME(codeobj_e2d90417302cf2bd383d978143d112cb, module_torch$_utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2d90417302cf2bd383d978143d112cb->m_type_description == NULL);
    frame_e2d90417302cf2bd383d978143d112cb = cache_frame_e2d90417302cf2bd383d978143d112cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e2d90417302cf2bd383d978143d112cb);
    assert(Py_REFCNT(frame_e2d90417302cf2bd383d978143d112cb) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        frame_e2d90417302cf2bd383d978143d112cb->m_frame.f_lineno = 461;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[142]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 461;

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
    tmp_return_value = mod_consts[19];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e2d90417302cf2bd383d978143d112cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2d90417302cf2bd383d978143d112cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2d90417302cf2bd383d978143d112cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2d90417302cf2bd383d978143d112cb,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e2d90417302cf2bd383d978143d112cb == cache_frame_e2d90417302cf2bd383d978143d112cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2d90417302cf2bd383d978143d112cb);
        cache_frame_e2d90417302cf2bd383d978143d112cb = NULL;
    }

    assertFrameObject(frame_e2d90417302cf2bd383d978143d112cb);

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


static PyObject *impl_torch$_utils$$$function__27__get_device_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_get_member = python_pars[0];
    PyObject *var_device_type = NULL;
    struct Nuitka_FrameObject *frame_5066590d070c27607459f3671e463306;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5066590d070c27607459f3671e463306 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5066590d070c27607459f3671e463306)) {
        Py_XDECREF(cache_frame_5066590d070c27607459f3671e463306);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5066590d070c27607459f3671e463306 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5066590d070c27607459f3671e463306 = MAKE_FUNCTION_FRAME(codeobj_5066590d070c27607459f3671e463306, module_torch$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5066590d070c27607459f3671e463306->m_type_description == NULL);
    frame_5066590d070c27607459f3671e463306 = cache_frame_5066590d070c27607459f3671e463306;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5066590d070c27607459f3671e463306);
    assert(Py_REFCNT(frame_5066590d070c27607459f3671e463306) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5066590d070c27607459f3671e463306->m_frame.f_lineno = 468;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_device_type == NULL);
        var_device_type = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_device_type);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_device_type);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_device_type);
        tmp_expression_value_1 = var_device_type;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[144]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5066590d070c27607459f3671e463306->m_frame.f_lineno = 469;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[19];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_get_member);
        tmp_called_value_3 = par_get_member;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5066590d070c27607459f3671e463306->m_frame.f_lineno = 470;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5066590d070c27607459f3671e463306, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5066590d070c27607459f3671e463306->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5066590d070c27607459f3671e463306, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5066590d070c27607459f3671e463306,
        type_description_1,
        par_get_member,
        var_device_type
    );


    // Release cached frame if used for exception.
    if (frame_5066590d070c27607459f3671e463306 == cache_frame_5066590d070c27607459f3671e463306) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5066590d070c27607459f3671e463306);
        cache_frame_5066590d070c27607459f3671e463306 = NULL;
    }

    assertFrameObject(frame_5066590d070c27607459f3671e463306);

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
    Py_XDECREF(var_device_type);
    var_device_type = NULL;
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

    Py_XDECREF(var_device_type);
    var_device_type = NULL;
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
    CHECK_OBJECT(par_get_member);
    Py_DECREF(par_get_member);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_get_member);
    Py_DECREF(par_get_member);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__28__get_current_device_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f4080b10e2549625fc26c9f6bacca6de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4080b10e2549625fc26c9f6bacca6de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4080b10e2549625fc26c9f6bacca6de)) {
        Py_XDECREF(cache_frame_f4080b10e2549625fc26c9f6bacca6de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4080b10e2549625fc26c9f6bacca6de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4080b10e2549625fc26c9f6bacca6de = MAKE_FUNCTION_FRAME(codeobj_f4080b10e2549625fc26c9f6bacca6de, module_torch$_utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4080b10e2549625fc26c9f6bacca6de->m_type_description == NULL);
    frame_f4080b10e2549625fc26c9f6bacca6de = cache_frame_f4080b10e2549625fc26c9f6bacca6de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4080b10e2549625fc26c9f6bacca6de);
    assert(Py_REFCNT(frame_f4080b10e2549625fc26c9f6bacca6de) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$_utils$$$function__28__get_current_device_index$$$function__1_lambda();

        frame_f4080b10e2549625fc26c9f6bacca6de->m_frame.f_lineno = 477;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

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
        exception_tb = MAKE_TRACEBACK(frame_f4080b10e2549625fc26c9f6bacca6de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4080b10e2549625fc26c9f6bacca6de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4080b10e2549625fc26c9f6bacca6de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4080b10e2549625fc26c9f6bacca6de,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f4080b10e2549625fc26c9f6bacca6de == cache_frame_f4080b10e2549625fc26c9f6bacca6de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4080b10e2549625fc26c9f6bacca6de);
        cache_frame_f4080b10e2549625fc26c9f6bacca6de = NULL;
    }

    assertFrameObject(frame_f4080b10e2549625fc26c9f6bacca6de);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$_utils$$$function__28__get_current_device_index$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    struct Nuitka_FrameObject *frame_56cfb4ec58cf2808e7cb8e6190055a25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56cfb4ec58cf2808e7cb8e6190055a25 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56cfb4ec58cf2808e7cb8e6190055a25)) {
        Py_XDECREF(cache_frame_56cfb4ec58cf2808e7cb8e6190055a25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56cfb4ec58cf2808e7cb8e6190055a25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56cfb4ec58cf2808e7cb8e6190055a25 = MAKE_FUNCTION_FRAME(codeobj_56cfb4ec58cf2808e7cb8e6190055a25, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56cfb4ec58cf2808e7cb8e6190055a25->m_type_description == NULL);
    frame_56cfb4ec58cf2808e7cb8e6190055a25 = cache_frame_56cfb4ec58cf2808e7cb8e6190055a25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56cfb4ec58cf2808e7cb8e6190055a25);
    assert(Py_REFCNT(frame_56cfb4ec58cf2808e7cb8e6190055a25) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_m);
        tmp_called_instance_1 = par_m;
        frame_56cfb4ec58cf2808e7cb8e6190055a25->m_frame.f_lineno = 477;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
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
        exception_tb = MAKE_TRACEBACK(frame_56cfb4ec58cf2808e7cb8e6190055a25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56cfb4ec58cf2808e7cb8e6190055a25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56cfb4ec58cf2808e7cb8e6190055a25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56cfb4ec58cf2808e7cb8e6190055a25,
        type_description_1,
        par_m
    );


    // Release cached frame if used for exception.
    if (frame_56cfb4ec58cf2808e7cb8e6190055a25 == cache_frame_56cfb4ec58cf2808e7cb8e6190055a25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56cfb4ec58cf2808e7cb8e6190055a25);
        cache_frame_56cfb4ec58cf2808e7cb8e6190055a25 = NULL;
    }

    assertFrameObject(frame_56cfb4ec58cf2808e7cb8e6190055a25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__29__get_all_device_indices(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f367202efa296c081bafd1df7dfea2e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f367202efa296c081bafd1df7dfea2e7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f367202efa296c081bafd1df7dfea2e7)) {
        Py_XDECREF(cache_frame_f367202efa296c081bafd1df7dfea2e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f367202efa296c081bafd1df7dfea2e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f367202efa296c081bafd1df7dfea2e7 = MAKE_FUNCTION_FRAME(codeobj_f367202efa296c081bafd1df7dfea2e7, module_torch$_utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f367202efa296c081bafd1df7dfea2e7->m_type_description == NULL);
    frame_f367202efa296c081bafd1df7dfea2e7 = cache_frame_f367202efa296c081bafd1df7dfea2e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f367202efa296c081bafd1df7dfea2e7);
    assert(Py_REFCNT(frame_f367202efa296c081bafd1df7dfea2e7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$_utils$$$function__29__get_all_device_indices$$$function__1_lambda();

        frame_f367202efa296c081bafd1df7dfea2e7->m_frame.f_lineno = 482;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

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
        exception_tb = MAKE_TRACEBACK(frame_f367202efa296c081bafd1df7dfea2e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f367202efa296c081bafd1df7dfea2e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f367202efa296c081bafd1df7dfea2e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f367202efa296c081bafd1df7dfea2e7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f367202efa296c081bafd1df7dfea2e7 == cache_frame_f367202efa296c081bafd1df7dfea2e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f367202efa296c081bafd1df7dfea2e7);
        cache_frame_f367202efa296c081bafd1df7dfea2e7 = NULL;
    }

    assertFrameObject(frame_f367202efa296c081bafd1df7dfea2e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$_utils$$$function__29__get_all_device_indices$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    struct Nuitka_FrameObject *frame_df0b3e1f1fc0baf78e4fb72250fd3ea8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8)) {
        Py_XDECREF(cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8 = MAKE_FUNCTION_FRAME(codeobj_df0b3e1f1fc0baf78e4fb72250fd3ea8, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8->m_type_description == NULL);
    frame_df0b3e1f1fc0baf78e4fb72250fd3ea8 = cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df0b3e1f1fc0baf78e4fb72250fd3ea8);
    assert(Py_REFCNT(frame_df0b3e1f1fc0baf78e4fb72250fd3ea8) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_m);
        tmp_called_instance_1 = par_m;
        frame_df0b3e1f1fc0baf78e4fb72250fd3ea8->m_frame.f_lineno = 482;
        tmp_xrange_low_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[148]);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
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
        exception_tb = MAKE_TRACEBACK(frame_df0b3e1f1fc0baf78e4fb72250fd3ea8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df0b3e1f1fc0baf78e4fb72250fd3ea8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df0b3e1f1fc0baf78e4fb72250fd3ea8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df0b3e1f1fc0baf78e4fb72250fd3ea8,
        type_description_1,
        par_m
    );


    // Release cached frame if used for exception.
    if (frame_df0b3e1f1fc0baf78e4fb72250fd3ea8 == cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8);
        cache_frame_df0b3e1f1fc0baf78e4fb72250fd3ea8 = NULL;
    }

    assertFrameObject(frame_df0b3e1f1fc0baf78e4fb72250fd3ea8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__30__get_devices_properties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device_ids = python_pars[0];
    struct Nuitka_CellObject *outline_0_var_i = Nuitka_Cell_Empty();
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_fe131ba0dbd9ac9100d88e4d2521f734;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a6528b9a3f4153b7592381a694823f75_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a6528b9a3f4153b7592381a694823f75_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fe131ba0dbd9ac9100d88e4d2521f734 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe131ba0dbd9ac9100d88e4d2521f734)) {
        Py_XDECREF(cache_frame_fe131ba0dbd9ac9100d88e4d2521f734);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe131ba0dbd9ac9100d88e4d2521f734 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe131ba0dbd9ac9100d88e4d2521f734 = MAKE_FUNCTION_FRAME(codeobj_fe131ba0dbd9ac9100d88e4d2521f734, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe131ba0dbd9ac9100d88e4d2521f734->m_type_description == NULL);
    frame_fe131ba0dbd9ac9100d88e4d2521f734 = cache_frame_fe131ba0dbd9ac9100d88e4d2521f734;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe131ba0dbd9ac9100d88e4d2521f734);
    assert(Py_REFCNT(frame_fe131ba0dbd9ac9100d88e4d2521f734) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_device_ids);
        tmp_iter_arg_1 = par_device_ids;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
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
    if (isFrameUnusable(cache_frame_a6528b9a3f4153b7592381a694823f75_2)) {
        Py_XDECREF(cache_frame_a6528b9a3f4153b7592381a694823f75_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6528b9a3f4153b7592381a694823f75_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6528b9a3f4153b7592381a694823f75_2 = MAKE_FUNCTION_FRAME(codeobj_a6528b9a3f4153b7592381a694823f75, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a6528b9a3f4153b7592381a694823f75_2->m_type_description == NULL);
    frame_a6528b9a3f4153b7592381a694823f75_2 = cache_frame_a6528b9a3f4153b7592381a694823f75_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a6528b9a3f4153b7592381a694823f75_2);
    assert(Py_REFCNT(frame_a6528b9a3f4153b7592381a694823f75_2) == 2);

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
                type_description_2 = "c";
                exception_lineno = 487;
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
            PyObject *old = Nuitka_Cell_GET(outline_0_var_i);
            PyCell_SET(outline_0_var_i, tmp_assign_source_4);
            Py_INCREF(tmp_assign_source_4);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_2 = "c";
            goto try_except_handler_2;
        }

        tmp_closure_1[0] = outline_0_var_i;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_1 = MAKE_FUNCTION_torch$_utils$$$function__30__get_devices_properties$$$function__1_lambda(tmp_closure_1);

        frame_a6528b9a3f4153b7592381a694823f75_2->m_frame.f_lineno = 487;
        tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_2 = "c";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_2 = "c";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 487;
        type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_a6528b9a3f4153b7592381a694823f75_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6528b9a3f4153b7592381a694823f75_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6528b9a3f4153b7592381a694823f75_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6528b9a3f4153b7592381a694823f75_2,
        type_description_2,
        outline_0_var_i
    );


    // Release cached frame if used for exception.
    if (frame_a6528b9a3f4153b7592381a694823f75_2 == cache_frame_a6528b9a3f4153b7592381a694823f75_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a6528b9a3f4153b7592381a694823f75_2);
        cache_frame_a6528b9a3f4153b7592381a694823f75_2 = NULL;
    }

    assertFrameObject(frame_a6528b9a3f4153b7592381a694823f75_2);

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
    CHECK_OBJECT(outline_0_var_i);
    Py_DECREF(outline_0_var_i);
    outline_0_var_i = NULL;
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

    CHECK_OBJECT(outline_0_var_i);
    Py_DECREF(outline_0_var_i);
    outline_0_var_i = NULL;
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
    exception_lineno = 487;
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
        exception_tb = MAKE_TRACEBACK(frame_fe131ba0dbd9ac9100d88e4d2521f734, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe131ba0dbd9ac9100d88e4d2521f734->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe131ba0dbd9ac9100d88e4d2521f734, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe131ba0dbd9ac9100d88e4d2521f734,
        type_description_1,
        par_device_ids
    );


    // Release cached frame if used for exception.
    if (frame_fe131ba0dbd9ac9100d88e4d2521f734 == cache_frame_fe131ba0dbd9ac9100d88e4d2521f734) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe131ba0dbd9ac9100d88e4d2521f734);
        cache_frame_fe131ba0dbd9ac9100d88e4d2521f734 = NULL;
    }

    assertFrameObject(frame_fe131ba0dbd9ac9100d88e4d2521f734);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device_ids);
    Py_DECREF(par_device_ids);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device_ids);
    Py_DECREF(par_device_ids);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__30__get_devices_properties$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    struct Nuitka_FrameObject *frame_7f174b14ef224d1ab8d179ca4f1452a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f174b14ef224d1ab8d179ca4f1452a4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f174b14ef224d1ab8d179ca4f1452a4)) {
        Py_XDECREF(cache_frame_7f174b14ef224d1ab8d179ca4f1452a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f174b14ef224d1ab8d179ca4f1452a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f174b14ef224d1ab8d179ca4f1452a4 = MAKE_FUNCTION_FRAME(codeobj_7f174b14ef224d1ab8d179ca4f1452a4, module_torch$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f174b14ef224d1ab8d179ca4f1452a4->m_type_description == NULL);
    frame_7f174b14ef224d1ab8d179ca4f1452a4 = cache_frame_7f174b14ef224d1ab8d179ca4f1452a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f174b14ef224d1ab8d179ca4f1452a4);
    assert(Py_REFCNT(frame_7f174b14ef224d1ab8d179ca4f1452a4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_m);
        tmp_expression_value_1 = par_m;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[150]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_7f174b14ef224d1ab8d179ca4f1452a4->m_frame.f_lineno = 487;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_7f174b14ef224d1ab8d179ca4f1452a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f174b14ef224d1ab8d179ca4f1452a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f174b14ef224d1ab8d179ca4f1452a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f174b14ef224d1ab8d179ca4f1452a4,
        type_description_1,
        par_m,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7f174b14ef224d1ab8d179ca4f1452a4 == cache_frame_7f174b14ef224d1ab8d179ca4f1452a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f174b14ef224d1ab8d179ca4f1452a4);
        cache_frame_7f174b14ef224d1ab8d179ca4f1452a4 = NULL;
    }

    assertFrameObject(frame_7f174b14ef224d1ab8d179ca4f1452a4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__31_get_current_device_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c3f409f9da99b7790237373e026a3ade;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3f409f9da99b7790237373e026a3ade = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c3f409f9da99b7790237373e026a3ade)) {
        Py_XDECREF(cache_frame_c3f409f9da99b7790237373e026a3ade);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3f409f9da99b7790237373e026a3ade == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3f409f9da99b7790237373e026a3ade = MAKE_FUNCTION_FRAME(codeobj_c3f409f9da99b7790237373e026a3ade, module_torch$_utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3f409f9da99b7790237373e026a3ade->m_type_description == NULL);
    frame_c3f409f9da99b7790237373e026a3ade = cache_frame_c3f409f9da99b7790237373e026a3ade;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3f409f9da99b7790237373e026a3ade);
    assert(Py_REFCNT(frame_c3f409f9da99b7790237373e026a3ade) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        frame_c3f409f9da99b7790237373e026a3ade->m_frame.f_lineno = 495;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[148]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[68];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        frame_c3f409f9da99b7790237373e026a3ade->m_frame.f_lineno = 496;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3f409f9da99b7790237373e026a3ade, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3f409f9da99b7790237373e026a3ade->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3f409f9da99b7790237373e026a3ade, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3f409f9da99b7790237373e026a3ade,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c3f409f9da99b7790237373e026a3ade == cache_frame_c3f409f9da99b7790237373e026a3ade) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3f409f9da99b7790237373e026a3ade);
        cache_frame_c3f409f9da99b7790237373e026a3ade = NULL;
    }

    assertFrameObject(frame_c3f409f9da99b7790237373e026a3ade);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[23];
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_torch$_utils$$$function__32__get_device_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    PyObject *par_optional = python_pars[1];
    PyObject *par_allow_cpu = python_pars[2];
    PyObject *var_device_idx = NULL;
    struct Nuitka_FrameObject *frame_18e7eecaba0179973a7f2110d2208083;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18e7eecaba0179973a7f2110d2208083 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18e7eecaba0179973a7f2110d2208083)) {
        Py_XDECREF(cache_frame_18e7eecaba0179973a7f2110d2208083);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18e7eecaba0179973a7f2110d2208083 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18e7eecaba0179973a7f2110d2208083 = MAKE_FUNCTION_FRAME(codeobj_18e7eecaba0179973a7f2110d2208083, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18e7eecaba0179973a7f2110d2208083->m_type_description == NULL);
    frame_18e7eecaba0179973a7f2110d2208083 = cache_frame_18e7eecaba0179973a7f2110d2208083;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18e7eecaba0179973a7f2110d2208083);
    assert(Py_REFCNT(frame_18e7eecaba0179973a7f2110d2208083) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_device);
        tmp_isinstance_inst_1 = par_device;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 516;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[24], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_device_idx == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_device_idx = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_device);
        tmp_isinstance_inst_2 = par_device;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_allow_cpu);
        tmp_operand_value_1 = par_allow_cpu;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_device);
        tmp_expression_value_2 = par_device;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[153];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[154];
        if (par_device == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_device;
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 520;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 520;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (par_device == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_device;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[153];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_3 = mod_consts[23];
        Py_INCREF(tmp_assign_source_3);
        goto condexpr_end_1;
        condexpr_false_1:;
        if (par_device == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_device;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[155]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_device_idx;
            assert(old != NULL);
            var_device_idx = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        if (par_device == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 522;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_3 = par_device;
        tmp_isinstance_cls_3 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        if (par_device == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_4 = par_device;
        {
            PyObject *old = var_device_idx;
            assert(old != NULL);
            var_device_idx = tmp_assign_source_4;
            Py_INCREF(var_device_idx);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_device_idx);
        tmp_cmp_expr_left_3 = var_device_idx;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_optional);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_optional);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[156]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 531;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[157]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 532;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_device_idx;
            assert(old != NULL);
            var_device_idx = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 534;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_device_idx;
            assert(old != NULL);
            var_device_idx = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[160];
        if (par_device == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = par_device;
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 536;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_18e7eecaba0179973a7f2110d2208083->m_frame.f_lineno = 536;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 536;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    branch_no_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18e7eecaba0179973a7f2110d2208083, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18e7eecaba0179973a7f2110d2208083->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18e7eecaba0179973a7f2110d2208083, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18e7eecaba0179973a7f2110d2208083,
        type_description_1,
        par_device,
        par_optional,
        par_allow_cpu,
        var_device_idx
    );


    // Release cached frame if used for exception.
    if (frame_18e7eecaba0179973a7f2110d2208083 == cache_frame_18e7eecaba0179973a7f2110d2208083) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18e7eecaba0179973a7f2110d2208083);
        cache_frame_18e7eecaba0179973a7f2110d2208083 = NULL;
    }

    assertFrameObject(frame_18e7eecaba0179973a7f2110d2208083);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_device_idx);
    tmp_return_value = var_device_idx;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_device);
    par_device = NULL;
    CHECK_OBJECT(var_device_idx);
    Py_DECREF(var_device_idx);
    var_device_idx = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(var_device_idx);
    var_device_idx = NULL;
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
    CHECK_OBJECT(par_optional);
    Py_DECREF(par_optional);
    CHECK_OBJECT(par_allow_cpu);
    Py_DECREF(par_allow_cpu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_optional);
    Py_DECREF(par_optional);
    CHECK_OBJECT(par_allow_cpu);
    Py_DECREF(par_allow_cpu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__33__handle_complex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensor = python_pars[0];
    struct Nuitka_FrameObject *frame_0c471075e028b24dd1a396a57ea3fb19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0c471075e028b24dd1a396a57ea3fb19 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c471075e028b24dd1a396a57ea3fb19)) {
        Py_XDECREF(cache_frame_0c471075e028b24dd1a396a57ea3fb19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c471075e028b24dd1a396a57ea3fb19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c471075e028b24dd1a396a57ea3fb19 = MAKE_FUNCTION_FRAME(codeobj_0c471075e028b24dd1a396a57ea3fb19, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c471075e028b24dd1a396a57ea3fb19->m_type_description == NULL);
    frame_0c471075e028b24dd1a396a57ea3fb19 = cache_frame_0c471075e028b24dd1a396a57ea3fb19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c471075e028b24dd1a396a57ea3fb19);
    assert(Py_REFCNT(frame_0c471075e028b24dd1a396a57ea3fb19) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_tensor);
        tmp_isinstance_inst_1 = par_tensor;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[162]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_tensor);
        tmp_called_instance_1 = par_tensor;
        frame_0c471075e028b24dd1a396a57ea3fb19->m_frame.f_lineno = 547;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[163]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 547;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[164]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_tensor == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_tensor;
        frame_0c471075e028b24dd1a396a57ea3fb19->m_frame.f_lineno = 546;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        if (par_tensor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 547;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = par_tensor;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_0c471075e028b24dd1a396a57ea3fb19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c471075e028b24dd1a396a57ea3fb19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c471075e028b24dd1a396a57ea3fb19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c471075e028b24dd1a396a57ea3fb19,
        type_description_1,
        par_tensor
    );


    // Release cached frame if used for exception.
    if (frame_0c471075e028b24dd1a396a57ea3fb19 == cache_frame_0c471075e028b24dd1a396a57ea3fb19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c471075e028b24dd1a396a57ea3fb19);
        cache_frame_0c471075e028b24dd1a396a57ea3fb19 = NULL;
    }

    assertFrameObject(frame_0c471075e028b24dd1a396a57ea3fb19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__34__element_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    struct Nuitka_FrameObject *frame_1e9c57989024f41b5aef6a829e7de230;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e9c57989024f41b5aef6a829e7de230 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e9c57989024f41b5aef6a829e7de230)) {
        Py_XDECREF(cache_frame_1e9c57989024f41b5aef6a829e7de230);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e9c57989024f41b5aef6a829e7de230 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e9c57989024f41b5aef6a829e7de230 = MAKE_FUNCTION_FRAME(codeobj_1e9c57989024f41b5aef6a829e7de230, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e9c57989024f41b5aef6a829e7de230->m_type_description == NULL);
    frame_1e9c57989024f41b5aef6a829e7de230 = cache_frame_1e9c57989024f41b5aef6a829e7de230;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e9c57989024f41b5aef6a829e7de230);
    assert(Py_REFCNT(frame_1e9c57989024f41b5aef6a829e7de230) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_dtype);
        tmp_isinstance_inst_1 = par_dtype;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "o";
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
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[166];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_dtype);
            tmp_type_arg_1 = par_dtype;
            tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_format_value_1 == NULL));
            tmp_format_spec_1 = mod_consts[131];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[131], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e9c57989024f41b5aef6a829e7de230->m_frame.f_lineno = 554;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 554;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_2 = par_dtype;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[163]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 556;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_1 = par_dtype;
        frame_1e9c57989024f41b5aef6a829e7de230->m_frame.f_lineno = 557;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[167], tmp_args_element_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_1 = mod_consts[169];
        tmp_return_value = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_dtype);
        tmp_expression_value_4 = par_dtype;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[170]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 558;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_2 = par_dtype;
        frame_1e9c57989024f41b5aef6a829e7de230->m_frame.f_lineno = 559;
        tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[167], tmp_args_element_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[168]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_2 = mod_consts[171];
        tmp_return_value = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_1 = par_dtype;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[172]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = mod_consts[118];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_rshift_expr_left_3;
        PyObject *tmp_rshift_expr_right_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_value_3 = par_dtype;
        frame_1e9c57989024f41b5aef6a829e7de230->m_frame.f_lineno = 564;
        tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[173], tmp_args_element_value_3);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[168]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_rshift_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_3 = mod_consts[171];
        tmp_return_value = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
        Py_DECREF(tmp_rshift_expr_left_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e9c57989024f41b5aef6a829e7de230, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e9c57989024f41b5aef6a829e7de230->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e9c57989024f41b5aef6a829e7de230, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e9c57989024f41b5aef6a829e7de230,
        type_description_1,
        par_dtype
    );


    // Release cached frame if used for exception.
    if (frame_1e9c57989024f41b5aef6a829e7de230 == cache_frame_1e9c57989024f41b5aef6a829e7de230) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e9c57989024f41b5aef6a829e7de230);
        cache_frame_1e9c57989024f41b5aef6a829e7de230 = NULL;
    }

    assertFrameObject(frame_1e9c57989024f41b5aef6a829e7de230);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__35___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fget = python_pars[1];
    PyObject *par_fset = python_pars[2];
    struct Nuitka_FrameObject *frame_3fead87452e8f9a2d4a3531d96b1e08a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3fead87452e8f9a2d4a3531d96b1e08a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3fead87452e8f9a2d4a3531d96b1e08a)) {
        Py_XDECREF(cache_frame_3fead87452e8f9a2d4a3531d96b1e08a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3fead87452e8f9a2d4a3531d96b1e08a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3fead87452e8f9a2d4a3531d96b1e08a = MAKE_FUNCTION_FRAME(codeobj_3fead87452e8f9a2d4a3531d96b1e08a, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3fead87452e8f9a2d4a3531d96b1e08a->m_type_description == NULL);
    frame_3fead87452e8f9a2d4a3531d96b1e08a = cache_frame_3fead87452e8f9a2d4a3531d96b1e08a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3fead87452e8f9a2d4a3531d96b1e08a);
    assert(Py_REFCNT(frame_3fead87452e8f9a2d4a3531d96b1e08a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fget);
        tmp_assattr_value_1 = par_fget;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[175], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3fead87452e8f9a2d4a3531d96b1e08a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fead87452e8f9a2d4a3531d96b1e08a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fead87452e8f9a2d4a3531d96b1e08a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3fead87452e8f9a2d4a3531d96b1e08a,
        type_description_1,
        par_self,
        par_fget,
        par_fset
    );


    // Release cached frame if used for exception.
    if (frame_3fead87452e8f9a2d4a3531d96b1e08a == cache_frame_3fead87452e8f9a2d4a3531d96b1e08a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3fead87452e8f9a2d4a3531d96b1e08a);
        cache_frame_3fead87452e8f9a2d4a3531d96b1e08a = NULL;
    }

    assertFrameObject(frame_3fead87452e8f9a2d4a3531d96b1e08a);

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
    CHECK_OBJECT(par_fget);
    Py_DECREF(par_fget);
    CHECK_OBJECT(par_fset);
    Py_DECREF(par_fset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fget);
    Py_DECREF(par_fget);
    CHECK_OBJECT(par_fset);
    Py_DECREF(par_fset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__36___get__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_instance = python_pars[1];
    PyObject *par_owner = python_pars[2];
    struct Nuitka_FrameObject *frame_3a2484e0f5a3d8d93507c9d6d94289b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_owner);
        tmp_cmp_expr_left_1 = par_owner;
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
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_instance);
        tmp_type_arg_1 = par_instance;
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        {
            PyObject *old = par_owner;
            assert(old != NULL);
            par_owner = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0)) {
        Py_XDECREF(cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0 = MAKE_FUNCTION_FRAME(codeobj_3a2484e0f5a3d8d93507c9d6d94289b0, module_torch$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0->m_type_description == NULL);
    frame_3a2484e0f5a3d8d93507c9d6d94289b0 = cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a2484e0f5a3d8d93507c9d6d94289b0);
    assert(Py_REFCNT(frame_3a2484e0f5a3d8d93507c9d6d94289b0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[175]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_instance);
        tmp_args_element_value_1 = par_instance;
        CHECK_OBJECT(par_owner);
        tmp_args_element_value_2 = par_owner;
        frame_3a2484e0f5a3d8d93507c9d6d94289b0->m_frame.f_lineno = 573;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[176],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3a2484e0f5a3d8d93507c9d6d94289b0->m_frame.f_lineno = 573;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
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
        exception_tb = MAKE_TRACEBACK(frame_3a2484e0f5a3d8d93507c9d6d94289b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a2484e0f5a3d8d93507c9d6d94289b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a2484e0f5a3d8d93507c9d6d94289b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a2484e0f5a3d8d93507c9d6d94289b0,
        type_description_1,
        par_self,
        par_instance,
        par_owner
    );


    // Release cached frame if used for exception.
    if (frame_3a2484e0f5a3d8d93507c9d6d94289b0 == cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0);
        cache_frame_3a2484e0f5a3d8d93507c9d6d94289b0 = NULL;
    }

    assertFrameObject(frame_3a2484e0f5a3d8d93507c9d6d94289b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_owner);
    Py_DECREF(par_owner);
    par_owner = NULL;
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

    CHECK_OBJECT(par_owner);
    Py_DECREF(par_owner);
    par_owner = NULL;
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
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_utils$$$function__37_classproperty(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_FrameObject *frame_64115cb12b04696cb7b969c7e64fd8f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_64115cb12b04696cb7b969c7e64fd8f8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64115cb12b04696cb7b969c7e64fd8f8)) {
        Py_XDECREF(cache_frame_64115cb12b04696cb7b969c7e64fd8f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64115cb12b04696cb7b969c7e64fd8f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64115cb12b04696cb7b969c7e64fd8f8 = MAKE_FUNCTION_FRAME(codeobj_64115cb12b04696cb7b969c7e64fd8f8, module_torch$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64115cb12b04696cb7b969c7e64fd8f8->m_type_description == NULL);
    frame_64115cb12b04696cb7b969c7e64fd8f8 = cache_frame_64115cb12b04696cb7b969c7e64fd8f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64115cb12b04696cb7b969c7e64fd8f8);
    assert(Py_REFCNT(frame_64115cb12b04696cb7b969c7e64fd8f8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_func);
        tmp_isinstance_inst_1 = par_func;
        tmp_isinstance_cls_1 = mod_consts[177];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
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
        PyObject *tmp_classmethod_arg_1;
        CHECK_OBJECT(par_func);
        tmp_classmethod_arg_1 = par_func;
        tmp_assign_source_1 = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        {
            PyObject *old = par_func;
            assert(old != NULL);
            par_func = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_args_element_value_1 = par_func;
        frame_64115cb12b04696cb7b969c7e64fd8f8->m_frame.f_lineno = 578;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64115cb12b04696cb7b969c7e64fd8f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64115cb12b04696cb7b969c7e64fd8f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64115cb12b04696cb7b969c7e64fd8f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64115cb12b04696cb7b969c7e64fd8f8,
        type_description_1,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_64115cb12b04696cb7b969c7e64fd8f8 == cache_frame_64115cb12b04696cb7b969c7e64fd8f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64115cb12b04696cb7b969c7e64fd8f8);
        cache_frame_64115cb12b04696cb7b969c7e64fd8f8 = NULL;
    }

    assertFrameObject(frame_64115cb12b04696cb7b969c7e64fd8f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
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

    Py_XDECREF(par_func);
    par_func = NULL;
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



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__10__rebuild_meta_tensor_no_storage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__10__rebuild_meta_tensor_no_storage,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a6c21d4591f2e79a0eb69e4cc60926c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__11__rebuild_qtensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__11__rebuild_qtensor,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1643b3b1231795b0b63b8e8f35d255d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__12__rebuild_parameter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__12__rebuild_parameter,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed5c6234a3a1096efc493056350a8e56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__13__import_dotted_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__13__import_dotted_name,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8fefb57dbf6bdd3dddfd9754b96a7219,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__14__accumulate(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__14__accumulate,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3cccea3ce8ab8916343e139e18d19163,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[88],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__15_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__15_lambda,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c5f2fbaac199b472a683749df34b7e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__16__flatten_dense_tensors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__16__flatten_dense_tensors,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_201a2c893bf39d25fbec0a2c2e43a82c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__17__flatten_sparse_tensors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__17__flatten_sparse_tensors,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3b226bc30f1700f3dab9500be36ea2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__18__unflatten_dense_tensors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__18__unflatten_dense_tensors,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e3254c6cff40ead4837673acb7bfac8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__19__unflatten_sparse_tensors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__19__unflatten_sparse_tensors,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d91016314693526f83e3d86cfe7404ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__1__type(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__1__type,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_182733290ad99500eb708538b02a6442,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__20__reorder_tensors_as() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__20__reorder_tensors_as,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_febd972d2235927d75b3942588cf3972,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__21__take_tensors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__21__take_tensors,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ca2ad788b0e477597fef177f7eb4335,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors$$$function__1_lambda,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_0d20a917a826dc0c3294e5dfa4ab1d0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__22_annotate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__22_annotate,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46a3cb75982264d229c36cebb8e89f31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__22_annotate$$$function__1_dec(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__22_annotate$$$function__1_dec,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_b88848620d6e4230d4bf2c1815b0d3b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__23___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__23___repr__,
        mod_consts[219],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_49762fe9c9e0bfd19d68f7e6ae854fcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__24___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__24___init__,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_7c88238f77f53c0b49be584c6d6cfb3e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__25_reraise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__25_reraise,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_aa745d24a0d7d7d5ac8f2c61be1767db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__26__get_available_device_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__26__get_available_device_type,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e2d90417302cf2bd383d978143d112cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__27__get_device_attr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__27__get_device_attr,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5066590d070c27607459f3671e463306,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__28__get_current_device_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__28__get_current_device_index,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4080b10e2549625fc26c9f6bacca6de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__28__get_current_device_index$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__28__get_current_device_index$$$function__1_lambda,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_56cfb4ec58cf2808e7cb8e6190055a25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__29__get_all_device_indices() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__29__get_all_device_indices,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f367202efa296c081bafd1df7dfea2e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__29__get_all_device_indices$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__29__get_all_device_indices$$$function__1_lambda,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_df0b3e1f1fc0baf78e4fb72250fd3ea8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__2__cuda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__2__cuda,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f95ff57598fc2b4d6537fa6e04c79adf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__30__get_devices_properties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__30__get_devices_properties,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe131ba0dbd9ac9100d88e4d2521f734,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__30__get_devices_properties$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__30__get_devices_properties$$$function__1_lambda,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_7f174b14ef224d1ab8d179ca4f1452a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__31_get_current_device_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__31_get_current_device_index,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3f409f9da99b7790237373e026a3ade,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$_utils,
        mod_consts[152],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__32__get_device_index(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__32__get_device_index,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18e7eecaba0179973a7f2110d2208083,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$_utils,
        mod_consts[161],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__33__handle_complex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__33__handle_complex,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c471075e028b24dd1a396a57ea3fb19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[165],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__34__element_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__34__element_size,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e9c57989024f41b5aef6a829e7de230,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        mod_consts[174],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__35___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__35___init__,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_3fead87452e8f9a2d4a3531d96b1e08a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__36___get__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__36___get__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_3a2484e0f5a3d8d93507c9d6d94289b0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__37_classproperty() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__37_classproperty,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64115cb12b04696cb7b969c7e64fd8f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__3__get_async_or_non_blocking() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__3__get_async_or_non_blocking,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_253a13b8ca219cfdacf3171a60ae3921,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__4__rebuild_tensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__4__rebuild_tensor,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2260b48f1dd48f6c8a39aae57cc5f845,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__5__rebuild_tensor_v2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__5__rebuild_tensor_v2,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9620dae1a158ee12a786991c40e0c2d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__6__validate_loaded_sparse_tensors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__6__validate_loaded_sparse_tensors,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33b284d7bd2705568de7ab98682a12de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__7__rebuild_sparse_tensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__7__rebuild_sparse_tensor,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ed9067aa9658fed2aeef57da5118ca1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__8__rebuild_sparse_csr_tensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__8__rebuild_sparse_csr_tensor,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f44927daef4c8804fbcff0e8ddcad958,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_utils$$$function__9__rebuild_device_tensor_from_numpy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_utils$$$function__9__rebuild_device_tensor_from_numpy,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43bef7aa96321a9122d6072e82c558b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_utils,
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

function_impl_code functable_torch$_utils[] = {
    impl_torch$_utils$$$function__21__take_tensors$$$genobj__1__take_tensors$$$function__1_lambda,
    impl_torch$_utils$$$function__22_annotate$$$function__1_dec,
    impl_torch$_utils$$$function__28__get_current_device_index$$$function__1_lambda,
    impl_torch$_utils$$$function__29__get_all_device_indices$$$function__1_lambda,
    impl_torch$_utils$$$function__30__get_devices_properties$$$function__1_lambda,
    impl_torch$_utils$$$function__1__type,
    impl_torch$_utils$$$function__2__cuda,
    impl_torch$_utils$$$function__3__get_async_or_non_blocking,
    impl_torch$_utils$$$function__4__rebuild_tensor,
    impl_torch$_utils$$$function__5__rebuild_tensor_v2,
    impl_torch$_utils$$$function__6__validate_loaded_sparse_tensors,
    impl_torch$_utils$$$function__7__rebuild_sparse_tensor,
    impl_torch$_utils$$$function__8__rebuild_sparse_csr_tensor,
    impl_torch$_utils$$$function__9__rebuild_device_tensor_from_numpy,
    impl_torch$_utils$$$function__10__rebuild_meta_tensor_no_storage,
    impl_torch$_utils$$$function__11__rebuild_qtensor,
    impl_torch$_utils$$$function__12__rebuild_parameter,
    impl_torch$_utils$$$function__13__import_dotted_name,
    impl_torch$_utils$$$function__15_lambda,
    impl_torch$_utils$$$function__14__accumulate,
    impl_torch$_utils$$$function__16__flatten_dense_tensors,
    impl_torch$_utils$$$function__17__flatten_sparse_tensors,
    impl_torch$_utils$$$function__18__unflatten_dense_tensors,
    impl_torch$_utils$$$function__19__unflatten_sparse_tensors,
    impl_torch$_utils$$$function__20__reorder_tensors_as,
    impl_torch$_utils$$$function__21__take_tensors,
    impl_torch$_utils$$$function__22_annotate,
    impl_torch$_utils$$$function__23___repr__,
    impl_torch$_utils$$$function__24___init__,
    impl_torch$_utils$$$function__25_reraise,
    impl_torch$_utils$$$function__26__get_available_device_type,
    impl_torch$_utils$$$function__27__get_device_attr,
    impl_torch$_utils$$$function__28__get_current_device_index,
    impl_torch$_utils$$$function__29__get_all_device_indices,
    impl_torch$_utils$$$function__30__get_devices_properties,
    impl_torch$_utils$$$function__31_get_current_device_index,
    impl_torch$_utils$$$function__32__get_device_index,
    impl_torch$_utils$$$function__33__handle_complex,
    impl_torch$_utils$$$function__34__element_size,
    impl_torch$_utils$$$function__35___init__,
    impl_torch$_utils$$$function__36___get__,
    impl_torch$_utils$$$function__37_classproperty,
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

    function_impl_code *current = functable_torch$_utils;
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

    if (offset > sizeof(functable_torch$_utils) || offset < 0) {
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
        functable_torch$_utils[offset],
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
        module_torch$_utils,
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
PyObject *modulecode_torch$_utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch._utils");

    // Store the module for future use.
    module_torch$_utils = module;

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
        PRINT_STRING("torch._utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$_utils\n");

    moduledict_torch$_utils = MODULE_DICT(module_torch$_utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[131]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$_utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f61f0f62ca6ae93c7186f500aefc3fbe;
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
    PyObject *locals_torch$_utils$$$class__1_KeyErrorMessage_419 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_70df52e2b237dba6f7154328345bf29f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_torch$_utils$$$class__2_ExceptionWrapper_425 = NULL;
    struct Nuitka_FrameObject *frame_d35e36caa2e8206e49a6765b17dbdfb2_3;
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
    PyObject *locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_2);
    }
    frame_f61f0f62ca6ae93c7186f500aefc3fbe = MAKE_MODULE_FRAME(codeobj_f61f0f62ca6ae93c7186f500aefc3fbe, module_torch$_utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f61f0f62ca6ae93c7186f500aefc3fbe);
    assert(Py_REFCNT(frame_f61f0f62ca6ae93c7186f500aefc3fbe) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[182], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[183], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[68];
        frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
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
                (PyObject *)moduledict_torch$_utils,
                mod_consts[185],
                mod_consts[68]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[185]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$_utils,
                mod_consts[186],
                mod_consts[68]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[186]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$_utils,
                mod_consts[187],
                mod_consts[68]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[187]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$_utils,
                mod_consts[188],
                mod_consts[68]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[188]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[33];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$_utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[68];
        frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 3;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[189];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$_utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[190];
        tmp_level_value_3 = mod_consts[68];
        frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 4;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$_utils,
                mod_consts[104],
                mod_consts[68]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[132];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$_utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[68];
        frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 6;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[191];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_15 = MAKE_FUNCTION_torch$_utils$$$function__1__type(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[191];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_16 = MAKE_FUNCTION_torch$_utils$$$function__2__cuda(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$_utils$$$function__3__get_async_or_non_blocking();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_torch$_utils$$$function__4__rebuild_tensor();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$_utils$$$function__5__rebuild_tensor_v2();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_20);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[195];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[45];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$_utils$$$function__6__validate_loaded_sparse_tensors();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_torch$_utils$$$function__7__rebuild_sparse_tensor();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_torch$_utils$$$function__8__rebuild_sparse_csr_tensor();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$_utils$$$function__9__rebuild_device_tensor_from_numpy();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assign_source_25 == NULL)) {
            tmp_assign_source_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
        }

        assert(!(tmp_assign_source_25 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assign_source_26 == NULL)) {
            tmp_assign_source_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_torch$_utils$$$function__10__rebuild_meta_tensor_no_storage();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_torch$_utils$$$function__11__rebuild_qtensor();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_torch$_utils$$$function__12__rebuild_parameter();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_torch$_utils$$$function__13__import_dotted_name();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_1;


        tmp_tuple_element_1 = MAKE_FUNCTION_torch$_utils$$$function__15_lambda();

        tmp_defaults_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_1);


        tmp_assign_source_31 = MAKE_FUNCTION_torch$_utils$$$function__14__accumulate(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_torch$_utils$$$function__16__flatten_dense_tensors();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_torch$_utils$$$function__17__flatten_sparse_tensors();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_torch$_utils$$$function__18__unflatten_dense_tensors();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_torch$_utils$$$function__19__unflatten_sparse_tensors();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_torch$_utils$$$function__20__reorder_tensors_as();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_torch$_utils$$$function__21__take_tensors();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_torch$_utils$$$function__22_annotate();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_38);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[211];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_39 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
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
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
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
        tmp_subscript_value_2 = mod_consts[68];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
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


            exception_lineno = 419;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[212]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[212]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[137];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 419;
        tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[213]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
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
        tmp_mod_expr_left_1 = mod_consts[214];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[4];
        tmp_getattr_default_1 = mod_consts[215];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 419;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_43;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$_utils$$$class__1_KeyErrorMessage_419 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__1_KeyErrorMessage_419, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[217];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__1_KeyErrorMessage_419, mod_consts[179], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__1_KeyErrorMessage_419, mod_consts[218], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_4;
        }
        frame_70df52e2b237dba6f7154328345bf29f_2 = MAKE_CLASS_FRAME(codeobj_70df52e2b237dba6f7154328345bf29f, module_torch$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_70df52e2b237dba6f7154328345bf29f_2);
        assert(Py_REFCNT(frame_70df52e2b237dba6f7154328345bf29f_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_torch$_utils$$$function__23___repr__();

        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__1_KeyErrorMessage_419, mod_consts[219], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70df52e2b237dba6f7154328345bf29f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70df52e2b237dba6f7154328345bf29f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70df52e2b237dba6f7154328345bf29f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70df52e2b237dba6f7154328345bf29f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_70df52e2b237dba6f7154328345bf29f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[211];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[211];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__1_KeyErrorMessage_419, mod_consts[221], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[137];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$_utils$$$class__1_KeyErrorMessage_419;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 419;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_44 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torch$_utils$$$class__1_KeyErrorMessage_419);
        locals_torch$_utils$$$class__1_KeyErrorMessage_419 = NULL;
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

        Py_DECREF(locals_torch$_utils$$$class__1_KeyErrorMessage_419);
        locals_torch$_utils$$$class__1_KeyErrorMessage_419 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 419;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_44);
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[222];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_46 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[68];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[212]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[212]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = mod_consts[223];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 425;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[213]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[214];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[4];
        tmp_getattr_default_2 = mod_consts[215];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[4]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 425;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_50;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$_utils$$$class__2_ExceptionWrapper_425 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__2_ExceptionWrapper_425, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[224];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__2_ExceptionWrapper_425, mod_consts[179], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[223];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__2_ExceptionWrapper_425, mod_consts[218], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_7;
        }
        frame_d35e36caa2e8206e49a6765b17dbdfb2_3 = MAKE_CLASS_FRAME(codeobj_d35e36caa2e8206e49a6765b17dbdfb2, module_torch$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d35e36caa2e8206e49a6765b17dbdfb2_3);
        assert(Py_REFCNT(frame_d35e36caa2e8206e49a6765b17dbdfb2_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[225];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_torch$_utils$$$function__24___init__(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__2_ExceptionWrapper_425, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$_utils$$$function__25_reraise();

        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__2_ExceptionWrapper_425, mod_consts[228], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d35e36caa2e8206e49a6765b17dbdfb2_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d35e36caa2e8206e49a6765b17dbdfb2_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d35e36caa2e8206e49a6765b17dbdfb2_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d35e36caa2e8206e49a6765b17dbdfb2_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_d35e36caa2e8206e49a6765b17dbdfb2_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_2 = mod_consts[222];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        tmp_dictset_value = mod_consts[222];
        tmp_res = PyObject_SetItem(locals_torch$_utils$$$class__2_ExceptionWrapper_425, mod_consts[221], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[223];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_torch$_utils$$$class__2_ExceptionWrapper_425;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 425;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_51 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_torch$_utils$$$class__2_ExceptionWrapper_425);
        locals_torch$_utils$$$class__2_ExceptionWrapper_425 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$_utils$$$class__2_ExceptionWrapper_425);
        locals_torch$_utils$$$class__2_ExceptionWrapper_425 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 425;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_51);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_torch$_utils$$$function__26__get_available_device_type();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_torch$_utils$$$function__27__get_device_attr();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_torch$_utils$$$function__28__get_current_device_index();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_torch$_utils$$$function__29__get_all_device_indices();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_torch$_utils$$$function__30__get_devices_properties();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[232]);


        tmp_assign_source_58 = MAKE_FUNCTION_torch$_utils$$$function__31_get_current_device_index(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_defaults_5 = mod_consts[233];
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[234];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[235];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[127];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_59 = MAKE_FUNCTION_torch$_utils$$$function__32__get_device_index(tmp_defaults_5, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;


        tmp_assign_source_60 = MAKE_FUNCTION_torch$_utils$$$function__33__handle_complex();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;


        tmp_assign_source_61 = MAKE_FUNCTION_torch$_utils$$$function__34__element_size();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_63;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyDict_SetItem(locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566, mod_consts[2], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[178];
        tmp_res = PyDict_SetItem(locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566, mod_consts[218], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[239];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_torch$_utils$$$function__35___init__(tmp_defaults_6);

            tmp_res = PyDict_SetItem(locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[239];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_torch$_utils$$$function__36___get__(tmp_defaults_7);

            tmp_res = PyDict_SetItem(locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[178];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[242];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame.f_lineno = 566;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_64 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566);
        locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566);
        locals_torch$_utils$$$class__3__ClassPropertyDescriptor_566 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 566;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_64);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f61f0f62ca6ae93c7186f500aefc3fbe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f61f0f62ca6ae93c7186f500aefc3fbe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f61f0f62ca6ae93c7186f500aefc3fbe, exception_lineno);
    }



    assertFrameObject(frame_f61f0f62ca6ae93c7186f500aefc3fbe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_66;


        tmp_assign_source_66 = MAKE_FUNCTION_torch$_utils$$$function__37_classproperty();

        UPDATE_STRING_DICT1(moduledict_torch$_utils, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_66);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch._utils", false);

    Py_INCREF(module_torch$_utils);
    return module_torch$_utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$_utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
